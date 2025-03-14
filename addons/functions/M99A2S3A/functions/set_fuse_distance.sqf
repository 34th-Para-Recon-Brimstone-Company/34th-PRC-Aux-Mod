#include "\34thPRC_Functions\M99A2S3A\_includes\defines_macros.hpp"
#undef MACRO_SCRIPT
#define MACRO_SCRIPT "[airburst setFuseDistance.sqf] "

params [["_unit",ace_player],["_distance",0]];

// Check that the fuse value is between mag range, and hint properly
_magazine = currentMagazine _unit;
_config = configFile >> "CfgMagazines" >> _magazine >> "M99A2S3A_Properties";
_configDefaut = configFile >> "M99A2S3A_Properties_Defualt";

_maxRange  = getNumber (_configDefaut >> "fuse_distance_max");
_minRange  = getNumber (_configDefaut >> "fuse_distance_min");

if((isClass _config)) then {
	_maxRange  = getNumber (_config >> "fuse_distance_max");
	_minRange  = getNumber (_config >> "fuse_distance_min");
};

if(_distance > _maxRange) then {_distance = _maxRange};
if(_distance < _minRange) then {_distance = 0};

_unit setVariable [MACRO_QUOTE(MACRO_VAR_NAME(fuse_distance)), format["%1",_distance]];

//No need to hint if in vic
if !(isNull objectParent ace_player) exitWith {};

if(_distance == 0) then {
	hint format['Airburst set: Disabled'];
} else {
	hint format['Airburst set: %1m.',_distance];
};
