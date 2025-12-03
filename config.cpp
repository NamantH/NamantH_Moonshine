class CfgMods
{
	class NamantH_Moonshine
	{
		dir="NamantH_Moonshine";
		picture="";
		action="";
		name="NamantH's Moonshining Expansion";
		author="NamantH";
		credits="NamantH";
		authorID="0";
		version="1";
		extra=0;
		type="mod";
		dependencies[]=
		{
			"Game",
			"World",
			"Mission"
		};
		class defs
		{
			class gameScriptModule
			{
				value="";
				files[]=
				{
					"NamantH_Moonshine/scripts/3_Game"
				};
			};
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"NamantH_Moonshine/scripts/4_World"
				};
			};
			class missionScriptModule
			{
				value="";
				files[]=
				{
					"NamantH_Moonshine/scripts/5_Mission"
				};
			};
		};
	};
};

class CfgPatches
{
	class NamantH_Moonshine
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"RPC_Scripts","DZ_Characters","DZ_Characters_Backpacks","DZ_Characters_Pants","DZ_Characters_Tops","DZ_Gear_Containers","DZ_Characters_Headgear","DZ_Gear_Consumables","DZ_Gear_Food","DZ_Structures_Furniture","DZ_Gear_Camping","DZ_Gear_Crafting","DZ_Gear_Tools","DZ_Animals","DZ_Data","ThingsToDo",
			"DZ_Gear_Drinks"
		};
	};
};

