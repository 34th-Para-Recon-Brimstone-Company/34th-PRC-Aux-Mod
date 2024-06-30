if (!(hasInterface )) exitWith {};
[] spawn
{
	waitUntil { !isNull findDisplay 46 };
	(findDisplay 46) displayAddEventHandler ["KeyDown",{
	_fullArray = _this;
	_key = _fullArray select 1;
	if ((_key == 17)) exitWith {
	jumpDirection = "Forward";
	};
	if ((_key == 31)) exitWith {
	jumpDirection = "Back";
	};
	if ((_key == 30)) exitWith {
	jumpDirection = "Left";
	};
	if ((_key == 32)) exitWith {
	jumpDirection = "Right";
	};
	}];
	
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
	};
	WBK_Exoskeleton_Boost_FuncToUse = 0;
}, {},[15, [false, false, false]]] call cba_fnc_addKeybind;
["WebKnight's Exoskeleton System", "wbk_exo_Hit", ["Exo-Melee", "Use your exoskeleton for melee."], {
    _climber = missionNamespace getVariable["bis_fnc_moduleRemoteControl_unit", player];
	if ((getText (configfile >> 'CfgVehicles' >> typeOf _climber >> 'moves') != 'CfgMovesMaleSdr') and (getText (configfile >> 'CfgVehicles' >> typeOf _climber >> 'moves') != 'CfgMovesMaleSpaceMarine')) exitWith {};
	if (!(backpack _climber in WBK_AdvancedArmor)) exitWith {};
	_climber spawn ExoSkeleton_Punch;
}, {},[20, [true, false, false]]] call cba_fnc_addKeybind;


["WebKnight's Exoskeleton System", "wbk_exo_Repair", ["Insert new battery/Heal yourself", "Repair your armor or heal yourself."], {
    _climber = missionNamespace getVariable["bis_fnc_moduleRemoteControl_unit", player];
	if ((getText (configfile >> 'CfgVehicles' >> typeOf _climber >> 'moves') != 'CfgMovesMaleSdr') and (getText (configfile >> 'CfgVehicles' >> typeOf _climber >> 'moves') != 'CfgMovesMaleSpaceMarine')) exitWith {};
	if (!(backpack _climber in WBK_AdvancedArmor)) exitWith {};
	_climber spawn WBK_EPSM_AdvancedArmour_Fix;
}, {},[2, [false, true, false]]] call cba_fnc_addKeybind;



["WebKnight's Exoskeleton System", "wbk_exo_Heal", ["Heal yourself", "Heal yourself using medical syringe."], {
    _climber = missionNamespace getVariable["bis_fnc_moduleRemoteControl_unit", player];
	if ((getText (configfile >> 'CfgVehicles' >> typeOf _climber >> 'moves') != 'CfgMovesMaleSdr') and (getText (configfile >> 'CfgVehicles' >> typeOf _climber >> 'moves') != 'CfgMovesMaleSpaceMarine')) exitWith {};
	_climber spawn WBK_EPSM_AdvancedArmour_Heal;
}, {},[3, [false, true, false]]] call cba_fnc_addKeybind;


_isHudActive = ctrlShown ((findDisplay 46) displayCtrl 26052000);
if (_isHudActive) then {
ctrlDelete ((findDisplay 46) displayCtrl 26052000);
ctrlDelete ((findDisplay 46) displayCtrl 04102002);
ctrlDelete ((findDisplay 46) displayCtrl 0281198);
sleep 0.5;
};
disableSerialization;
_WBK_ExoJumpEnergy = findDisplay 46 ctrlCreate ["RscStructuredText", 26052000];
_WBK_ExoJumpEnergy ctrlSetPosition [(0.4 * safezoneW + safezoneX), safeZoneY + safeZoneH * 0.95, safeZoneW, safeZoneH * 0.04];
_WBK_ExoJumpEnergy ctrlCommit 0;
_TAG_Picture = findDisplay 46 ctrlCreate ["RscPictureKeepAspect", 04102002];
_TAG_Picture ctrlSetPosition [1.295, 1.32,0.08,0.07];
_TAG_Picture ctrlSetTextColor [1, 1, 1, 1];
_TAG_Picture ctrlSetAngle [-90, 0.5, 0.5, false];
_TAG_Picture ctrlCommit 0;
_WBK_AdvancedArmour = findDisplay 46 ctrlCreate ["RscStructuredText", 0281198];
_WBK_AdvancedArmour ctrlSetPosition [(0.4 * safezoneW + safezoneX), safeZoneY + safeZoneH * 0.905, safeZoneW, safeZoneH * 0.04];
_WBK_AdvancedArmour ctrlCommit 0;


