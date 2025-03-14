<!--
I reccomend viewing this document with the extension Markdown Preview Enhanced (https://marketplace.visualstudio.com/items?itemName=shd101wyy.markdown-preview-enhanced). Once installed to VS Code you can see a html preview by clicking the pane on the right side of VS Code that looks like an open book with a magnifying glass. This will greatly enchance readability.
-->

# Initialization and #Include
In [Texture Swaps](./Texture_Swaps.md) we mentioned that when pulling from another mod you need to both initialize a class (sometimes called defining it), and also declare the mod it comes from as a dependacy for our .pbo. This document will cover both how to do that and how #include works so that you know where to initialize a class. Note that this meaning of define is not the same as #define which is something else entirely.

## Mod Decleration
The following code block is a complete example of how to define a mod. It starts with `class CfgPathces` and then has an internal class which is the mod's true name according to Arma. It is a good practice to name this the same as your folder structure so that other people can list your mod as a requirement without unpacking it. Many mods do not do this however so to find a mod's true name you need to unpack it and look in the .cpp file.

```c++
class CfgPatches
{
  class 34thPRC_ArmourStandard
  {
    author="34th PRC Modding Team";
    units[]={};
    requiredAddons[] =
    {
      "A3_Characters_F", // Vanilla
      "A3_Characters_F_EPB", // Vanilla
      "MA_Armor",	// Misriah Armory
      "34thPRC_Overrides", // 34th PRC Aux Mod
      "DMNS_Units", //UNSC Foundries
    };
  };
};
```

### CfgPatches
```c++
class CfgPatches
```
CfgPatches is a header class of an addon. Placed in config.cpp, it contains information about requirements, content and meta data describing the addon. For more information see: [the BI wiki](https://community.bistudio.com/wiki/CfgPatches).

### Mod Config
```c++
class 34thPRC_ArmourStandard
```
This class decleration defines a mod's name and then allows for the inclusion of other keywords for defining it's meta data.

### Meta Data
```c++
    author="34th PRC Modding Team"; //The author of the mod
    units[]={}; //List of objects (CfgVehicles classes) contained in the addon. Important also for Zeus content (units and groups) unlocking.
```
This is pretty standard as far as meta data goes for our needs and shouldn't require too much editing.

### Dependancies
```c++
    requiredAddons[] =
    {
      "A3_Characters_F", // Vanilla
      "A3_Characters_F_EPB", // Vanilla
      "MA_Armor",	// Misriah Armory
      "34thPRC_Overrides", // 34th PRC Aux Mod
      "DMNS_Units", //UNSC Foundries
    };
```
`requiredAddons[]` is an array of classes which contains all the mods required to load before the current mod. This is important because at runtime Arma 3 essentially forms one giant config. As noted in the Style Guide, you should at a minimum say which mod (steam workshop) the required mod came from.

### Cfg...
Most mods will have a mix of Cfg classes. These include cfgAmmo, cfgMagazines, cfgWeapons and cfgVehicles, which are all root classes that are defined within the engine. For more info see: [CfgWeapons Config Reference](https://community.bistudio.com/wiki/CfgWeapons_Config_Reference) on the BI wiki.

```c++
class CfgVehicles
{
  #include "data\config_vehicles.hpp"
};
class CfgWeapons
{
  #include "data\config_weapons.hpp"
};
class CfgGlasses
{
  #include "data\config_glasses.hpp"
}
```
## #includes
You might have noticed in the last example that there doesn't appear to be anything other than a `#include` and a path within the the different Cfg classes. `#include` is a decleration that we want to take whatever is in the include and put it here. In the same way that every mod modifies the Cfg Classes at load time all of our includes are loaded in order into one big section. This function has allowed us to break our code down into smaller more specific and readable blocks by utilizing `#include`.

```c++
#include "beret\config_weapons.hpp"
#include "marines2\config_weapons.hpp"
#include "mkiv\config_weapons.hpp"
#include "mkvb\config_weapons.hpp"
#include "odst\config_weapons.hpp"
#include "odst2\config_weapons.hpp"
#include "spi\config_weapons.hpp"
#include "pilot\config_weapons.hpp"
```

The above block of code is what exists inside of `#include "data\config_weapons.hpp"` as you can see our includes in 34thPRC_ArmourStandard rather rapidly branch out. If it wasn't already apparent you can also include code alongside `#include`.

## Class Initialization
If you refer back to [Texture_Swaps.md](./Texture_Swaps.md) I mentioned that I would cover initialization later, well now's the time. Looking below you find the contents of "odst2/config_weapons.hpp"

```c++
//Defintions
class CH252D_Helmet; //MA_Armor -> Marine_Helmets.hpp
class CH252D_Helmet_dp; //MA_Armor -> Marine_Helmets.hpp
class M52_ODST_Vest_Standard_A; //MA_Armor -> M56D_Vests.hpp //Standard ODST Vest, no pouches and bobs
class M52_ODST_Vest_Standard_B; //MA_Armor -> M56D_Vests.hpp
class M52_ODST_Vest_Standard_C; //MA_Armor -> M56D_Vests.hpp
class M52_ODST_Vest_Marksman; //MA_Armor -> M56D_Vests.hpp //Marksman version
class M52_ODST_Vest_CQB; //MA_Armor -> M56D_Vests.hpp //CQB version
class M52_ODST_Vest_Light; //MA_Armor -> M56D_Vests.hpp //Shoulderless version of M52_ODST_Vest_Standard_A

#include "urban\config_weapons.hpp"
#include "arid\config_weapons.hpp"
#include "arctic\config_weapons.hpp"
#include "tropic\config_weapons.hpp"
#include "woodland\config_weapons.hpp"
```

As you can see we have both initializations of classes from MA_Armor and more includes. The reason that we have so many class definitions here is because this lowest level possible while still covering all the .hpp files that need to be able to see these class definitions.
