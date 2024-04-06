# Code Style
## Class Names
`PboName_FolderStructure_ItemName_Varients`

* Always start the class name with the PBO name, for our standard armour PBO this is `34thPRC_ArmourStandard`.
* Then copy the folder structure to the config file, skipping `data`. Seperate each folder with underscores `_`.
* Finally, name the new class. Preferably with a significant part of its display name. If the name matches the folder then don't add it. `Beret_Beret` should be just `Beret`.
* If you need to add varients then you can add those on the end. Preferably use descriptive names for these e.g. `UrbanMediumBlue_WhiteVisor`. Multiple variants can be used separated with underscores `_`. If you can't think of a meaningful name for the variants then number them. Avoid initials, e.g `NV` should be `NoVisor`.

* Separate each element above with an underscore `_`. Do not separate words if they are part of the same element, e.g. `Urban_Medium_Blue` should be `UrbanMediumBlue`.

The weapon part of a uniform is called `Uniform`, the vehicle part is called `Trooper` instead.

## External classes
When a class from another mod is referenced in our mod we should add a comment labeling what PBO it came from. This should be the internal mod name, often this matches the PBO name but not always. You can find the mod's name in its `config.cpp` file in the BPO.

You then need to add that internal mod name our mod's `requiredAddons` entry in our `config.cpp`. This should also have a comment, this time with the steam workshop name of that mod (except for anything coming from Arma 3 itself, you should call that `Vanilla`). If there is already an entry for that internal mod name in our `requiredAddons` then you do not need to add a duplicate.

## Inheritence
Prefer inheriting from one of our classes instead of inheriting from the same external class multiple times. For example, if you are making camo varients for a helmet then instead of inheriting from the external helmet class for each camo pattern, instead inherit from the external class once for one camo and then inherit from that camo's class for the rest of the camos. Convention is to have the urban camo be the one that inherits from the external class and acts as a base for the other camos.

## Semicolons

## File paths
Paths inside of the PBO are to be lowercase, the config should also use lowercase when pointing to files.

### Texture file names