_WBK_ExoModHud = [{
    _array = _this select 0;
	_WBK_ExoJumpEnergy = _array select 0;
	_TAG_Picture = _array select 1;
	_WBK_AdvancedArmour = _array select 2;
	_unit = missionNamespace getVariable["bis_fnc_moduleRemoteControl_unit", player];
	if (backpack _unit in WBK_JumpPackArray) then {
	     _TAG_Picture ctrlSetText "\ExoSystem_WBK\scripts\wbk_arrow.paa";
	     if (WBK_Exoskeleton_Boost_FuncToUse == 0) then {
	     _TAG_Picture ctrlSetAngle [-90, 0.5, 0.5, false];
	     }else{
		 _TAG_Picture ctrlSetAngle [180, 0.5, 0.5, false];
		 };
		 _TAG_Picture ctrlCommit 0;
	     _var = _unit getVariable "WBK_JumpPackPower";
		 if (_var < WBK_JP_Front_Power) then {
		 _WBK_ExoJumpEnergy ctrlSetStructuredText parseText format["<t color='#BE0000' align='center' size='1.9'>Power: %1</t>",_unit getVariable "WBK_JumpPackPower"];
		 }else{
		 if (_var < WBK_JP_Up_Power) then {
		 _WBK_ExoJumpEnergy ctrlSetStructuredText parseText format["<t color='#FF9A29' align='center' size='1.9'>Power: %1</t>",_unit getVariable "WBK_JumpPackPower"];
		 }else{
		_WBK_ExoJumpEnergy ctrlSetStructuredText parseText format["<t color='#fcffee' align='center' size='1.9'>Power: %1</t>",_unit getVariable "WBK_JumpPackPower"];
		};
		};
		
		
		
		
		
		_var1 = _unit getVariable "WBK_AdvancedArmor";
		 if (_var1 < 25) then {
		 _WBK_AdvancedArmour ctrlSetStructuredText parseText format["<t color='#BE0000' align='center' size='1.9'>Armour: %1</t>",_unit getVariable "WBK_AdvancedArmor"];
		 }else{
		 if (_var1 < 50) then {
		 _WBK_AdvancedArmour ctrlSetStructuredText parseText format["<t color='#FF9A29' align='center' size='1.9'>Armour: %1</t>",_unit getVariable "WBK_AdvancedArmor"];
		 }else{
		_WBK_AdvancedArmour ctrlSetStructuredText parseText format["<t color='#fcffee' align='center' size='1.9'>Armour: %1</t>",_unit getVariable "WBK_AdvancedArmor"];
		};
		};
		
	}else{
		_WBK_ExoJumpEnergy ctrlSetStructuredText parseText "";
		_WBK_AdvancedArmour ctrlSetStructuredText parseText "";
		_TAG_Picture ctrlSetText "";
	}; 
}, 0.001, [_WBK_ExoJumpEnergy,_TAG_Picture,_WBK_AdvancedArmour]] call CBA_fnc_addPerFrameHandler;

