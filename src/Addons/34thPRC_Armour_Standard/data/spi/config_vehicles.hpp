class Man;
class CAManBase: Man
{
	class UserActions
	{
		class 34thPRC_Armour_Standard_SPI_ActivateStealth // WBK_EpsmSystem
		{
			displayName="<img size='2' image='\ExoSuit\data\SExo.paa'/><t color='#FFD366' size='1.45' font = 'PuristaSemibold'>Activate Cloak</t>";
			displayNameDefault="<img size='2' image='\ExoSuit\data\SExo.paa'/><t color='#FFD366' size='1.45' font = 'PuristaSemibold'>Activate Cloak</t>";
			priority=10;
			radius=5;
			position="camera";
			showWindow=0;
			hideOnUse=1;
			onlyForPlayer=0;
			shortcut="";
			condition="WBK_EPSM_CloakEnabled && !WBK_EPSM_CompletlyDisable && missionNamespace getVariable['bis_fnc_moduleRemoteControl_unit', player] == this && alive this && gestureState this != 'Exo_Gest_Heal_Armor' && backpack this == '34thPRC_Armour_Standard_Backpack_StealthExoSuit_Invisible' && !(isNil {this getVariable 'WBK_AdvancedArmor'}) && isNil {this getVariable 'WBK_StealthPower'}";
			statement="this spawn WBK_StealthMechanic;";
		};
	};
};
