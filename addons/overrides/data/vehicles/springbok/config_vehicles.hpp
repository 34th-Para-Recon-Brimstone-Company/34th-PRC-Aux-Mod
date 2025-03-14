// class Car_F; // THe bulldog also inherits from this and so already defines it
class DMNS_M511_Springbok_base : Car_F // DMNS_Vehicles_M511_Springbok
{
	// The base doesn't have TFAR radios but the child classes (the real springboks) do have it
	// Defining these again doesn't hurt though
	enableRadio=1;
	tf_range=25000;
	tf_isolatedAmount=0.4;
	tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
	tf_hasLRradio=1;
	tfar_hasIntercom = 1;
	TFAR_AdditionalLR_Turret[]={{1}};
	class ACE_SelfActions // Normally you'd inherit from the previous version's but apparently we are the first to define it
	{
		class TFAR_IntercomChannel
		{
			displayName="$STR_tfar_core_Intercom_ACESelfAction_Name";
			condition="true";
			statement="";
			icon="";
			class TFAR_IntercomChannel_disabled
			{
				displayName="Disabled";
				condition="_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != -1";
				statement="(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-1,true];";
			};
			class TFAR_IntercomChannel_1
			{
				displayName="$STR_tfar_core_Intercom_ACESelfAction_Channel1";
				condition="_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != 0";
				statement="(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],0,true];";
			};
			class TFAR_IntercomChannel_2
			{
				displayName="$STR_tfar_core_Intercom_ACESelfAction_Channel2";
				condition="_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != 1";
				statement="(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],1,true];";
			};
			class TFAR_IntercomChannel_Misc_1
			{
				displayName="Misc channel 1";
				condition="_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != 2";
				statement="(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],2,true];";
			};
			class TFAR_IntercomChannel_Misc_2
			{
				displayName="Misc channel 2";
				condition="_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != 3";
				statement="(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],3,true];";
			};
			class TFAR_IntercomChannel_Misc_3
			{
				displayName="Misc channel 3";
				condition="_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != 4";
				statement="(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],4,true];";
			};
		};
	};
};
