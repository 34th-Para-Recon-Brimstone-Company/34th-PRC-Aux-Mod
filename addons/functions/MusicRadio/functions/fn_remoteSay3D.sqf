// Execute say3D on all systems, written by TeTeT
params ["_obj", "_sound", ["_maxDistance", 100]];

[_obj, [_sound, _maxDistance]] remoteExec ["say3D", 0, false];
