#include "\34thPRC_Functions\M99A2S3A\_includes\defines_macros.hpp"
#undef MACRO_SCRIPT
#define MACRO_SCRIPT "[airburst lase_distance_vehicle.sqf] "

params[["_unit",ace_player]];

diag_log format [MACRO_SCRIPT+"getting distance in vehicle for %1",_unit];

// Check that the fuse value is between mag range, and hint properly
_magazine = currentMagazine (objectParent _unit);
_config = configFile >> "CfgMagazines" >> _magazine >> "M99A2S3A_Properties";
_configDefaut = configFile >> "M99A2S3A_Properties_Defualt";

_maxRange  = getNumber (_configDefaut >> "fuse_distance_max");
_minRange  = getNumber (_configDefaut >> "fuse_distance_min");
if((isClass _config)) then {
	_maxRange  = getNumber (_config >> "fuse_distance_max");
	_minRange  = getNumber (_config >> "fuse_distance_min");
};

diag_log format [MACRO_SCRIPT+"lase distance values max: %1 min: %2 for %3",_maxRange,_minRange,_unit];
_dist = [1,_maxRange,_minRange,false] call ace_fcs_fnc_getRange;

diag_log format [MACRO_SCRIPT+"vehicle lase distance of %1",_dist];

//IF the user lases into the sky, the min value is returned, so if they
//lase the sky then dist = minrange, which means disable burst, so we do that.
if(_dist == (_minRange)) then {
	_dist = 0;
};

[(objectParent _unit),_dist] call MACRO_FNC_NAME(airburst_set_fuse_distance);