_WBK_ExoModPower = [{
	_unit = missionNamespace getVariable["bis_fnc_moduleRemoteControl_unit", player];
	if (_unit getVariable "WBK_JumpPackPower" < 0) then {
	_unit setVariable ["WBK_JumpPackPower",0];
	};
	if (
	(_unit getVariable "WBK_JumpPackPower" < 100) and
	!(gestureState _unit == "Exo_Gest_Jump_Back") and
	!(gestureState _unit == "Exo_Gest_Jump_Left") and
	!(gestureState _unit == "Exo_Gest_Jump_Right") and
	!(gestureState _unit == "Exo_Gest_Jump_Front") and 
	!(gestureState _unit == "Exo_Gest_Jump_Back_unarmed") and 
	!(gestureState _unit == "Exo_Gest_Jump_Left_unarmed") and
	!(gestureState _unit == "Exo_Gest_Jump_Right_unarmed") and
	!(gestureState _unit == "Exo_Gest_Jump_Front_unarmed") and 
	!(animationState _unit == "Exo_GestGroundPound") and 
	(isTouchingGround _unit)
	) then {
	_var = _unit getVariable "WBK_JumpPackPower";
	_var = _var + WBK_JP_Regen_Val;
	_unit setVariable ["WBK_JumpPackPower",_var];
	}; 
}, WBK_JP_Regen_Time, []] call CBA_fnc_addPerFrameHandler;
	sleep 1;
