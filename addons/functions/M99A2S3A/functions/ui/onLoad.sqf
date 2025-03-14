#include "\34thPRC_Functions\M99A2S3A\_includes\defines_macros.hpp"
#undef MACRO_SCRIPT
#define MACRO_SCRIPT "[airburst onload.sqf] "

params["_display"];


// Autofil the last value, or 0 if none
_storedVal = parseNumber (ace_player getVariable [MACRO_QUOTE(MACRO_VAR_NAME(fuse_distance)),"0"]);
(_display displayCtrl 101) ctrlSetText format["%1",_storedVal];

_magazine = currentMagazine ace_player;
_config = configFile >> "CfgMagazines" >> _magazine >> "M99A2S3A_Properties";
_configDefaut = configFile >> "M99A2S3A_Properties_Defualt";

_maxRange  = getNumber (_configDefaut >> "fuse_distance_max");
_minRange  = getNumber (_configDefaut >> "fuse_distance_min");
_minRandom = getNumber (_configDefaut >> "fuse_distance_random_min");
_maxRandom = getNumber (_configDefaut >> "fuse_distance_random_max");
if((isClass _config)) then {
	_maxRange  = getNumber (_config >> "fuse_distance_max");
	_minRange  = getNumber (_config >> "fuse_distance_min");
	_minRandom = getNumber (_config >> "fuse_distance_random_min");
	_maxRandom = getNumber (_config >> "fuse_distance_random_max");
};

(_display displayCtrl 105) ctrlSetText (format ["-%1/+%2",_minRandom,_maxRandom]);

(_display displayCtrl 103) ctrlSetText (format ["%1",_minRange]);

(_display displayCtrl 104) ctrlSetText (format ["%1",_maxRange]);
