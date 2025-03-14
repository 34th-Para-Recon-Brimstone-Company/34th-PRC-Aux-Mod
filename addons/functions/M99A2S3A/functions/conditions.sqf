#include "\34thPRC_Functions\M99A2S3A\_includes\defines_macros.hpp"
#undef MACRO_SCRIPT
#define MACRO_SCRIPT "[airburst condition.sqf] "

//Could be a player or vehicle
params ["_player"];

_currMag = currentMagazine _player;
_config = configFile >> "CfgMagazines" >> _currMag >> "M99A2S3A_Properties";

if(!(isClass _config)) exitWith {false};
true
