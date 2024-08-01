EPSM_PlaySounds = compile preprocessFileLineNumbers "\ExoSystem_WBK\scripts\createSoundGlobal.sqf";



[ 
    "WBK_JumpPacks_BoostUp_Power", 
    "EDITBOX", 
    "Boost up (Required power)",
    "WebKnights Jump packs",
    "50",
    1,
    {   
        params ["_value"];  
        _number = parseNumber _value;
		WBK_JP_Up_Power = _number;
    }
] call CBA_fnc_addSetting;



[ 
    "WBK_JumpPacks_BoostFr_Power", 
    "EDITBOX", 
    "Boost front (Required power)",
    "WebKnights Jump packs",
    "25",
    1,
    {   
        params ["_value"];  
        _number = parseNumber _value;
		WBK_JP_Front_Power = _number;
    }
] call CBA_fnc_addSetting;

[ 
    "WBK_JumpPacks_BoostUp_Distance", 
    "EDITBOX", 
    "Boost up (Distannce)",
    "WebKnights Jump packs",
    "7",
    1,
    {   
        params ["_value"];  
        _number = parseNumber _value;
		WBK_JP_UP_Dist = _number;
    }
] call CBA_fnc_addSetting;

[ 
    "WBK_JumpPacks_BoostUp_Height", 
    "EDITBOX", 
    "Boost up (Height)",
    "WebKnights Jump packs",
    "10",
    1,
    {   
        params ["_value"];  
        _number = parseNumber _value;
		WBK_JP_UP_Height = _number;
    }
] call CBA_fnc_addSetting;


[ 
    "WBK_JumpPacks_BoostFr_Distance", 
    "EDITBOX", 
    "Boost front (Distannce)",
    "WebKnights Jump packs",
    "12",
    1,
    {   
        params ["_value"];  
        _number = parseNumber _value;
		WBK_JP_Front_Dist = _number;
    }
] call CBA_fnc_addSetting;

[ 
    "WBK_JumpPacks_BoostFr_Height", 
    "EDITBOX", 
    "Boost front (Height)",
    "WebKnights Jump packs",
    "2.6",
    1,
    {   
        params ["_value"];  
        _number = parseNumber _value;
		WBK_JP_Front_Height = _number;
    }
] call CBA_fnc_addSetting;



[ 
    "WBK_JumpPacks_Boost_regenTime", 
    "EDITBOX", 
    "Regeneration time (Restart needed)",
    "WebKnights Jump packs",
    "0.05",
    1,
    {   
        params ["_value"];  
        _number = parseNumber _value;
		WBK_JP_Regen_Time = _number;
    }
] call CBA_fnc_addSetting;


[ 
    "WBK_JumpPacks_Boost_regenVal", 
    "EDITBOX", 
    "Regeneration value (Restart needed)",
    "WebKnights Jump packs",
    "1",
    1,
    {   
        params ["_value"];  
        _number = parseNumber _value;
		WBK_JP_Regen_Val = _number;
    }
] call CBA_fnc_addSetting;





WBK_Exoskeleton_Boost_FuncToUse = 0;
WBK_JumpPackArray = ["Exosuit_MK2_Mult_L_Medic","Exosuit_MK2_Mult_L_Engineer","Exosuit_MK2_Mult_L","Exosuit_MK2_Mult_A","Exosuit_MK2_Mult_AA","Exosuit_MK2_Mult_AAL","Exosuit_MK2_Mult_AAM","Exosuit_MK2_Mult_H"];
WBK_AdvancedArmor = ["Exosuit_MK2_Mult_L_Medic","Exosuit_MK2_Mult_L_Engineer","Exosuit_MK2_Mult_L","Exosuit_MK2_Mult_A","Exosuit_MK2_Mult_AA","Exosuit_MK2_Mult_AAL","Exosuit_MK2_Mult_AAM","Exosuit_MK2_Mult_H"];