class cfgVehicles
{
	// Sugar Override?
	class Edible_Base;
	class TTD_Sugar: Edible_Base {
		scope=2;
		displayName="bag of Sugar";
		descriptionShort="1KG Bag of Sugar,Great for making Moonshine";
		model="ThingsToDo\Items\Retex\SugarBAG.p3d";
		weight=1;
		itemSize[]={2,3};
		varQuantityInit=1000;
		varQuantityMin=0;
		varQuantityMax=1000;
		hiddenSelections[]=
		{
		};
		hiddenSelectionsTextures[]=
		{
		};
		varTemperatureFreezePoint=-60;
		varTemperatureThawPoint=-60;
		varTemperatureFreezeTime=7920;
		varTemperatureThawTime=7920;
		varTemperatureMax=105;
		temperaturePerQuantityWeight=3;
		absorbency=0.89999998;
		rotationFlags=63;
		debug_ItemCategory=6;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=40;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\food\data\rice.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\food\data\rice.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\food\data\rice_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\food\data\rice_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\food\data\rice_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class Nutrition
		{
			fullnessIndex=3;
			energy=100;
			water=0;
			nutritionalIndex=1;
			toxicity=0;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet="openTunaCan_SoundSet";
					id=204;
				};
				class Eating_TakeFood
				{
					soundSet="Eating_TakeFood_Soundset";
					id=889;
				};
				class Eating_BoxOpen
				{
					soundSet="Eating_BoxOpen_Soundset";
					id=893;
				};
				class Eating_BoxShake
				{
					soundSet="Eating_BoxShake_Soundset";
					id=894;
				};
				class Eating_BoxEnd
				{
					soundSet="Eating_BoxEnd_Soundset";
					id=895;
				};
			};
		};
		class InventorySlotsOffsets
		{
			class DirectCookingA
			{
				position[]={0.02,0.039999999,0};
				orientation[]={180,90,90};
			};
			class DirectCookingB
			{
				position[]={0.050000001,0.039999999,0};
				orientation[]={30,90,0};
			};
			class DirectCookingC
			{
				position[]={0.050000001,0.039999999,0};
				orientation[]={0,90,0};
			};
		};		
	};
	
	// Bottles
	class Bottle_Base;
	class NamantH_Moonshine_Base: Bottle_Base {
		scope=0;
		varLiquidTypeInit=2048;
		varTemperatureFreezeTime=1980;
		varTemperatureThawTime=1980;
		varTemperatureMax=100;
		varTemperatureFreezePoint=-3;
		varTemperatureThawPoint=-3;
		weight=450;
		itemSize[]={1,3};
		destroyOnEmpty=0;
		varQuantityDestroyOnMin=0;
		liquidContainerType="1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 512 + 1024 + 2048 + 4096 + 8192 + 16384 + 32768 + 65536  - (1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256)";
		varQuantityInit=2000;
		varQuantityMin=0;
		varQuantityMax=2000;
		inventorySlot[]=
		{
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class GlassBottle_in_B
				{
					soundSet="GlassBottle_in_B_SoundSet";
					id=202;
				};
				class GlassBottle_in_C
				{
					soundSet="GlassBottle_in_C_SoundSet";
					id=203;
				};
				class WaterBottle_in_C1
				{
					soundSet="WaterBottle_in_C1_SoundSet";
					id=204;
				};
				class GlassBottle_out_A
				{
					soundSet="GlassBottle_out_A_SoundSet";
					id=205;
				};
				class GlassBottle_out_B
				{
					soundSet="GlassBottle_out_B_SoundSet";
					id=206;
				};
				class WellPond_loop
				{
					soundSet="WellPond_loop_SoundSet";
					id=209;
				};
				class WellBottle_loop
				{
					soundSet="WellBottle_loop_SoundSet";
					id=210;
				};
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\drinks\data\VodkaBottles.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\drinks\data\VodkaBottles.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\drinks\data\VodkaBottles_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\drinks\data\VodkaBottles_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\drinks\data\VodkaBottles_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	
	// Override his so it takes my temperature changes.
	class TTD_Pumpkin_MoonShine: NamantH_Moonshine_Base
	{
		scope=2;
		displayName="Pumpkin MoonShine";
		descriptionShort="150Proof Pumpkin MoonShine Fresh out of the still, possessing an alcohol content too high to drink straight.";
		model="ThingsToDo\Items\Moonshine\Moonshinebottle.p3d";
		hiddenSelections[]=
		{
			"bottle"
		};
		hiddenSelectionsTextures[] = 
			{
			  
			};
	};
	class NamantH_Apple_Moonshine: NamantH_Moonshine_Base
	{
		scope=2;
		displayName="Pluto's G-Apple Moonshine";
		descriptionShort="Sour mash apple shine made from the freshest stock. Just a side gig from those Nice Cock guys. 150 Proof. Make sure to drink responsibly";
		model="NamantH_Moonshine\models\MoonshineBottle2.p3d";
		hiddenSelections[]= {
			"bottle"
		};
		hiddenSelectionsTextures[] = {
			  "NamantH_Moonshine\data\Pluto_Apple_Moonshine_ca.paa"
		};
		hiddenSelectionsMaterials[] = {
			  "NamantH_Moonshine\data\Pluto_Apple.rvmat"
		};

	};
	class NamantH_Honey_Moonshine: NamantH_Moonshine_Base
	{
		scope=2;
		displayName="Zeebz Honey Wine Moonshine";
		descriptionShort="A sweet honey wine made from scratch. Just splash of something metalic. 150 Proof. Make sure to drink responsibly";
		model="NamantH_Moonshine\models\MoonshineBottle2.p3d";
		hiddenSelections[]= {
			"bottle"
		};
		hiddenSelectionsTextures[] = {
			  "NamantH_Moonshine\data\Zeebz_Honey_Moonshine_ca.paa"
		};
		hiddenSelectionsMaterials[] = {
			  "NamantH_Moonshine\data\Zeebz_Honey_Moonshine.rvmat"
		};

	};
	class NamantH_Marmalade_Moonshine: NamantH_Moonshine_Base
	{
		scope=2;
		displayName="Strawberry Liquor Moonshine";
		descriptionShort="Strawberries never tasted so good, or hit so hard. 150 Proof. Make sure to drink responsibly";
		model="NamantH_Moonshine\models\MoonshineBottle1.p3d";
		hiddenSelections[]= {
			"bottle"
		};
		hiddenSelectionsTextures[] = {
			  "NamantH_Moonshine\data\StrawberryLiquor_Moonshine_ca.paa"
		};
		hiddenSelectionsMaterials[] = {
			  "NamantH_Moonshine\data\StrawberryLiquor_Moonshine.rvmat"
		};

	};
	class NamantH_Peach_Moonshine: NamantH_Moonshine_Base
	{
		scope=2;
		displayName="Peach Vodka Moonshine";
		descriptionShort="Smells like a fresh baked peach cobbler. Tastes like it as well. 150 Proof. Make sure to drink responsibly";
		model="NamantH_Moonshine\models\MoonshineBottle1.p3d";
		hiddenSelections[]= {
			"bottle"
		};
		hiddenSelectionsTextures[] = {
			  "NamantH_Moonshine\data\PeachVodka_Moonshine_ca.paa"
		};
		hiddenSelectionsMaterials[] = {
			  "NamantH_Moonshine\data\PeachVodka_Moonshine.rvmat"
		};

	};
	class NamantH_Pear_Moonshine: NamantH_Moonshine_Base
	{
		scope=2;
		displayName="Disa Pear Moonshine";
		descriptionShort="Pear hard cider. 150 Proof. Make sure to drink responsibly";
		model="NamantH_Moonshine\models\MoonshineBottle3.p3d";
		hiddenSelections[]= {
			"bottle"
		};
		hiddenSelectionsTextures[] = {
			  "NamantH_Moonshine\data\DisaPear_Moonshine_ca.paa"
		};
		hiddenSelectionsMaterials[] = {
			  "NamantH_Moonshine\data\DisaPear_Moonshine.rvmat"
		};

	};
	class NamantH_Plum_Moonshine: NamantH_Moonshine_Base
	{
		scope=2;
		displayName="Plum Brandy Moonshine";
		descriptionShort="A sweet Plum wine. 150 Proof. Make sure to drink responsibly";
		model="NamantH_Moonshine\models\MoonshineBottle3.p3d";
		hiddenSelections[]= {
			"bottle"
		};
		hiddenSelectionsTextures[] = {
			  "NamantH_Moonshine\data\PlumBrandy_Moonshine_ca.paa"
		};
		hiddenSelectionsMaterials[] = {
			  "NamantH_Moonshine\data\PlumBrandy_Moonshine.rvmat"
		};

	};
	class NamantH_Potato_Moonshine: NamantH_Moonshine_Base
	{
		scope=2;
		displayName="Shaun's Spud Slammer Poitín Moonshine";
		descriptionShort="Just like in the old country this potato based liquor will strip walls and your stomach. 150 Proof. Make sure to drink responsibly";
		model="NamantH_Moonshine\models\MoonshineBottle4.p3d";
		hiddenSelections[]= {
			"bottle"
		};
		hiddenSelectionsTextures[] = {
			  "NamantH_Moonshine\data\ShaunsSpud_Potin_ca.paa"
		};
		hiddenSelectionsMaterials[] = {
			  "NamantH_Moonshine\data\ShaunsSpud_Potin.rvmat"
		};

	};
	class NamantH_Rice_Moonshine: NamantH_Moonshine_Base
	{
		scope=2;
		displayName="Wizaru's Sake #42 Moonshine";
		descriptionShort="A boy and his father took up moonshining as a side gig. The Wizaru's brought this sweet yet spicy Sake to the world. 150 Proof. Make sure to drink responsibly";
		model="NamantH_Moonshine\models\MoonshineBottle4.p3d";
		hiddenSelections[]= {
			"bottle"
		};
		hiddenSelectionsTextures[] = {
			  "NamantH_Moonshine\data\WizarusSake_Moonshine_ca.paa"
		};
		hiddenSelectionsMaterials[] = {
			  "NamantH_Moonshine\data\WizaruSake.rvmat"
		};

	};
	
	// Pots
	
	// Make New Mash Pot	
	class NamantH_MashPot_Base: Bottle_Base
	{
		scope=0;
		displayName="Mash Pot Base";
		descriptionShort="Mash Pot Base, add 250g of sugar";
		itemsCargoSize[]={0,0};
		model="\dz\gear\cooking\CookingPot.p3d";
		weight=1000;
		itemSize[]={4,3};
		inventorySlot[]=
		{
			"CookingEquipment",
			"DirectCookingA",
			"DirectCookingB",
			"DirectCookingC"
		};
		stackedRandom=0;
		canBeDigged=1;
		allowOwnedCargoManipulation=1;
		varLiquidTypeInit=512;
		liquidContainerType="1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 512 + 1024 + 2048 + 4096 + 8192 + 16384 + 32768 + 65536  + 131072 + 262144 + 524288 + 2097152 + 4194304 - (1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256) - 32768";
		destroyOnEmpty=0;
		varQuantityDestroyOnMin=0;
		varQuantityInit=0;
		varQuantityMin=0;
		varQuantityMax=2000;
		varTemperatureMax=200;
		varTemperatureFreezePoint=-200;
		varTemperatureThawPoint=-200;
		varTemperatureFreezeTime=3300;
		varTemperatureThawTime=3300;
		varTemperatureOverheatTime=480;
		temperaturePerQuantityWeight=6;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=200;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\cooking\data\cooking_pot.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\cooking\data\cooking_pot.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\cooking\data\cooking_pot_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\cooking\data\cooking_pot_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\cooking\data\cooking_pot_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		repairableWithKits[]={10};
		repairCosts[]={25};
		class AnimationSources
		{
			class handleRotate
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
		};
		soundImpactType="metal";
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpPotLight
				{
					soundSet="pickUpPotLight_SoundSet";
					id=796;
				};
				class pickUpPot
				{
					soundSet="pickUpPot_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="pot_drop_SoundSet";
					id=898;
				};
			};
		};
	};

	// Override his base class definition to fix bug
	class TTD_PumpkinPot: NamantH_MashPot_Base
	{
		scope=2;
		displayName="Pumpkin Mash";
		descriptionShort="A pot of pumpkin mash, add 250g of sugar";
		itemsCargoSize[]={0,0};
	};
	class NamantH_Apple_Pot: NamantH_MashPot_Base
	{
		scope=2;
		displayName="Apple Mash";
		descriptionShort="A pot of apple mash, add 250g of sugar";
		itemsCargoSize[]={0,0};
	};
	class NamantH_Honey_Pot: NamantH_MashPot_Base
	{
		scope=2;
		displayName="Honey Mash";
		descriptionShort="A pot of honey mash, add 250g of sugar";
		itemsCargoSize[]={0,0};
	};
	class NamantH_Marmalade_Pot: NamantH_MashPot_Base
	{
		scope=2;
		displayName="Marmalade Mash";
		descriptionShort="A pot of marmalade mash, add 250g of sugar";
		itemsCargoSize[]={0,0};
	};
	class NamantH_Peach_Pot: NamantH_MashPot_Base
	{
		scope=2;
		displayName="Peach Mash";
		descriptionShort="A pot of peach mash, add 250g of sugar";
		itemsCargoSize[]={0,0};
	};
	class NamantH_Pear_Pot: NamantH_MashPot_Base
	{
		scope=2;
		displayName="Pear Mash";
		descriptionShort="A pot of pear mash, add 250g of sugar";
		itemsCargoSize[]={0,0};
	};
	class NamantH_Plum_Pot: NamantH_MashPot_Base
	{
		scope=2;
		displayName="Plum Mash";
		descriptionShort="A pot of plum mash, add 250g of sugar";
		itemsCargoSize[]={0,0};
	};
	class NamantH_Potato_Pot: NamantH_MashPot_Base
	{
		scope=2;
		displayName="Potato Mash";
		descriptionShort="A pot of potato mash, add 250g of sugar";
		itemsCargoSize[]={0,0};
	};
	class NamantH_Rice_Pot: NamantH_MashPot_Base
	{
		scope=2;
		displayName="Rice Mash";
		descriptionShort="A pot of rice mash, add 250g of sugar";
		itemsCargoSize[]={0,0};
	};

	// Sugar Pots
	// Make New Sugar Pot
	class NamantH_SugarPot_Base: Bottle_Base
	{
		scope=0;
		displayName="Sugar Pot Base";
		descriptionShort="Sugar Pot Base, add Yease";
		itemsCargoSize[]={0,0};
		model="\dz\gear\cooking\CookingPot.p3d";
		weight=1000;
		itemSize[]={4,3};
		inventorySlot[]=
		{
			"CookingEquipment",
			"DirectCookingA",
			"DirectCookingB",
			"DirectCookingC"
		};
		stackedRandom=0;
		canBeDigged=1;
		allowOwnedCargoManipulation=1;
		varLiquidTypeInit=512;
		liquidContainerType="1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 512 + 1024 + 2048 + 4096 + 8192 + 16384 + 32768 + 65536  + 131072 + 262144 + 524288 + 2097152 + 4194304 - (1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256) - 32768";
		destroyOnEmpty=0;
		varQuantityDestroyOnMin=0;
		varQuantityInit=0;
		varQuantityMin=0;
		varQuantityMax=2000;
		varTemperatureMax=200;
		varTemperatureFreezePoint=-200;
		varTemperatureThawPoint=-200;
		varTemperatureFreezeTime=3300;
		varTemperatureThawTime=3300;
		varTemperatureOverheatTime=480;
		temperaturePerQuantityWeight=6;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=200;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\cooking\data\cooking_pot.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\cooking\data\cooking_pot.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\cooking\data\cooking_pot_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\cooking\data\cooking_pot_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\cooking\data\cooking_pot_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		repairableWithKits[]={10};
		repairCosts[]={25};
		class AnimationSources
		{
			class handleRotate
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
		};
		soundImpactType="metal";
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpPotLight
				{
					soundSet="pickUpPotLight_SoundSet";
					id=796;
				};
				class pickUpPot
				{
					soundSet="pickUpPot_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="pot_drop_SoundSet";
					id=898;
				};
			};
		};
	};

	// Override his base pot to use mine. 
	class TTD_PumpkinSugarPot: NamantH_SugarPot_Base
	{
		scope=2;
		displayName="Pumpkin & sugar mix";
		descriptionShort="A pot of sugary pumpkin mash. Add half a pack of yeast.";
		itemsCargoSize[]={0,0};
	};

	class NamantH_Apple_SugarPot: NamantH_SugarPot_Base
	{
		scope=2;
		displayName="Apple & sugar mix";
		descriptionShort="A pot of sugary apple mash. Add half a pack of yeast.";
		itemsCargoSize[]={0,0};
	};
	class NamantH_Honey_SugarPot: NamantH_SugarPot_Base
	{
		scope=2;
		displayName="Honey & sugar mix";
		descriptionShort="A pot of sugary Honey mash. Add half a pack of yeast.";
		itemsCargoSize[]={0,0};
	};
	class NamantH_Marmalade_SugarPot: NamantH_SugarPot_Base
	{
		scope=2;
		displayName="Marmalade & sugar mix";
		descriptionShort="A pot of sugary Marmalade mash. Add half a pack of yeast.";
		itemsCargoSize[]={0,0};
	};
	class NamantH_Peach_SugarPot: NamantH_SugarPot_Base
	{
		scope=2;
		displayName="Peach & sugar mix";
		descriptionShort="A pot of sugary Peach mash. Add half a pack of yeast.";
		itemsCargoSize[]={0,0};
	};
	class NamantH_Pear_SugarPot: NamantH_SugarPot_Base
	{
		scope=2;
		displayName="Pear & sugar mix";
		descriptionShort="A pot of sugary Pear mash. Add half a pack of yeast.";
		itemsCargoSize[]={0,0};
	};
	class NamantH_Plum_SugarPot: NamantH_SugarPot_Base
	{
		scope=2;
		displayName="Plum & sugar mix";
		descriptionShort="A pot of sugary Plum mash. Add half a pack of yeast.";
		itemsCargoSize[]={0,0};
	};
	class NamantH_Potato_SugarPot: NamantH_SugarPot_Base
	{
		scope=2;
		displayName="Potato & sugar mix";
		descriptionShort="A pot of sugary Potato mash. Add half a pack of yeast.";
		itemsCargoSize[]={0,0};
	};
	class NamantH_Rice_SugarPot: NamantH_SugarPot_Base
	{
		scope=2;
		displayName="Rice & sugar mix";
		descriptionShort="A pot of sugary Rice mash. Add half a pack of yeast.";
		itemsCargoSize[]={0,0};
	};
	
	// Mash Pots
	class Stone;
	class NamantH_Apple_MashPot: Stone
	{
		scope=2;
		displayName="Apple Moonshine Mash Pot";
		descriptionShort="A pot of moonshine mash,add to a Moonshine Still to get started.";
		model="ThingsToDo\Items\Material_MashPot\Material_MashPot.p3d";
		inventorySlot="TTD_Material_MashPot";
		varStackMax=2;
		itemsCargoSize[]={0,0};
		hiddenSelections[]=
		{
			"handle",
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"ThingsToDo\Items\Material_MashPot\Material_MashPot_co.paa",
			"ThingsToDo\Items\Material_MashPot\Material_MashPot_co.paa"
		};
	};
	class NamantH_Honey_MashPot: Stone
	{
		scope=2;
		displayName="Honey Moonshine Mash Pot";
		descriptionShort="A pot of moonshine mash,add to a Moonshine Still to get started.";
		model="ThingsToDo\Items\Material_MashPot\Material_MashPot.p3d";
		inventorySlot="TTD_Material_MashPot";
		varStackMax=2;
		itemsCargoSize[]={0,0};
		hiddenSelections[]=
		{
			"handle",
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"ThingsToDo\Items\Material_MashPot\Material_MashPot_co.paa",
			"ThingsToDo\Items\Material_MashPot\Material_MashPot_co.paa"
		};
	};
	class NamantH_Marmalade_MashPot: Stone
	{
		scope=2;
		displayName="Marmalade Moonshine Mash Pot";
		descriptionShort="A pot of moonshine mash,add to a Moonshine Still to get started.";
		model="ThingsToDo\Items\Material_MashPot\Material_MashPot.p3d";
		inventorySlot="TTD_Material_MashPot";
		varStackMax=2;
		itemsCargoSize[]={0,0};
		hiddenSelections[]=
		{
			"handle",
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"ThingsToDo\Items\Material_MashPot\Material_MashPot_co.paa",
			"ThingsToDo\Items\Material_MashPot\Material_MashPot_co.paa"
		};
	};
	class NamantH_Peach_MashPot: Stone
	{
		scope=2;
		displayName="Peach Moonshine Mash Pot";
		descriptionShort="A pot of moonshine mash,add to a Moonshine Still to get started.";
		model="ThingsToDo\Items\Material_MashPot\Material_MashPot.p3d";
		inventorySlot="TTD_Material_MashPot";
		varStackMax=2;
		itemsCargoSize[]={0,0};
		hiddenSelections[]=
		{
			"handle",
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"ThingsToDo\Items\Material_MashPot\Material_MashPot_co.paa",
			"ThingsToDo\Items\Material_MashPot\Material_MashPot_co.paa"
		};
	};
	class NamantH_Pear_MashPot: Stone
	{
		scope=2;
		displayName="Pear Moonshine Mash Pot";
		descriptionShort="A pot of moonshine mash,add to a Moonshine Still to get started.";
		model="ThingsToDo\Items\Material_MashPot\Material_MashPot.p3d";
		inventorySlot="TTD_Material_MashPot";
		varStackMax=2;
		itemsCargoSize[]={0,0};
		hiddenSelections[]=
		{
			"handle",
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"ThingsToDo\Items\Material_MashPot\Material_MashPot_co.paa",
			"ThingsToDo\Items\Material_MashPot\Material_MashPot_co.paa"
		};
	};
	class NamantH_Plum_MashPot: Stone
	{
		scope=2;
		displayName="Plum Moonshine Mash Pot";
		descriptionShort="A pot of moonshine mash,add to a Moonshine Still to get started.";
		model="ThingsToDo\Items\Material_MashPot\Material_MashPot.p3d";
		inventorySlot="TTD_Material_MashPot";
		varStackMax=2;
		itemsCargoSize[]={0,0};
		hiddenSelections[]=
		{
			"handle",
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"ThingsToDo\Items\Material_MashPot\Material_MashPot_co.paa",
			"ThingsToDo\Items\Material_MashPot\Material_MashPot_co.paa"
		};
	};
	class NamantH_Potato_MashPot: Stone
	{
		scope=2;
		displayName="Potato Moonshine Mash Pot";
		descriptionShort="A pot of moonshine mash,add to a Moonshine Still to get started.";
		model="ThingsToDo\Items\Material_MashPot\Material_MashPot.p3d";
		inventorySlot="TTD_Material_MashPot";
		varStackMax=2;
		itemsCargoSize[]={0,0};
		hiddenSelections[]=
		{
			"handle",
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"ThingsToDo\Items\Material_MashPot\Material_MashPot_co.paa",
			"ThingsToDo\Items\Material_MashPot\Material_MashPot_co.paa"
		};
	};
	class NamantH_Rice_MashPot: Stone
	{
		scope=2;
		displayName="Rice Moonshine Mash Pot";
		descriptionShort="A pot of moonshine mash,add to a Moonshine Still to get started.";
		model="ThingsToDo\Items\Material_MashPot\Material_MashPot.p3d";
		inventorySlot="TTD_Material_MashPot";
		varStackMax=2;
		itemsCargoSize[]={0,0};
		hiddenSelections[]=
		{
			"handle",
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"ThingsToDo\Items\Material_MashPot\Material_MashPot_co.paa",
			"ThingsToDo\Items\Material_MashPot\Material_MashPot_co.paa"
		};
	};
};
