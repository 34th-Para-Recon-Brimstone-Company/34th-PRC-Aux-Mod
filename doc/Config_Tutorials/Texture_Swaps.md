<!--
I reccomend viewing this document with the extension Markdown Preview Enhanced (https://marketplace.visualstudio.com/items?itemName=shd101wyy.markdown-preview-enhanced).
Once installed to VS Code you can see a html preview by clicking the pane on the right side of VS Code that looks like an open book with a magnifying glass. This will greatly enchance readability.
-->

# Texture Swapping
<p>Texture swaps are a large part of what we do in the 34th AUX mod. From our uniforms to our helmets to our custom gear we are, by in large, just chnging out the texture paths for our own. Doing this is as simple as supplying a path to a different texture. This document will teach you the basics of how this works.</p>

## Helmet Example
<p>To start lets take a look at our basic odst helmet in urban camo. We'll start with the enitre code block. You're not expected to understand it all once but it will serve as a helpful reference as you read on.</p>

### The Full Code
```c++
class 34thPRC_ArmourStandard_ODST2_CH252D_SilverVisor_Urban : CH252D_Helmet
{
	displayName="[34th] CH252D Urban (Silver Visor)";
	author="Over Yandere";
	hiddenSelectionsTextures[]=
	{
		"34thPRC_ArmourStandard\data\odst2\urban\34th_Urban_ODST_Helmet.paa",
		"34thPRC_ArmourStandard\data\odst2\visor\34th_ODST_Silvervisor.paa"
	};
	class XtdGearInfo
	{
		model= "34thPRC_ArmourStandard_ODST2_CH252D_SilverVisor_Urban";
		camo= "urban";
		visor= "silver";
	};
};
```

### Class Decleration
```c++
class 34thPRC_ArmourStandard_ODST2_CH252D_SilverVisor_Urban : CH252D_Helmet
```
<p> Nearly every object in a config for Arma 3 is marked as a 'Class' these are essentially things which the game understands as discreet objects with properties defined by keywords or more class objects contained inside of the main class. For example every armor piece we define is a class. Classes also have a special function called inheritance which lets us auto assign the properties of one class to another class. This is done with a colon ':' put inbetween two class names. Referring to the above code, you can read this as the class <i>34thPRC_ArmourStandard_ODST2_CH252D_SilverVisor_Urban</i> <i>:</i> inherits from the class <i>CH252D_Helmet</i>. Make sure to reference <a href="..\Code_Style.md">Our Style Guide</a> for how to write class names.</P>


<p>If you were to write this in a new pbo, it would give you errors at build time. This is because the CH252D_Helmet class is from another .pbo and needs to be both initialized and declared as a dependency for the mod. Don't worry about this too much right now as we'll cover how to do those things later.</p>

<p>Don't forget to include a curly brace '{' after the class decleration line to open it for more code, and to then close it simply put a closing curly brace with a semicolon at the end'};'</p>

### Basic Properties
```c++
	displayName="[34th] CH252D Urban (Silver Visor)";
	author="Over Yandere";
```
<p>The vast majority of classes that we write will have these two properties / key words. '<i>displayName</i>' tells the game what to display in game for the object's name. While '<i>author</i>' both denotes who wrote the object but also displays the creator's name in game.</p>

### Hidden Selection Textures
```c++
	hiddenSelectionsTextures[]=
	{
		"34thPRC_ArmourStandard\data\odst2\urban\34th_Urban_ODST_Helmet.paa", //The texture for the helmet
		"34thPRC_ArmourStandard\data\odst2\visor\34th_ODST_Silvervisor.paa" //The texture for the visor
	};
```
<p><i>hiddenSelectionsTextures[]</i> is an array, a data structure which holds in order a kind of data, in this case it is an array of file paths to .paa files. By writing out this block of code we are not only pointing to our textures so that the helmet displays Brimstone's colors but overwriting the original paths we inherited from the CH252D_Helmet class.</p>

### Ace Arsenal Extended Support
<p>To keep our arsenals in game looking pretty and to prevent lists of the same item with different camos or other properties creating bloat, we use Ace Arsenal extended to group our similar items into one item who's different options can be toggled with switches. This is where our AAX mod comes in, the following code is used to define the items properties for classes within our AAX mod.</p>

```c++
	class XtdGearInfo
	{
		model= "34thPRC_ArmourStandard_ODST2_CH252D_SilverVisor_Urban";
		camo= "urban";
		visor= "silver";
	};
```

<p>'<i>class XtdGearInfo</i>' is class which hooks into Ace Arsenal Extended to define the switch information for a given object. For our ODST helmets they have a '<i>model</i>' which in this case is not a .p3d arma model but rather a keyword which links it to other items, '<i>camo</i>' which is a keyword we defined within our AAX mod as toggle option for the switches and accepts as a value one of our five primary camos, and '<i>visor</i>' which is another self defined switch value that controls the visor color. You don't need to worry about how this works too much as it will be covered under a seperate document for AAX support.</p>