["WebKnight's Exoskeleton System", "wbk_exo_Boost_UP", ["Activate boosters", "Jump up or front."], {
    _climber = missionNamespace getVariable["bis_fnc_moduleRemoteControl_unit", player];
	if (!(backpack _climber in WBK_JumpPackArray)) exitWith {};
	if ((getText (configfile >> 'CfgVehicles' >> typeOf _climber >> 'moves') != 'CfgMovesMaleSdr') and (getText (configfile >> 'CfgVehicles' >> typeOf _climber >> 'moves') != 'CfgMovesMaleSpaceMarine')) exitWith {};
    if (WBK_Exoskeleton_Boost_FuncToUse == 0) exitWith {
	_climber spawn WBK_Exoskeleton_Boost_UP_fnc;
	};
	_climber spawn WBK_Exoskeleton_Boost_Front_fnc;
}, {},[57, [true, false, false]]] call cba_fnc_addKeybind;
["WebKnight's Exoskeleton System", "wbk_exo_Boost_Front", ["Switch boosters mode", "Switch boosters mod from jumping in vertically of horizontaly."], {
    _climber = missionNamespace getVariable["bis_fnc_moduleRemoteControl_unit", player];
	if (!(backpack _climber in WBK_JumpPackArray)) exitWith {};
    if (WBK_Exoskeleton_Boost_FuncToUse == 0) exitWith {
	WBK_Exoskeleton_Boost_FuncToUse = 1;
	systemChat "Switched to horizontal boost.";
	};
	WBK_Exoskeleton_Boost_FuncToUse = 0;
	systemChat "Switched to vertical boost.";
}, {},[15, [false, false, false]]] call cba_fnc_addKeybind;
["WebKnight's Exoskeleton System", "wbk_exo_Hit", ["Exo-Melee", "Use your exoskeleton for melee."], {
    _climber = missionNamespace getVariable["bis_fnc_moduleRemoteControl_unit", player];
	if ((getText (configfile >> 'CfgVehicles' >> typeOf _climber >> 'moves') != 'CfgMovesMaleSdr') and (getText (configfile >> 'CfgVehicles' >> typeOf _climber >> 'moves') != 'CfgMovesMaleSpaceMarine')) exitWith {};
	if (!(backpack _climber in WBK_AdvancedArmor)) exitWith {};
	_climber spawn ExoSkeleton_Punch;
}, {},[20, [true, false, false]]] call cba_fnc_addKeybind;

["WebKnight's Exoskeleton System", "wbk_exo_Repair", ["Insert new battery/Repair your armour", "Repair your armor by inserting new battery."], {
}, {},[2, [false, true, false]]] call cba_fnc_addKeybind;

["WebKnight's Exoskeleton System", "wbk_exo_Heal", ["Heal yourself", "Heal yourself using medical syringe."], {
}, {},[3, [false, true, false]]] call cba_fnc_addKeybind;


WBK_EPSM_AdvancedArmour_Fix = {
if (
(gestureState _this == "Exo_Gest_Heal_Armor") or
!(alive _this) or 
(lifeState _this == "INCAPACITATED") or 
!(backpack _this in WBK_AdvancedArmor)
) exitWith {};
if (stance _this == "PRONE") exitWith {systemChat "You cannot change your battery while prone";};
if (!("Battery_Full" in items _this)) exitWith {systemChat "No battery in inventory";};
_this playActionNow "Exo_Gest_Heal_Armor";
uisleep 0.3;
if !(gestureState _this == "Exo_Gest_Heal_Armor") exitWith {};
[_this,"WBK_armor_open",20] spawn EPSM_PlaySounds;
uisleep 0.5;
if !(gestureState _this == "Exo_Gest_Heal_Armor") exitWith {};
[_this,"WBK_armor_TakingBattery",20] spawn EPSM_PlaySounds;
uisleep 1.4;
if !(gestureState _this == "Exo_Gest_Heal_Armor") exitWith {};
_this removeitem "Battery_Full";
[_this,"WBK_armor_batteryIn",20] spawn EPSM_PlaySounds;
_this setVariable ["WBK_AdvancedArmor",100,true];
uisleep 0.43;
if !(gestureState _this == "Exo_Gest_Heal_Armor") exitWith {};
[_this,"WBK_armor_close",20] spawn EPSM_PlaySounds;
};


if ("ace_medical_engine" in activatedAddons) then {
WBK_EPSM_AdvancedArmour_Heal = {
if (
(gestureState _this == "Exo_Gest_Heal") or
!(alive _this) or 
(lifeState _this == "INCAPACITATED")
) exitWith {};
if (stance _this == "PRONE") exitWith {systemChat "You heal yourself while prone";};
if (!("Health_Syringe" in items _this)) exitWith {systemChat "No Syringe in inventory";};
_this playActionNow "Exo_Gest_Heal";
[_this,"WBK_armor_TakingBattery",15] spawn EPSM_PlaySounds;
uisleep 0.5;
if !(gestureState _this == "Exo_Gest_Heal") exitWith {};
[_this,"WBK_openSyringe",15] spawn EPSM_PlaySounds;
uisleep 0.5;
if !(gestureState _this == "Exo_Gest_Heal") exitWith {};
_this removeitem "Health_Syringe";
[_this,"WBK_useSyringe",15] spawn EPSM_PlaySounds;
[_this] call ace_medical_treatment_fnc_fullHealLocal;
uisleep 0.43;
if !(gestureState _this == "Exo_Gest_Heal") exitWith {};
[_this,"WBK_Exo_Swing_1",5] spawn EPSM_PlaySounds;
};
}else{
WBK_EPSM_AdvancedArmour_Heal = {
if (
(gestureState _this == "Exo_Gest_Heal") or
!(alive _this) or 
(lifeState _this == "INCAPACITATED")
) exitWith {};
if (stance _this == "PRONE") exitWith {systemChat "You heal yourself while prone";};
if (!("Health_Syringe" in items _this)) exitWith {systemChat "No Syringe in inventory";};
_this playActionNow "Exo_Gest_Heal";
[_this,"WBK_armor_TakingBattery",15] spawn EPSM_PlaySounds;
uisleep 0.5;
if !(gestureState _this == "Exo_Gest_Heal") exitWith {};
[_this,"WBK_openSyringe",15] spawn EPSM_PlaySounds;
uisleep 0.5;
if !(gestureState _this == "Exo_Gest_Heal") exitWith {};
_this removeitem "Health_Syringe";
[_this,"WBK_useSyringe",15] spawn EPSM_PlaySounds;
_this setDamage 0;
uisleep 0.43;
if !(gestureState _this == "Exo_Gest_Heal") exitWith {};
[_this,"WBK_Exo_Swing_1",5] spawn EPSM_PlaySounds;
};
};

