#include "\34thPRC_Functions\M99A2S3A\_includes\defines_macros.hpp"

// // Add our custom function for ace fired event handlers
["ace_firedPlayer", 				{_this spawn MACRO_FNC_NAME(airburst_fired_eh);}] call CBA_fnc_addEventHandler;
["ace_firedPlayerNonLocal", 		{_this spawn MACRO_FNC_NAME(airburst_fired_eh);}] call CBA_fnc_addEventHandler;
["ace_firedNonPlayer", 				{_this spawn MACRO_FNC_NAME(airburst_fired_eh);}] call CBA_fnc_addEventHandler;
["ace_firedPlayerVehicle",  		{_this spawn MACRO_FNC_NAME(airburst_fired_eh);}] call CBA_fnc_addEventHandler;
["ace_firedPlayerVehicleNonLocal",  {_this spawn MACRO_FNC_NAME(airburst_fired_eh);}] call CBA_fnc_addEventHandler;

// [MACRO_QUOTE(MACRO_EVENT_NAME(airburst_fired_server)), {
// 	_this call MACRO_FNC_NAME(airburst_fired_server);
// }] call CBA_fnc_addEventHandler;

//keybinds
call MACRO_FNC_NAME(airburst_register_keybinds);
