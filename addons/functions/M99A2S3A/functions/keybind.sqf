#include "\a3\ui_f\hpp\defineDIKCodes.inc"
#include "\34thPRC_Functions\M99A2S3A\_includes\defines_macros.hpp"
#undef MACRO_SCRIPT
#define MACRO_SCRIPT "[airburst keybinds.sqf] "

diag_log format [MACRO_SCRIPT+"Registering keybinds"];

["34th PRC", "Airburst", ["Set Airburst Range", "Press to set range at crosshair"], {

    //This keybind can be pressed while in vic or as infantry
    if !(isNull objectParent ace_player) then {
        //in a vic
        _magazine = currentMagazine (objectParent ace_player);
        //Lets make sure that the user has a airburst mag loaded.
        _config = configFile >> "CfgMagazines" >> _magazine >> "M99A2S3A_Properties";
        if(!(isClass _config)) exitWith {};

        diag_log format [MACRO_SCRIPT+"Using vehicle lase for %1 in %2",ace_player, objectParent ace_player];
        //get the distance
        [ace_player] call MACRO_FNC_NAME(airburst_lase_distance_vehicle);

    } else {
        //in a inf
        _magazine = currentMagazine ace_player;
        //Lets make sure that the user has a airburst mag loaded.
        _config = configFile >> "CfgMagazines" >> _magazine >> "M99A2S3A_Properties";
        if(!(isClass _config)) exitWith {};

        diag_log format [MACRO_SCRIPT+"Using infantry lase for %1 ",ace_player];
        [ace_player] call MACRO_FNC_NAME(airburst_lase_distance_infantry);
    }




}, {
    call {};
}, [DIK_T, [false, false, false]]] call CBA_fnc_addKeybind;

diag_log format [MACRO_SCRIPT+"Done Registering keybinds"];
