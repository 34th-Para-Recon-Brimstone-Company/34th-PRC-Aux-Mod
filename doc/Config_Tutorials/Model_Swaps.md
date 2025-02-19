<!--
I reccomend viewing this document with the extension Markdown Preview Enhanced (https://marketplace.visualstudio.com/items?itemName=shd101wyy.markdown-preview-enhanced). Once installed to VS Code you can see a html preview by clicking the pane on the right side of VS Code that looks like an open book with a magnifying glass.
-->

# Model Swaps
<p>Swapping a model requires two parts which are demonstrated below from our pbo 34thPRC_Overrides for taking the saabr96 and turning it into a m99a2s3 stanchion in appearance. Some code has been removed to focus on just the model swap.</p>

```c++
class OPTRE_M99A2S3; //Op Tre
class MEU_SAABR96 : OPTRE_M99A2S3
{
	model="OPTRE_Weapons\Sniper\M99.p3d";
	uniformModel="OPTRE_Weapons\Sniper\M99.p3d";
};
```

<p>'<i>model</i>' here is different from the AAX'<i>XtdGearInfo</i>' class' model. This usage of model is part 1 of creating a model swap. The second required componenent is '<i>uniformModel</i>'. This code will inherit all the settings from '<i>OPTRE_M99A2S3</i>' into the '<i>MEU_SAABR96</i>' class and then it will overwrite model as specified. I'll talk about overites in a different file. For now though just focus on the pieces required for model swapping.</p>
