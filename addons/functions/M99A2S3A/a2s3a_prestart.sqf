[
	"34thPRC_Functions\M99A2S3A\functions\ace\airburst_ammunition_handler.sqf",
	"ace_fcs_fnc_handleAirBurstAmmunitionPFH"
] call CBA_fnc_compileFunction;

// Load the rest of ace_arsenal preStart stuff
call compile preprocessFileLineNumbers "ace\addons\fcs\XEH_preStart.sqf";
