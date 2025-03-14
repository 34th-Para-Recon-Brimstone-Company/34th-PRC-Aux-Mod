#include "\34thPRC_Functions\M99A2S3A\_includes\defines_macros.hpp"
#undef MACRO_SCRIPT
#define MACRO_SCRIPT "[a2s3a_preinit.sqf] "

diag_log format[MACRO_DIAG_LOG,format [MACRO_SCRIPT+"Loading"]];

// UI
	[
		"34thPRC_Functions\M99A2S3A\functions\ui\onLoad.sqf",
		MACRO_QUOTE(MACRO_FNC_NAME(airburst_onload))
	] call CBA_fnc_compileFunction;

	[
		"34thPRC_Functions\M99A2S3A\functions\ui\onConfirm.sqf",
		MACRO_QUOTE(MACRO_FNC_NAME(airburst_onConfirm))
	] call CBA_fnc_compileFunction;

	[
		"34thPRC_Functions\M99A2S3A\functions\ui\onExit.sqf",
		MACRO_QUOTE(MACRO_FNC_NAME(airburst_onExit))
	] call CBA_fnc_compileFunction;
//

[
	"34thPRC_Functions\M99A2S3A\functions\fired_eh.sqf",
	MACRO_QUOTE(MACRO_FNC_NAME(airburst_fired_eh))
] call CBA_fnc_compileFunction;

[
	"34thPRC_Functions\M99A2S3A\functions\handle_is_burst.sqf",
	MACRO_QUOTE(MACRO_FNC_NAME(airburst_handle_is_burst))
] call CBA_fnc_compileFunction;

[
	"34thPRC_Functions\M99A2S3A\functions\conditions.sqf",
	MACRO_QUOTE(MACRO_FNC_NAME(airburst_interaction_condition))
] call CBA_fnc_compileFunction;

[
	"34thPRC_Functions\M99A2S3A\functions\set_fuse_distance.sqf",
	MACRO_QUOTE(MACRO_FNC_NAME(airburst_set_fuse_distance))
] call CBA_fnc_compileFunction;

[
	"34thPRC_Functions\M99A2S3A\functions\keybind.sqf",
	MACRO_QUOTE(MACRO_FNC_NAME(airburst_register_keybinds))
] call CBA_fnc_compileFunction;

[
	"34thPRC_Functions\M99A2S3A\functions\lase_distance_infantry.sqf",
	MACRO_QUOTE(MACRO_FNC_NAME(airburst_lase_distance_infantry))
] call CBA_fnc_compileFunction;

[
	"34thPRC_Functions\M99A2S3A\functions\lase_distance_vehicle.sqf",
	MACRO_QUOTE(MACRO_FNC_NAME(airburst_lase_distance_vehicle))
] call CBA_fnc_compileFunction;



diag_log format[MACRO_DIAG_LOG,format [MACRO_SCRIPT+"Loaded"]];