if ("wbk_lightsabers" in activatedAddons) then {
["WebKnight's Melee", "WBK_ForceUse_Dodge", [localize "STR_SW_DODGE", "Dodge in selected direction"], {  
_unit = missionNamespace getVariable["bis_fnc_moduleRemoteControl_unit", player];
if ((animationState _unit == "ims_playerbandaginganimation") or !(isNil {_unit getVariable "IMS_IsUnitInvicibleScripted"})) exitWith {};
if (backpack _unit in WBK_JumpPackArray) exitWith {
if (WBK_Exoskeleton_Boost_FuncToUse == 0) exitWith {
_unit spawn WBK_Exoskeleton_Boost_UP_fnc;
};
_unit spawn WBK_Exoskeleton_Boost_Front_fnc;
};
if (!(isNil {_unit getVariable "IMS_InFistsMode"})) exitWith {
_unit spawn IMS_DodgeWithFists;
};
if ((currentWeapon _unit == primaryWeapon _unit) and (IMS_ISCanDodgeWithRifle)) exitWith {
if ((jumpDirection == "Forward") and (animationState _unit == "IMS_ButtStock_Evade_F")) exitWith {
[_unit, [9, 9, 1.5], "starWars_force_landRoll_weapon"] spawn strafeFwrdMainWeapon;
};
if ((jumpDirection == "Back") and (animationState _unit == "IMS_ButtStock_Evade_B")) exitWith {
[_unit, [-9, -9, 1.5], "starWars_force_landRoll_b_weapon"] spawn strafeFwrdMainWeapon;
};
_unit spawn IMS_DodgeWithRifle;
};
if (currentWeapon _unit in IMS_Melee_Heavy) exitWith {systemChat "You can't dodge with heavy weapons";};
if ((alive _unit) and !(lifeState _unit == "INCAPACITATED") and (isTouchingGround _unit) and (animationState _unit == "starWars_lightsaber_blockPursuit") and (("Force_tir_3" in magazines _unit) or ("Force_tir_Sith" in magazines _unit))) exitWith {
_unit spawn WBK_LightSaberDodgeAndHit;
};
if (!(alive _unit) or !(isNull objectParent _unit) or (lifeState _unit == "INCAPACITATED") or (stance _unit == "PRONE") or !(_unit getVariable "canMakeAttack" == 0) or !(currentWeapon _unit in IMS_Melee_Weapons)) exitWith {};
if ((isTouchingGround _unit)) then {
if (jumpDirection == "Forward") exitWith {
if ((typeOf _unit isKindOf "TIOWSpaceMarine_Base")) exitWith {
[_unit] call concentrationMinusPunch;
[_unit, [9, 9, 1.5], "starWars_landRoll"] spawn strafeFwrd_SW;
};
if (((currentWeapon _unit in IMS_LightSabers) or (currentWeapon _unit in IMS_Melee_BrassKnucklesType)) and (animationState _unit ==  "starWars_force_landRoll")) exitWith {[_unit, [9, 9, 1.5], "starWars_landRoll"] spawn strafeFwrd_SW;};
[_unit, [9, 9, 1.5], "starWars_force_landRoll"] spawn strafeFwrd;
};
if (jumpDirection == "Back") exitWith {
if ((typeOf _unit isKindOf "TIOWSpaceMarine_Base")) exitWith {
[_unit] call concentrationMinusPunch;
[_unit, [-9, -9, 1.5], "starWars_landRoll_b"] spawn strafeFwrd_SW;
};
if (((currentWeapon _unit in IMS_LightSabers) or (currentWeapon _unit in IMS_Melee_BrassKnucklesType)) and (animationState _unit ==  "starWars_force_landRoll_b")) exitWith {[_unit, [-9, -9, 1.5], "starWars_landRoll_b"] spawn strafeFwrd_SW;};
[_unit, [-9, -9, 1.5], "starWars_force_landRoll_b"] spawn strafeFwrd;
};
if (jumpDirection == "Left") exitWith {
[_unit, [-9, 0, 1.5], "STAR_WARS_FIGHT_DODGE_LEFT"] spawn IMS_DodgeLeftOrRight;
};
if (jumpDirection == "Right") exitWith {
[_unit, [9, 0, 1.5], "STAR_WARS_FIGHT_DODGE_RIGHT"] spawn IMS_DodgeLeftOrRight;
};
}; 
}, {}, [57, [false, false, false]]] call cba_fnc_addKeybind;  
}else{
["WebKnight's Melee", "WBK_ForceUse_Dodge", [localize "STR_SW_DODGE", "Dodge in selected direction"], {  
_unit = missionNamespace getVariable["bis_fnc_moduleRemoteControl_unit", player];
if ((animationState _unit == "ims_playerbandaginganimation") or !(isNil {_unit getVariable "IMS_IsUnitInvicibleScripted"})) exitWith {};
if (backpack _unit in WBK_JumpPackArray) exitWith {
if (WBK_Exoskeleton_Boost_FuncToUse == 0) exitWith {
_unit spawn WBK_Exoskeleton_Boost_UP_fnc;
};
_unit spawn WBK_Exoskeleton_Boost_Front_fnc;
};
if (!(isNil {_unit getVariable "IMS_InFistsMode"})) exitWith {
_unit spawn IMS_DodgeWithFists;
};
if ((currentWeapon _unit == primaryWeapon _unit) and (IMS_ISCanDodgeWithRifle)) exitWith {_unit spawn IMS_DodgeWithRifle;};
if (currentWeapon _unit in IMS_Melee_Heavy) exitWith {systemChat "You can't dodge with heavy weapons";};
if (!(alive _unit) or !(isNull objectParent _unit) or (lifeState _unit == "INCAPACITATED") or (stance _unit == "PRONE") or !(_unit getVariable "canMakeAttack" == 0) or !(currentWeapon _unit in IMS_Melee_Weapons)) exitWith {};
if ((isTouchingGround _unit)) then {
if (jumpDirection == "Forward") exitWith {
if ((handgunWeapon _unit in IMS_LightSabers) or (typeOf _unit isKindOf "TIOWSpaceMarine_Base")) exitWith {
[_unit] call concentrationMinusPunch;
[_unit, [9, 9, 1.5], "starWars_landRoll"] spawn strafeFwrd_SW;
};
[_unit, [9, 9, 1.5], "starWars_force_landRoll"] spawn strafeFwrd;
};
if (jumpDirection == "Back") exitWith {
if ((handgunWeapon _unit in IMS_LightSabers) or (typeOf _unit isKindOf "TIOWSpaceMarine_Base")) exitWith {
[_unit] call concentrationMinusPunch;
[_unit, [-9, -9, 1.5], "starWars_landRoll_b"] spawn strafeFwrd_SW;
};
[_unit, [-9, -9, 1.5], "starWars_force_landRoll_b"] spawn strafeFwrd;
};
if (jumpDirection == "Left") exitWith {
if ((handgunWeapon _unit in IMS_LightSabers) or (typeOf _unit isKindOf "TIOWSpaceMarine_Base")) exitWith {
[_unit] call concentrationMinusPunch;
[_unit, [-13, 0, 1.5], "STAR_WARS_FIGHT_DODGE_LEFT"] spawn IMS_DodgeLeftOrRight;
};
[_unit, [-9, 0, 1.5], "STAR_WARS_FIGHT_DODGE_LEFT"] spawn IMS_DodgeLeftOrRight;
};
if (jumpDirection == "Right") exitWith {
if ((handgunWeapon _unit in IMS_LightSabers) or (typeOf _unit isKindOf "TIOWSpaceMarine_Base")) exitWith {
[_unit] call concentrationMinusPunch;
[_unit, [13, 0, 1.5], "STAR_WARS_FIGHT_DODGE_RIGHT"] spawn IMS_DodgeLeftOrRight;
};
[_unit, [9, 0, 1.5], "STAR_WARS_FIGHT_DODGE_RIGHT"] spawn IMS_DodgeLeftOrRight;
};
}; 
}, {}, [57, [false, false, false]]] call cba_fnc_addKeybind;  
};

