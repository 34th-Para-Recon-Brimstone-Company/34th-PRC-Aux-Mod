/* Arguments:
 * Same as Fired EH from base Arma (though not called by it)
 * unit: Object - Object the event handler is assigned to
 * weapon: String - Fired weapon
 * muzzle: String - Muzzle that was used
 * mode: String - Current mode of the fired weapon
 * ammo: String - Ammo used
 * magazine: String - magazine name which was used
 * projectile: Object - Object of the projectile that was shot out
 * gunner: Object - gunner whose weapons are firing.
 *
 *
 * Example:
 * [...] call aux_1stMEU_fnc_airburst_fired_eh
 *
 * Public: No
 */

#include "\34thPRC_Functions\M99A2S3A\_includes\defines_macros.hpp"
#undef MACRO_SCRIPT
#define MACRO_SCRIPT "[airburst fired_eh.sqf] "

params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_gunner"];

_config = configFile >> "CfgMagazines" >> _magazine >> "M99A2S3A_Properties";
if(!(isClass _config)) exitWith {};

diag_log format [MACRO_SCRIPT+"%1 has airburst properties", _magazine];

[_magazine,_projectile,_unit] call MACRO_FNC_NAME(airburst_handle_is_burst);
