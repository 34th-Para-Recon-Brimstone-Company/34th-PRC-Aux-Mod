/* Arguments:
 * magazine: String - magazine name which was used
 * projectile: Object - Object of the projectile that was shot out
 * unit: Object - Object the event handler is assigned to
 *
 *
 * Example:
 * [...] call aux_1stMEU_fnc_airburst_handle_is_burst
 *
 * Public: No
 */

#include "\34thPRC_Functions\M99A2S3A\_includes\defines_macros.hpp"
#undef MACRO_SCRIPT
#define MACRO_SCRIPT "[airburst fired_server.sqf] "

params ["_magazine","_projectile","_unit"];

// Error checking
if(!(isClass (configFile >> "CfgMagazines" >> _magazine))) exitWith {
	diag_log MACRO_RPT_LOG;
	diag_log MACRO_SCRIPT+"Magazine is not class";
};

if(isNull _projectile) exitWith {
	diag_log MACRO_RPT_LOG;
	diag_log MACRO_SCRIPT+"Projecticle can not be null";
};

if(isNull _unit) exitWith {
	diag_log MACRO_RPT_LOG;
	diag_log MACRO_SCRIPT+"unit can not be null";
};

diag_log format [MACRO_SCRIPT+"params %1 : %2", time,_this];
//Defaults
	_config = configFile >> "CfgMagazines" >> _magazine >> "M99A2S3A_Properties";
	_configDefaut = configFile >> "M99A2S3A_Properties_Defualt";
	if(!(isClass _config)) exitWith {
		diag_log MACRO_RPT_LOG;
		diag_log format[MACRO_SCRIPT+"No airburst config data for %1",_magazine];
	};

	_airburst_fuse_dst_min = getNumber (_configDefaut >> "fuse_distance_min"); //Default
	if(isNumber (_config >> "fuse_distance_min")) then {
		_airburst_fuse_dst_min = getNumber (_config >> "fuse_distance_min");
	};

	_airburst_fuse_dst_max = getNumber (_configDefaut >> "fuse_distance_max"); //Default
	if(isNumber (_config >> "fuse_distance_max")) then {
		_airburst_fuse_dst_max = getNumber (_config >> "fuse_distance_max");
	};

	_airburst_fuse_dst_random_min = getNumber (_configDefaut >> "fuse_distance_random_min"); //Default
	if(isNumber (_config >> "fuse_distance_random_min")) then {
		_airburst_fuse_dst_random_min = getNumber (_config >> "fuse_distance_random_min");
	};

	_airburst_fuse_dst_random_max = getNumber (_configDefaut >> "fuse_distance_random_max"); //Default
	if(isNumber (_config >> "fuse_distance_random_max")) then {
		_airburst_fuse_dst_random_max = getNumber (_config >> "fuse_distance_random_max");
	};

	_airburst_fuse_explosion = getText (_configDefaut >> "fuse_explosion"); //Default
	if(isText (_config >> "fuse_explosion")) then {
		_airburst_fuse_explosion = getText (_config >> "fuse_explosion");
	};

	diag_log format[MACRO_SCRIPT+"Airburst values are:"];
	diag_log format[MACRO_SCRIPT+"fuse_distance_min = %1",_airburst_fuse_dst_min];
	diag_log format[MACRO_SCRIPT+"fuse_distance_max = %1",_airburst_fuse_dst_max];
	diag_log format[MACRO_SCRIPT+"fuse_distance_random_min = %1",_airburst_fuse_dst_random_min];
	diag_log format[MACRO_SCRIPT+"fuse_distance_random_max = %1",_airburst_fuse_dst_random_max];
	diag_log format[MACRO_SCRIPT+"fuse_explosion = %1",_airburst_fuse_explosion];
//End

// Get player inputed fuse distance
_fuse = parseNumber (_unit getVariable [MACRO_QUOTE(MACRO_VAR_NAME(fuse_distance)),"0"]);

//Check that the fuse value is within range
if(_fuse < _airburst_fuse_dst_min) exitWith {
	diag_log format [MACRO_SCRIPT+"current fuse %1 v min fuse %2", _fuse ,_airburst_fuse_dst_min];
};
if(_fuse > _airburst_fuse_dst_max) then {_fuse = _airburst_fuse_dst_max;};

//Add random to fuse distance
diag_log format [MACRO_SCRIPT+"fuse randomization %1",[_fuse-_airburst_fuse_dst_random_min, _fuse, _fuse+_airburst_fuse_dst_random_max]];
_fuse = random [_fuse-_airburst_fuse_dst_random_min, _fuse, _fuse+_airburst_fuse_dst_random_max];

diag_log format [MACRO_SCRIPT+"fuse set to %1", _fuse];

[
	ace_fcs_fnc_handleAirBurstAmmunitionPFH,
	0,
	[_unit, _projectile, _fuse,_airburst_fuse_explosion]
] call CBA_fnc_addPerFrameHandler;