kickButt = {
_unit = _this select 0;
if (backpack _unit in WBK_AdvancedArmor) exitWith {
_unit spawn ExoSkeleton_Punch;
};
if (currentWeapon _unit in IMS_Melee_Weapons) exitWith {};
if (!(animationState _unit == "Star_Wars_KaaTirs_attack_execution_victim") and !(animationState _unit == "Star_Wars_KaaTirs_executionOnCreature_jedi") and !(stance _unit == "PRONE") and !(animationState _unit == "starWars_lightsaber_hit_1") and !(animationState _unit == "starWars_lightsaber_hit_2") and !(currentWeapon _unit == "") and !(currentMagazine _unit in lightSaberEnergy) and (alive _unit) and (_unit getVariable "canMakeAttack" == 0) and !(animationState _unit == "starWars_force_landRoll") and !(animationState _unit == "starWars_force_landRoll_b") and !(animationState _unit == "push_backwards")) then {
if (_unit isKindOf "TIOWSpaceMarine_Base") exitWith {
_unit spawn SpaceMarine_Punch_WithRifle;
};
if (("WBK_KatarnCloneKnife" in items _unit) and (currentWeapon _unit == primaryWeapon _unit) and !(currentWeapon _unit == "")) exitWith {
_unit spawn Katarn_Punch;
};
_unit setVariable ["canMakeAttack",1, true]; 
_unit setVariable ["actualSwordBlock",0, true]; 
_IMS_playerTargetTrigger = createTrigger ["EmptyDetector", getPosATL _unit]; 
_IMS_playerTargetTrigger setTriggerArea [0.65, 6, 0, true]; 
_IMS_playerTargetTrigger attachTo [_unit, [0,1.2,0]];
[_unit, "Disable_Gesture"] remoteExec ["playActionNow", 0];
if (currentWeapon _unit == primaryWeapon _unit) then {
if (
(animationState _unit == "AmovPercMevaSlowWrflDfl") or 
(animationState _unit == "AmovPercMevaSlowWrflDfr") or 
(animationState _unit == "AmovPercMevaSlowWrflDf") or 
(animationState _unit == "AmovPercMevaSrasWrflDf") or 
(animationState _unit == "AmovPercMevaSrasWrflDfl") or 
(animationState _unit == "AmovPercMevaSrasWrflDfr") or 
(animationState _unit == "AadjPercMevaSrasWrflDf_down") or 
(animationState _unit == "AadjPercMevaSrasWrflDf_left") or 
(animationState _unit == "AadjPercMevaSrasWrflDf_right") or 
(animationState _unit == "AadjPercMevaSrasWrflDf_up") or 
(animationState _unit == "AadjPercMevaSrasWrflDfl_down") or 
(animationState _unit == "AadjPercMevaSrasWrflDfl_left") or 
(animationState _unit == "AadjPercMevaSrasWrflDfl_right") or 
(animationState _unit == "AadjPercMevaSrasWrflDfl_up") or 
(animationState _unit == "AadjPercMevaSrasWrflDfr_down") or 
(animationState _unit == "AadjPercMevaSrasWrflDfr_left") or 
(animationState _unit == "AadjPercMevaSrasWrflDfr_right") or 
(animationState _unit == "AadjPercMevaSrasWrflDfr_up")
) then {
[_unit, "IMS_ButtStock_onRun"] remoteExec ["switchMove", 0];
[_unit, "IMS_ButtStock_onRun"] remoteExec ["playMoveNow", 0];
}else{
[_unit, "IMS_ButtStock_1"] remoteExec ["switchMove", 0];
[_unit, "IMS_ButtStock_1"] remoteExec ["playMoveNow", 0];
};
}else{
if (currentWeapon _unit == handgunWeapon _unit) then {
[_unit, "IMS_ButtStock_Pistol"] remoteExec ["switchMove", 0];
[_unit, "IMS_ButtStock_Pistol"] remoteExec ["playMoveNow", 0];
};
};
sleep 0.2;
if (!(animationState _unit == "IMS_ButtStock_1") and !(animationState _unit == "IMS_ButtStock_onRun") and !(animationState _unit == "IMS_ButtStock_Pistol")) exitWith {deleteVehicle _IMS_playerTargetTrigger;};
_rndSnd = ["kick_butt_1","kick_butt_2","kick_butt_3"] call BIS_fnc_SelectRandom;
[_unit, _rndSnd, 50, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
if (animationState _unit == "IMS_ButtStock_onRun") then {
[_unit, [9 * (sin (getdir _unit )), 9 * (cos (getdir _unit)), 1.2]] remoteExec ["setvelocity", _unit];
}else{
[_unit, [5 * (sin (getdir _unit )), 5 * (cos (getdir _unit)), 1]] remoteExec ["setvelocity", _unit];
};
sleep 0.1;
if (!(animationState _unit == "IMS_ButtStock_1") and !(animationState _unit == "IMS_ButtStock_onRun") and !(animationState _unit == "IMS_ButtStock_Pistol")) exitWith {deleteVehicle _IMS_playerTargetTrigger;};
if (!(currentWeapon _unit == "") and !(currentMagazine _unit in lightSaberEnergy) and (alive _unit) and !(animationState _unit == "starWars_force_landRoll") and !(animationState _unit == "starWars_force_landRoll_b") and !(animationState _unit == "starWars_force_landRoll_b_weapon") and !(animationState _unit == "starWars_force_landRoll_weapon") and !(animationState _unit == "push_backwards") and !(animationState _unit == "starWars_lightsaber_hit_1") and !(animationState _unit == "starWars_lightsaber_hit_2") and !(animationState _unit == "starWars_lightsaber_hit_rifle_2") and !(animationState _unit == "starWars_lightsaber_hit_rifle_1") and !(animationState _unit == "starWars_lightsaber_hit_rifle_b")) then {

{ 
_inTrigger = [_IMS_playerTargetTrigger, _x] call BIS_fnc_inTrigger;
if ((_inTrigger) and (alive _x) and !(_x == _unit) and (isNil {_x getVariable "IMS_IsUnitInvicibleScripted"})) then {
_isBehindGeometry = lineIntersects [ eyePos _unit, eyePos _x, _unit, _x];
if (_isBehindGeometry) then {
}else{
_str1 = getText (configfile >> "CfgWeapons" >> uniform _x >> "ItemInfo" >> "uniformClass");
_str2 = getNumber (configfile >> "CfgVehicles" >> _str1 >> "HitPoints" >> "HitBody" >> "armor");
if ((_str2 > 6000) or (typeOf _x isKindOf "WBK_DT_1") or (typeOf _x isKindOf "WBK_DT_Cont_1") or (typeOf _x isKindOf "TIOWSpaceMarine_Base")) exitWith {
_rndSnd = selectRandom ["leg_hit1","leg_hit2","leg_hit3"];
[_unit, _rndSnd, 30, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
[_unit, "dobi_bones", 30, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
[_unit, 228, _x] remoteExec ["concentrationToZero", _unit, false];  
};
[[_x, _unit], kickButtKill] remoteExec ["spawn", _x]; 
};
};
} forEach nearestObjects [getPosATL _unit, ["MAN"], 2.8];
};
sleep 0.8;
if (!(animationState _unit == "IMS_ButtStock_1") and !(animationState _unit == "IMS_ButtStock_onRun") and !(animationState _unit == "IMS_ButtStock_Pistol")) exitWith {deleteVehicle _IMS_playerTargetTrigger;};
_unit setVariable ["canMakeAttack",0, true];
_unit setVariable ["actualSwordBlock",0, true]; 
deleteVehicle _IMS_playerTargetTrigger;
};
};
};