WBK_EPSM_AdvancedArmour_Load = {
if (!(isPlayer _this)) exitWith {};
while {(alive _this)} do {
sleep 0.1;
waitUntil {((backpack _this in WBK_AdvancedArmor) and (_this getVariable "WBK_AdvancedArmor" > 0))};
while {((backpack _this in WBK_AdvancedArmor) and (_this getVariable "WBK_AdvancedArmor" > 0))} do {
_this enableStamina false;
_this allowDamage false;
sleep 0.1;
};
_this enableStamina true;
_this allowDamage true;
sleep 0.5;
};
};



WBK_EPSM_AdvancedArmour = {
(_this select 0) params ["_target", "_shooter", "_projectile", "_position", "_velocity", "_selection", "_ammo", "_vector", "_radius", "_surfaceType", "_isDirect"];
if (!(backpack _target in WBK_AdvancedArmor)) exitWith {};
_penemParam = _ammo select 0;
[_target,selectRandom ["WBK_ExoWasHit_1","WBK_ExoWasHit_2","WBK_ExoWasHit_3","WBK_ExoWasHit_4"],25] spawn EPSM_PlaySounds;
if !(isTouchingGround _target) exitWith {
_health = _target getVariable "WBK_AdvancedArmor";
_health = _health - 3;
if (_health <= 0) exitWith {_target setVariable ["WBK_AdvancedArmor",0,true];};
_target setVariable ["WBK_AdvancedArmor",_health,true];
};
if (_penemParam >= 25) exitWith {
_health = _target getVariable "WBK_AdvancedArmor";
_health = _health - 20;
if (_health <= 0) exitWith {_target setVariable ["WBK_AdvancedArmor",0,true];};
_target setVariable ["WBK_AdvancedArmor",_health,true];
};
if (_penemParam >= 8) exitWith {
_health = _target getVariable "WBK_AdvancedArmor";
_health = _health - 5;
if (_health <= 0) exitWith {_target setVariable ["WBK_AdvancedArmor",0,true];};
_target setVariable ["WBK_AdvancedArmor",_health,true];
};
_health = _target getVariable "WBK_AdvancedArmor";
_health = _health - 2;
if (_health <= 0) exitWith {_target setVariable ["WBK_AdvancedArmor",0,true];};
_target setVariable ["WBK_AdvancedArmor",_health,true];
};







