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
