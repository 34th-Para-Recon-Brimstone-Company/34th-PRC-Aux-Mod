// Written by TeTeT for Unsung arma 3
// add mission music from CfgSounds that starts with uns_music as class name
params ["_helo"];

diag_log "Helo custom music sqf";

if (!local _helo) exitWith {};
diag_log "Helo is local";

if (count(missionNamespace getVariable ["uns_customMusicConfigs", []]) == 0) then {
	uns_customMusicConfigs = "getNumber (_x >> 'uns_music_chopper') == 1" configClasses (getMissionConfig "CfgSounds");
	uns_customMusicConfigs append ("getNumber (_x >> 'uns_music_chopper') == 1" configClasses (configFile >> "CfgSounds"));
};

diag_log format ["Number of detected music files: %1", count uns_customMusicConfigs];

{
	private _maxDistance = (getArray (_x >> "sound")) # 3;
	if (_maxDistance isEqualTo 0) then {
		_maxDistance = 1000;
	};
	[_helo,
		[
		format ["<t color='#199bf0'>~ %1</t>", getText (_x >> "name")],
		"[_this # 0, _this # 3 # 0, _this # 3 # 1] call uns_mbox_fnc_remoteSay3D",
		[configName _x, _maxDistance],
		1,
		false,
		true,
		"",
		"alive _target and player isEqualTo driver _target"
		] ] remoteExec ["addAction", 0, true];
	diag_log format ["Added music %1", getText (_x >> "name")];
} forEach uns_customMusicConfigs;

_helo;