WBK_CreateExoJumParticles = {
_player = _this;
_brizglight2 = "#lightpoint" createVehicle (getpos _player);  
_brizglight2 setLightAmbient [1, 0.45, 0.15];  
_brizglight2 setLightColor [1, 0.45, 0.15];  
_brizglight2 setLightBrightness 0.55;
_brizglight2 attachto [_player,[0,-0.25,-0.05], "Spine3",true]; 
_exoJumpFlame = "#particlesource" createVehicleLocal position _player;  
_exoJumpFlame setParticleClass "IEDFlameF"; 
_exoJumpFlame setDropInterval 0.005;
_exoJumpSmoke = "#particlesource" createVehicleLocal position _player;  
_exoJumpSmoke setParticleClass "MachineGunCloud1";  
_exoJumpFlame attachto [_player,[0,-0.25,-0.05], "Spine3",true]; 
_exoJumpSmoke attachto [_player,[0,-0.25,-0.25], "Spine3",true];
_dustEffect = "#particlesource" createVehicleLocal getPosATL _player; 
_dustEffect setParticleClass "HDustVTOL1"; 
_dustEffect attachto [_player,[0,0,0]];
detach _dustEffect;
_dustEffect spawn {
sleep 0.5;
deleteVehicle _this;
};
sleep 0.15;
deleteVehicle _exoJumpFlame;
deleteVehicle _brizglight2;
sleep 0.55;
deleteVehicle _exoJumpSmoke;
};
WBK_Exoskeleton_Boost_UP_fnc = {
_unit = _this;
if (
(gestureState _unit == "Exo_Gest_Jump_Back") or
(gestureState _unit == "Exo_Gest_Jump_Left") or
(gestureState _unit == "Exo_Gest_Jump_Right") or
(gestureState _unit == "Exo_Gest_Jump_Front") or 
(gestureState _unit == "Exo_Gest_Jump_Back_unarmed") or 
(gestureState _unit == "Exo_Gest_Jump_Left_unarmed") or
(gestureState _unit == "Exo_Gest_Jump_Right_unarmed") or
(gestureState _unit == "Exo_Gest_Jump_Front_unarmed") or 
!(alive _unit) or 
!(_unit == vehicle _unit) or
(lifeState _unit == "INCAPACITATED") or 
(stance _unit == "PRONE") or 
!(backpack _unit in WBK_JumpPackArray) or
((_unit getVariable "WBK_JumpPackPower") < WBK_JP_Up_Power)
) exitWith {};
_unit spawn {
_this setVariable ["canMakeAttack",1]; 
_this setVariable ["actualSwordBlock",0, true]; 
_this setVariable ['IMS_IsUnitInvicibleScripted',1,true];
sleep 0.35;
_this setVariable ["canMakeAttack",0]; 
_this setVariable ["actualSwordBlock",0, true]; 
_this setVariable ['IMS_IsUnitInvicibleScripted',nil,true];
};
_var = _unit getVariable "WBK_JumpPackPower";
_var = _var - WBK_JP_Up_Power;
player setVariable ["WBK_JumpPackPower",_var];
[_unit,"WBK_Boost_Up",100] spawn EPSM_PlaySounds;
_unit remoteExec ["WBK_CreateExoJumParticles", [0, -2] select isDedicated,false];
if (jumpDirection == "Back") exitWith {
if ((currentWeapon _unit == primaryWeapon _unit) and !(currentWeapon _unit == "")) then {
_unit playActionNow "Exo_Gest_Jump_Back";
}else{
_unit playActionNow "Exo_Gest_Jump_Back_unarmed";
};
[_unit, [0,-WBK_JP_UP_Dist,WBK_JP_UP_Height]] remoteExec ["setVelocityModelSpace", _unit];
};
if (jumpDirection == "Left") exitWith {
if ((currentWeapon _unit == primaryWeapon _unit) and !(currentWeapon _unit == "")) then {
_unit playActionNow "Exo_Gest_Jump_Left";
}else{
_unit playActionNow "Exo_Gest_Jump_Left_unarmed";
};
[_unit, [-WBK_JP_UP_Dist,0,WBK_JP_UP_Height]] remoteExec ["setVelocityModelSpace", _unit];
};
if (jumpDirection == "Right") exitWith {
if ((currentWeapon _unit == primaryWeapon _unit) and !(currentWeapon _unit == "")) then {
_unit playActionNow "Exo_Gest_Jump_Right";
}else{
_unit playActionNow "Exo_Gest_Jump_Right_unarmed";
};
[_unit, [WBK_JP_UP_Dist,0,WBK_JP_UP_Height]] remoteExec ["setVelocityModelSpace", _unit];
};
if ((currentWeapon _unit == primaryWeapon _unit) and !(currentWeapon _unit == "")) then {
_unit playActionNow "Exo_Gest_Jump_Front";
}else{
_unit playActionNow "Exo_Gest_Jump_Front_unarmed";
};
[_unit, [0,WBK_JP_UP_Dist,WBK_JP_UP_Height]] remoteExec ["setVelocityModelSpace", _unit];
};
WBK_Exoskeleton_Boost_Front_fnc = {
_unit = _this;
if (
(gestureState _unit == "Exo_Gest_Jump_Back") or
(gestureState _unit == "Exo_Gest_Jump_Left") or
(gestureState _unit == "Exo_Gest_Jump_Right") or
(gestureState _unit == "Exo_Gest_Jump_Front") or 
(gestureState _unit == "Exo_Gest_Jump_Back_unarmed") or 
(gestureState _unit == "Exo_Gest_Jump_Left_unarmed") or
(gestureState _unit == "Exo_Gest_Jump_Right_unarmed") or
(gestureState _unit == "Exo_Gest_Jump_Front_unarmed") or 
!(alive _unit) or 
!(_unit == vehicle _unit) or
(lifeState _unit == "INCAPACITATED") or 
(stance _unit == "PRONE") or 
!(backpack _unit in WBK_JumpPackArray)  or
((_unit getVariable "WBK_JumpPackPower") < WBK_JP_Front_Power)
) exitWith {};
_var = _unit getVariable "WBK_JumpPackPower";
_var = _var - WBK_JP_Front_Power;
player setVariable ["WBK_JumpPackPower",_var];
_unit spawn {
_this setVariable ["canMakeAttack",1]; 
_this setVariable ["actualSwordBlock",0]; 
_this setVariable ['IMS_IsUnitInvicibleScripted',1,true];
sleep 0.35;
_this setVariable ["canMakeAttack",0, true]; 
_this setVariable ["actualSwordBlock",0, true]; 
_this setVariable ['IMS_IsUnitInvicibleScripted',nil,true];
};
[_unit,"WBK_Boost_Side",100] spawn EPSM_PlaySounds;
_unit remoteExec ["WBK_CreateExoJumParticles", [0, -2] select isDedicated,false];
if (jumpDirection == "Back") exitWith {
if ((currentWeapon _unit == primaryWeapon _unit) and !(currentWeapon _unit == "")) then {
_unit playActionNow "Exo_Gest_Jump_Back";
}else{
_unit playActionNow "Exo_Gest_Jump_Back_unarmed";
};
[_unit, [0,-WBK_JP_Front_Dist,WBK_JP_Front_Height]] remoteExec ["setVelocityModelSpace", _unit];
};
if (jumpDirection == "Left") exitWith {
if ((currentWeapon _unit == primaryWeapon _unit) and !(currentWeapon _unit == "")) then {
_unit playActionNow "Exo_Gest_Jump_Left";
}else{
_unit playActionNow "Exo_Gest_Jump_Left_unarmed";
};
[_unit, [-WBK_JP_Front_Dist,0,WBK_JP_Front_Height]] remoteExec ["setVelocityModelSpace", _unit];
};
if (jumpDirection == "Right") exitWith {
if ((currentWeapon _unit == primaryWeapon _unit) and !(currentWeapon _unit == "")) then {
_unit playActionNow "Exo_Gest_Jump_Right";
}else{
_unit playActionNow "Exo_Gest_Jump_Right_unarmed";
};
[_unit, [WBK_JP_Front_Dist,0,WBK_JP_Front_Height]] remoteExec ["setVelocityModelSpace", _unit];
};
if ((currentWeapon _unit == primaryWeapon _unit) and !(currentWeapon _unit == "")) then {
_unit playActionNow "Exo_Gest_Jump_Front";
}else{
_unit playActionNow "Exo_Gest_Jump_Front_unarmed";
};
[_unit, [0,WBK_JP_Front_Dist,WBK_JP_Front_Height]] remoteExec ["setVelocityModelSpace", _unit];
};




