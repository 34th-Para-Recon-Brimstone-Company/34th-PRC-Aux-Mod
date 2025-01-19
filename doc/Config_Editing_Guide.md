# About
I reccomend viewing this document with the extension Markdown Preview Enhanced (https://marketplace.visualstudio.com/items?itemName=shd101wyy.markdown-preview-enhanced). Once installed to VS Code you can see a html preview by clicking the pane on the right side of VS Code that looks like an open book with a magnifying glass.

# Config Editing Tutorial 1
This tutorial will take you through much of what is used in reskins and model swaps

### Defining Your Object
```c++
/*The below code line defines our new object's (helmet's) internal name and tells ARMA via inheritance ':' that it is taking on the settings of our standard marine helm.
This is done here because want the armor values of our marine helmet.*/
class 34thPRC_ArmourStandard_Commando_Helmet_Urban : 34thPRC_ArmourStandard_Marines2_CH252_Urban
```
### Basic Object Detials
```c++
{
	displayName="[34th] Commando Helmet Urban"; //This defines the in game display name of the gear
	author="Yandere"; //Defines who made it
	model="MA_Armor\data\Helmets\Commando\Commando_Helmet.p3d"; //This is part 1 of model swapping, both defining the model here and later on with uniformModel is required for most appearance swaps. URLs should be encased with "" and the line must end with a semi colon ;
```

### Hidden Selections
```c++
//Hidden selections come in two parts "hiddenSelections[]" and hiddenSelectionsTextures[]. For our purposes you generally don't need to wory about how they work but the simple explanation is that when a line item in the hiddenSelections[] array is commented out on the base object definition that part of model object will appear in game while non commented lines will be hidden.

//hiddenSelections[] is an array of properties for the item in question and can be used on pretty much all things ins ARMA3. In this case we need to define it again because our inherited object has different values than the model we are using for our new object.
	hiddenSelections[]=
	{
		"Camo1", //Camo1 is the helmet's base texture
		"Camo2" // Camo2 is the helmet's visor
	}; //Be sure to reference the original object in the mod you are inheriting from to see which lines correspond to different parts.

	//hiddenSelectionsTextures[] is slightly different from hiddenSelections but very similar. The base item still controls which texture paths are active via code comments. For example with our ODST armor it controls whether or not the different shoulders are displayed. In this case we simply need to give the paths to our textures. This will be the case for pretty much all of our reskins. You can also reference what these paths are via hiddenSelections[].
	hiddenSelectionsTextures[]=
	{
		"34thPRC_ArmourStandard\data\marines2\specialist_helmets\commando\commando_helmet_urban.paa",
		"34thPRC_ArmourStandard\data\mkvb\Commando\Visors\34_Commando_Helmet_Visor_Gold.paa"
	};
```
### ACE Arsenal Extended Integration
```c++
	//XtdGearInfo is a class from Ace Arsenal Extended, our 34thPRC_AceArsenalExtended.pbo uses this information to group objects into predefined lists with switchable toggles.
	{
		model="34thPRC_ArmourStandard_EOD_Helmet_Urban"; //This must be the same as the class name of the object it is a "variant" off. Basicly because we want all specialist helmets to be in the same toggle groups, we use the first object created in the group as an identifier for our AAX support.
		helmet="commando"; //This can be referenced within 34thPRC_AceArsenalExtended, but essentially is used to mark which helmet this is for the toggles
		camo="urban"; //Like the line above, but this identifies which camo version it is.
	};
```
### Finishing The Model Swap
```c++
	// The below line is a little weird, essentially we are inheriting from MA_Armor's class ItemInfo which inherits from a built in class in arma. In this case it's HeadgearItem. This is basically a class used to define an item's properties. uniformModel links an object to a uniform. For more information see: https://community.bistudio.com/wiki/Arma_3:_Characters_And_Gear_Encoding_Guide
	class ItemInfo : ItemInfo
	{
		uniformModel="MA_Armor\data\Helmets\Commando\Commando_Helmet.p3d"; //Here again we set this to the .p3d of our helmet
	};
};
```
### The Finished Example
```c++
class 34thPRC_ArmourStandard_Commando_Helmet_Urban : 34thPRC_ArmourStandard_Marines2_CH252_Urban
{
	displayName="[34th] Commando Helmet Urban";
	author="Yandere";
	model="MA_Armor\data\Helmets\Commando\Commando_Helmet.p3d";
	hiddenSelections[]=
	{
		"Camo1",
		"Camo2"
	};
	hiddenSelectionsTextures[]=
	{
		"34thPRC_ArmourStandard\data\marines2\specialist_helmets\commando\commando_helmet_urban.paa",
		"34thPRC_ArmourStandard\data\mkvb\Commando\Visors\34_Commando_Helmet_Visor_Gold.paa"
	};
	class XtdGearInfo
	{
		model="34thPRC_ArmourStandard_EOD_Helmet_Urban";
		helmet="commando";
		camo="urban";
	};
	class ItemInfo : ItemInfo
	{
		uniformModel="MA_Armor\data\Helmets\Commando\Commando_Helmet.p3d";
	};
};
```

### Making Camo Variants
```c++
/* As a note, when you make other camo variants of a helmet, you need to inherit from the urban version which will allow you to skip a lot of the definitions and do something like the below:*/
class 34thPRC_ArmourStandard_Commando_Helmet_Arid : 34thPRC_ArmourStandard_Commando_Helmet_Urban
{
	displayName="[34th] Commando Helmet Arid";
	author="Yandere";
	hiddenSelectionsTextures[]=
	{
		"34thPRC_ArmourStandard\data\marines2\specialist_helmets\commando\commando_helmet_arid.paa",
		"34thPRC_ArmourStandard\data\mkvb\Commando\Visors\34_Commando_Helmet_Visor_Gold.paa"
	};
	class XtdGearInfo
	{
		model="34thPRC_ArmourStandard_EOD_Helmet_Urban";
		helmet="commando";
		camo="arid";
	};
};
//This is not only cleaner but in the event that something is edited upstream or in a mod we inherit from we only need to change the base class
```

# Config Editing Tutorial 2
This tutorial goes over '#include' statements.

### '#Include'
```c++
/*When our PBOs are intialized by ARMA it essentially creates one super config file with all the mods we use, including our own. This premise is also true internally of our pbos. All of our .hpp files get included into a config.cpp file. Using '#include' lets us break our code down into small chunks such that when the mod is loaded it loads each chunk together in order of how we define it.*/
//For example the below code is in a config_weapons.hpp file a step above the various specialist helmet folders. This tells our mod to load or "include" the config .hpp files for each helmet.
#include "EOD\config_weapons.hpp"
#include "gungnir\config_weapons.hpp"
#include "JFO\config_weapons.hpp"
#include "commando\config_weapons.hpp"

//Then a step above that file we have an exerpt from another config_weapons.hpp:
#include "urban\config_weapons.hpp"
#include "arid\config_weapons.hpp"
#include "arctic\config_weapons.hpp"
#include "tropic\config_weapons.hpp"
#include "woodland\config_weapons.hpp"
#include "specialist_helmets\config_weapons.hpp" //This continues the chain of our specialist helmets being included alongside the different camo variants of the standard helmet

//This continues with another chain of includes after another step up before finally being included in the following block:
class CfgWeapons
{
	#include "data\config_weapons.hpp" //This is the root of the include tree. This branches down from our .cpp main file to all the of include statements and then down to our actual code.
};
```

# Config Editing Tutorial 3
This Tutorial talks about our 34thPRC_Overrides.pbo

### Class Defines
```c++
//Often times with class overrides we need to first define for our mod a class that we are pulling from another mod.
class OPTRE_M99A2S3; //In order to inherit from this weapon which is located within optre we need to first create a definition for it.
class MEU_SAABR96 : OPTRE_M99A2S3 //This both inherits from the previously defined weapon like it does with 1st MEU's mod but it also lets us rewrite propeties of their mod without making a new object.
```

### Overrides
```c++
class OPTRE_M99A2S3;
class MEU_SAABR96 : OPTRE_M99A2S3
{
  //By naming our object in an identical fashion to an existing item like above we are able to give an object different properties without creating an aditional object in game. This is known as overriding the object
	model="OPTRE_Weapons\Sniper\M99.p3d";
	uniformModel="OPTRE_Weapons\Sniper\M99.p3d"; //These two lines should be familiar from Tutorial 1, this is model swapping the object.

  //magazines[] is an array that contains all of the "ammo" or rather what magazines are available to a weapon. '+=' takes what's already in the array and adds whatever is written within the curly braces while only the '=' would overwrite what is allowed with whatever is put.
	magazines[]+=
	{
		"OPTRE_7Rnd_20mm_APFSDS_Mag",
	};
  //magazineWells[] is an array that allows for the addition of preapproved magazines. These are defined elsewhere. For more information see: https://community.bistudio.com/wiki/Arma_3:_Weapon_Config_Guidelines
	magazineWell[]=
	{
		"OPTRE_7Rnd_20mm_APFSDS_Mag"
	};
};
```
