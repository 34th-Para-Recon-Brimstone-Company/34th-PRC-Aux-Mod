class OPTRE_M247;
class OPTRE_M247H_Etilka: OPTRE_M247
	{
	magazines[]+=
	{
	"34thPRC_Overrides_Weapons_Etilka_200Rnd_145x114_HVAP";
	};
	};
	class OpticsModes
		{
			class MyOptics
			{
				opticsID=2;
				useModelOptics="true";
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				opticsZoomMin=0.055500001;
				opticsZoomMax=0.13;
				opticsZoomInit=0.13;
				discreteDistance[]={100,300,400,500,600,700,800,900,1000};
				discreteDistanceInitIndex=1;
				distanceZoomMin=100;
				distanceZoomMax=1000;
				nFovLimit=0.07;
				discreteFov[]={0.13,0.055500001};
				discreteInitIndex=0;
				modelOptics[]=
				{
					"\A3\Weapons_f\acc\reticle_tws"
				};
				memoryPointCamera="eye";
				visionMode[]=
				{
					"Normal"
				};
				opticsFlare="true";
				opticsDisablePeripherialVision="true";
				cameraDir="eye_look";
			};
			class IronOnTopOfMyOptics: MyOptics
			{
				opticsID=1;
				useModelOptics="false";
				opticsFlare="false";
				opticsDisablePeripherialVision="false";
				opticsZoomMin=0.375;
				opticsZoomMax=1.1;
				opticsZoomInit=0.75;
				memoryPointCamera="eye";
				visionMode[]={};
				discretefov[]={};
			};
		};
