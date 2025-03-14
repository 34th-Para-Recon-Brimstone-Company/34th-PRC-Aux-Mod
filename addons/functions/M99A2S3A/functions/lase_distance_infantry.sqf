#include "\34thPRC_Functions\M99A2S3A\_includes\defines_macros.hpp"
#undef MACRO_SCRIPT
#define MACRO_SCRIPT "[airburst lase_distance_infantry.sqf] "

params[["_unit",ace_player]];

//diag_log format [MACRO_SCRIPT+"getting distance to crosshair for %1",_unit];

// Check that the fuse value is between mag range, and hint properly
_magazine = currentMagazine ace_player;
_config = configFile >> "CfgMagazines" >> _magazine >> "M99A2S3A_Properties";
_configDefaut = configFile >> "M99A2S3A_Properties_Defualt";

_maxRange  = getNumber (_configDefaut >> "fuse_distance_max");

if((isClass _config)) then {
	_maxRange  = getNumber (_config >> "fuse_distance_max");
};

_ins = lineIntersectsSurfaces [
	AGLToASL positionCameraToWorld [0,0,0],
	AGLToASL positionCameraToWorld [0,0,_maxRange],
	_unit,
	objectParent _unit,
	true,1,
	"FIRE",
	"VIEW"
];

//if no interestion, exit
if (count _ins == 0) exitWith {
	[_unit,0] call MACRO_FNC_NAME(airburst_set_fuse_distance);
};

_dist = (getPosASL _unit) distance (_ins select 0 select 0);

//pos must be atl
if(MEU_Common_Debug) then {
	[(_ins select 0 select 0)] spawn {
		params ["_debugPos"];
		_arrow = createVehicle ["Sign_Arrow_F", ASLToATL _debugPos, [], 0, "CAN_COLLIDE"];
		sleep 5;
		deleteVehicle _arrow;
	};

};

diag_log format [MACRO_SCRIPT+"intersection at %1 at distance %2",_pos,_dist];

[_unit,_dist] call MACRO_FNC_NAME(airburst_set_fuse_distance);