ExoSkeleton_Punch = {
_unit = _this;
if (
!(alive _unit) or 
!(_unit == vehicle _unit) or
(lifeState _unit == "INCAPACITATED") or 
(stance _unit == "PRONE") or 
!(backpack _unit in WBK_AdvancedArmor)
) exitWith {};
if (!(isTouchingGround _unit)) exitWith {
if ((getPosATL _unit select 2) <= 2.2) exitWith {
if ((animationState _unit == "Exo_Gest_Punch_operkot_unarmed_prep") or (animationState _unit == "Exo_Gest_Punch_operkot_prep") or (animationState _unit == "Exo_Gest_Punch_operkot") or (animationState _unit == "Exo_Gest_Punch_operkot_unarmed") or (animationState _unit == "Exo_GestGroundPound_unarmed") or (animationState _unit == "Exo_GestGroundPound_pistol") or (animationState _unit == "Exo_GestGroundPound") or (gestureState _unit == "Exo_GestGroundPound_Prep_Unarmed") or (gestureState _unit == "Exo_GestGroundPound_Prep") or (gestureState _unit == "Exo_Gest_Punch_unarmed") or (gestureState _unit == "Exo_Gest_Punch") or !(alive _unit)) exitWith {};
if ((currentWeapon _unit == primaryWeapon _unit) and !(currentWeapon _unit == "")) then {
[_unit, "Exo_Gest_Punch_operkot_prep"] remoteExec ["playActionNow", _unit];
}else{
[_unit, "Exo_Gest_Punch_operkot_unarmed_prep"] remoteExec ["playActionNow", _unit];
};
sleep 0.15;
waitUntil {(isTouchingGround _unit) or (!(gestureState _unit == "Exo_Gest_Punch_operkot_prep") and !(gestureState _unit == "Exo_Gest_Punch_operkot_unarmed_prep"))};
if ((!(gestureState _unit == "Exo_Gest_Punch_operkot_prep") and !(gestureState _unit == "Exo_Gest_Punch_operkot_unarmed_prep")) or !(alive _unit)) exitWith {};
enableCamShake true; 
addCamShake [7, 1, 25];
{
if ((alive _x) and !(isPlayer _x) and !(isNil {_x getVariable "IMS_ISAI"}) and !(lifeState _x == "INCAPACITATED")) then {
if (((_x worldToModel (_unit modelToWorld [0, 0, 0])) select 1) < 0) then 
{
[_x, [9, 9, 1.5], "starWars_force_landRoll"] remoteExec ["strafeFwrd", _x, false];
}else{
[_x, [-9, -9, 1.5], "starWars_force_landRoll_b"] remoteExec ["strafeFwrd", _x, false];
};
};
} forEach nearestObjects [_unit, ["Man"], 4];
if ((currentWeapon _unit == primaryWeapon _unit) and !(currentWeapon _unit == "")) then {
[_unit, "Exo_Gest_Punch_operkot"] remoteExec ["playActionNow", _unit];
}else{
[_unit, "Exo_Gest_Punch_operkot_unarmed"] remoteExec ["playActionNow", _unit];
};
[_unit, selectRandom ["WBK_Exo_Swing_1","WBK_Exo_Swing_2","WBK_Exo_Swing_3"], 20, 5] spawn EPSM_PlaySounds;
[_unit, selectRandom ["WBK_punch_servo_1","WBK_punch_servo_2"], 15, 5] spawn EPSM_PlaySounds;
_unit setVariable ["canMakeAttack",0]; 
_unit setVariable ["actualSwordBlock",0, true]; 
_IMS_playerTargetTrigger = createTrigger ["EmptyDetector", getPosATL _unit]; 
_IMS_playerTargetTrigger setTriggerArea [0.85, 4, 0, true]; 
_IMS_playerTargetTrigger attachTo [_unit, [0.1,1.8,0]];
{ 
_inTrigger = [_IMS_playerTargetTrigger, _x] call BIS_fnc_inTrigger;
if ((isNil {_x getVariable "IMS_IsUnitInvicibleScripted"}) and (_inTrigger) and (alive _x) and !(_x == _unit) and !(animationState _x == "STAR_WARS_FIGHT_DODGE_LEFT") and !(animationState _x == "STAR_WARS_FIGHT_DODGE_RIGHT")) then {
_isBehindGeometry = lineIntersects [ eyePos _unit, eyePos _x, _unit, _x];
if (_isBehindGeometry) then {
}else{
enableCamShake true; 
addCamShake [5, 2, 25];
[_x, "WBK_ExoHit", 60, 7] spawn EPSM_PlaySounds;
[[_x, _unit], ExoSkeleton_Punch_Damage] remoteExec ["spawn", _x]; 
};
};
} forEach nearestObjects [getPosATL _unit, ["MAN"], 4];
_ins = lineIntersectsSurfaces [
		_unit modelToWorldVisualWorld [0,0,1.1],
		_unit modelToWorldVisualWorld [0,2.6,1.1],
		_unit,
		objNull,
		true,
		1,
		"GEOM",
		"NONE"
	];
if (count _ins == 0) then { 
}else{
_car = (_ins select 0 select 2);
if ((_car isKindOf "CAR") or (_car isKindOf "StaticWeapon")) then {
[_unit, _car] remoteExecCall ["disableCollisionWith", 0, _unit];
[_unit,_car] spawn {
_unit = _this select 0;
_car = _this select 1;
sleep 0.15;
[_unit, _car] remoteExecCall ["enableCollisionWith", 0, _unit];
};
_dir = getDirVisual _unit;
_vel = velocity _car;
[_car, [(_vel select 0)+(sin _dir*7),(_vel select 1)+(cos _dir*7),3]] remoteExec ["setVelocity", _car];
[_car, selectRandom ["WBK_ExoHit_Car1","WBK_ExoHit_Car2","WBK_ExoHit_Car3"], 200, 7] spawn EPSM_PlaySounds;
enableCamShake true; 
addCamShake [5, 2, 25];
};
};
};
if ((currentWeapon _unit == primaryWeapon _unit) and !(currentWeapon _unit == "")) then {
[_unit, "Exo_GestGroundPound_Prep"] remoteExec ["playActionNow", _unit];
}else{
[_unit, "Exo_GestGroundPound_Prep_Unarmed"] remoteExec ["playActionNow", _unit];
};
sleep 0.15;
waitUntil {(isTouchingGround _unit) or (!(gestureState _unit == "Exo_GestGroundPound_Prep") and !(gestureState _unit == "Exo_GestGroundPound_Prep_Unarmed"))};
if ((!(gestureState _unit == "Exo_GestGroundPound_Prep") and !(gestureState _unit == "Exo_GestGroundPound_Prep_Unarmed")) or !(alive _unit)) exitWith {};
_unit setVariable ["WBK_JumpPackPower",0];
[_unit, "ExoSkeleton_Gest_Exit"] remoteExec ["playActionNow", _unit];
if ((currentWeapon _unit == primaryWeapon _unit) and !(currentWeapon _unit == "")) then {
[_unit, "Exo_GestGroundPound"] remoteExec ["switchMove", 0];
[_unit, "Exo_GestGroundPound"] remoteExec ["playMoveNow", 0];
}else{
if ((currentWeapon _unit == handgunWeapon _unit) and !(currentWeapon _unit == "")) then {
[_unit, "Exo_GestGroundPound_pistol"] remoteExec ["switchMove", 0];
[_unit, "Exo_GestGroundPound_pistol"] remoteExec ["playMoveNow", 0];
}else{
[_unit, "Exo_GestGroundPound_unarmed"] remoteExec ["switchMove", 0];
[_unit, "Exo_GestGroundPound_unarmed"] remoteExec ["playMoveNow", 0];
};
};
[_unit, selectRandom ["WBK_Exo_Swing_1","WBK_Exo_Swing_2","WBK_Exo_Swing_3"], 20, 5] spawn EPSM_PlaySounds;
[_unit, selectRandom ["WBK_punch_servo_1","WBK_punch_servo_2"], 15, 5] spawn EPSM_PlaySounds;
sleep 0.2;
if ((!(animationState _unit == "Exo_GestGroundPound") and !(animationState _unit == "Exo_GestGroundPound_pistol") and !(animationState _unit == "Exo_GestGroundPound_unarmed")) or !(alive _unit)) exitWith {};
[_unit, "WBK_power_GroundPunch", 200, 5] spawn EPSM_PlaySounds;
_electra = "#particlesource" createVehicle position _unit; 
_electra setParticleClass "HDustVTOL1"; 
detach _electra;
_lamd = "Land_RoadCrack_01_4x4_F" createVehicle position _unit; 
_lamd attachto [_unit,[0,0,0]];  
detach _lamd;
enableCamShake true; 
addCamShake [5, 2, 25];
{ 
if (!(_x isKindOf "MAN")) then {
_x setDamage 1;
}else{
if ((isNil {_x getVariable "IMS_IsUnitInvicibleScripted"}) and (alive _x) and !(_x == _unit) and !(animationState _x == "STAR_WARS_FIGHT_DODGE_LEFT") and !(animationState _x == "STAR_WARS_FIGHT_DODGE_RIGHT")) then {
_isBehindGeometry = lineIntersects [ eyePos _unit, eyePos _x, _unit, _x];
if (_isBehindGeometry) then {
}else{
[[_x, _unit], ExoSkeleton_Punch_Damage] remoteExec ["spawn", _x]; 
};
};
};
} forEach nearestObjects [getPosATL _unit, ["MAN","CAR","StaticWeapon"], 6];
sleep 0.9;
deleteVehicle _electra;
};
if ((animationState _unit == "Exo_Gest_Punch_operkot_unarmed_prep") or (animationState _unit == "Exo_Gest_Punch_operkot_prep") or (animationState _unit == "Exo_Gest_Punch_operkot") or (animationState _unit == "Exo_Gest_Punch_operkot_unarmed") or (animationState _unit == "Exo_GestGroundPound_unarmed") or (animationState _unit == "Exo_GestGroundPound_pistol") or (animationState _unit == "Exo_GestGroundPound") or (gestureState _unit == "Exo_GestGroundPound_Prep_Unarmed") or (gestureState _unit == "Exo_GestGroundPound_Prep") or (gestureState _unit == "Exo_Gest_Punch_unarmed") or (gestureState _unit == "Exo_Gest_Punch") or !(alive _unit)) exitWith {};
_unit setVariable ["canMakeAttack",0]; 
_unit setVariable ["actualSwordBlock",0, true]; 
_IMS_playerTargetTrigger = createTrigger ["EmptyDetector", getPosATL _unit]; 
_IMS_playerTargetTrigger setTriggerArea [0.85, 4, 0, true]; 
_IMS_playerTargetTrigger attachTo [_unit, [0.1,1.8,0]];
if ((currentWeapon _unit == primaryWeapon _unit) and !(currentWeapon _unit == "")) then {
[_unit, "Exo_Gest_Punch"] remoteExec ["playActionNow", _unit];
}else{
[_unit, "Exo_Gest_Punch_unarmed"] remoteExec ["playActionNow", _unit];
};

{
if ((alive _x) and !(isPlayer _x) and !(isNil {_x getVariable "IMS_ISAI"}) and !(lifeState _x == "INCAPACITATED")) then {
if (((_x worldToModel (_unit modelToWorld [0, 0, 0])) select 1) < 0) then 
{
[_x, [9, 9, 1.5], "starWars_force_landRoll"] remoteExec ["strafeFwrd", _x, false];
}else{
[_x, [-9, -9, 1.5], "starWars_force_landRoll_b"] remoteExec ["strafeFwrd", _x, false];
};
};
} forEach nearestObjects [_unit, ["Man"], 4];

sleep 0.1;
if ((!(gestureState _unit == "Exo_Gest_Punch") and !(gestureState _unit == "Exo_Gest_Punch_unarmed")) or !(alive _unit)) exitWith {};
[_unit, selectRandom ["WBK_Exo_Swing_1","WBK_Exo_Swing_2","WBK_Exo_Swing_3"], 20, 5] spawn EPSM_PlaySounds;
[_unit, selectRandom ["WBK_punch_servo_1","WBK_punch_servo_2"], 15, 5] spawn EPSM_PlaySounds;
sleep 0.1;
if ((!(gestureState _unit == "Exo_Gest_Punch") and !(gestureState _unit == "Exo_Gest_Punch_unarmed")) or !(alive _unit)) exitWith {};
{ 
_inTrigger = [_IMS_playerTargetTrigger, _x] call BIS_fnc_inTrigger;
if ((isNil {_x getVariable "IMS_IsUnitInvicibleScripted"}) and (_inTrigger) and (alive _x) and !(_x == _unit) and !(animationState _x == "STAR_WARS_FIGHT_DODGE_LEFT") and !(animationState _x == "STAR_WARS_FIGHT_DODGE_RIGHT")) then {
_isBehindGeometry = lineIntersects [ eyePos _unit, eyePos _x, _unit, _x];
if (_isBehindGeometry) then {
}else{
enableCamShake true; 
addCamShake [5, 2, 25];
[_x, "WBK_ExoHit", 60, 7] spawn EPSM_PlaySounds;
[[_x, _unit], ExoSkeleton_Punch_Damage] remoteExec ["spawn", _x]; 
};
};
} forEach nearestObjects [getPosATL _unit, ["MAN"], 2];
_ins = lineIntersectsSurfaces [
		_unit modelToWorldVisualWorld [0,0,1.1],
		_unit modelToWorldVisualWorld [0,2.6,1.1],
		_unit,
		objNull,
		true,
		1,
		"GEOM",
		"NONE"
	];
if (count _ins == 0) then { 
}else{
_car = (_ins select 0 select 2);
if ((_car isKindOf "CAR") or (_car isKindOf "StaticWeapon")) then {
[_unit, _car] remoteExecCall ["disableCollisionWith", 0, _unit];
[_unit,_car] spawn {
_unit = _this select 0;
_car = _this select 1;
sleep 0.15;
[_unit, _car] remoteExecCall ["enableCollisionWith", 0, _unit];
};
_dir = getDirVisual _unit;
_vel = velocity _car;
[_car, [(_vel select 0)+(sin _dir*7),(_vel select 1)+(cos _dir*7),3]] remoteExec ["setVelocity", _car];
[_car, selectRandom ["WBK_ExoHit_Car1","WBK_ExoHit_Car2","WBK_ExoHit_Car3"], 200, 7] spawn EPSM_PlaySounds;
enableCamShake true; 
addCamShake [5, 2, 25];
};
};
sleep 0.1;
if ((!(gestureState _unit == "Exo_Gest_Punch") and !(gestureState _unit == "Exo_Gest_Punch_unarmed")) or !(alive _unit)) exitWith {};
{ 
_inTrigger = [_IMS_playerTargetTrigger, _x] call BIS_fnc_inTrigger;
if ((isNil {_x getVariable "IMS_IsUnitInvicibleScripted"}) and (_inTrigger) and (alive _x) and !(_x == _unit) and !(animationState _x == "STAR_WARS_FIGHT_DODGE_LEFT") and !(animationState _x == "STAR_WARS_FIGHT_DODGE_RIGHT")) then {
_isBehindGeometry = lineIntersects [ eyePos _unit, eyePos _x, _unit, _x];
if (_isBehindGeometry) then {
}else{
enableCamShake true; 
addCamShake [5, 2, 25];
[_x, "WBK_ExoHit", 60, 7] spawn EPSM_PlaySounds;
[[_x, _unit], ExoSkeleton_Punch_Damage] remoteExec ["spawn", _x]; 
};
};
} forEach nearestObjects [getPosATL _unit, ["MAN"], 2];
};



ExoSkeleton_Punch_Damage = {
_target = _this select 0;
_shooter = _this select 1;
if (
!(isNil {_x getVariable "IMS_IsUnitInvicibleScripted"}) or
(side _shooter == side _target) or 
(typeOf _target isKindOf "WBK_DT_1") or 
(typeOf _target isKindOf "WBK_DT_Cont_1") or 
(typeOf _target isKindOf "WBK_DOS_Huge_ORK")
) exitWith {};
[_target, (_target getDir _shooter)] remoteExec ["setDir", _target];
_target setDamage 1;
if (getText (configfile >> 'CfgVehicles' >> typeOf _target >> 'moves') == 'CfgMovesMaleSdr') exitWith {
[_target, [0,-5,2]] remoteExec ["setVelocityModelSpace", _target];
[_target, selectRandom ["ExoSkeleton_Death_1","ExoSkeleton_Death_2","ExoSkeleton_Death_3"]] remoteExec ["switchMove", 0];
sleep 0.6;
[_target, selectRandom ["WBK_BodyFall_1","WBK_BodyFall_2","WBK_BodyFall_3","WBK_BodyFall_4"], 40, 5] spawn EPSM_PlaySounds;
};
};