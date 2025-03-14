/*
 * Author: commy2
 * Handle Air burst ammunition. Called from per frame handler.
 *
 * Modification by Namenai to allow different submunition
 * Arguments:
 * -
 *
 * Return Value:
 * None
 *
 * Example:
 * [[array]] call ace_fcs_fnc_handleAirBurstAmmunitionPFH
 *
 * Public: No
 */

#include "\34thPRC_Functions\M99A2S3A\_includes\defines_macros.hpp"
#undef MACRO_SCRIPT
#define MACRO_SCRIPT "[airburst ace airburst pfh.sqf] "   //Addition

(_this select 0) params ["_vehicle", "_projectile", "_zeroing",["_subMunitionClass","ACE_B_35mm_ABM_Helper"]];  //Addition

diag_log format [MACRO_SCRIPT+"params %1", _this select 0];   //Addition

// remove pfh if the projectile died before arriving
if (isNull _projectile || {!alive _projectile}) exitWith {
    [_this select 1] call CBA_fnc_removePerFrameHandler;
};

// wait if not there
if (_projectile distance _vehicle < _zeroing) exitWith {};

// explode
private _position = getPosATL _projectile;

private _subMunition = createVehicle [_subMunitionClass, _position, [], 0, "FLY"]; // Addition

_subMunition setPosATL _position;
_subMunition setVelocity [0, 0, -10];

deleteVehicle _projectile;

[_this select 1] call CBA_fnc_removePerFrameHandler;
