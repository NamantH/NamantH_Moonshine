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
	// Bottles
	class TTD_Pumpkin_MoonShine;
	class NamantH_Moonshine_Base: TTD_Pumpkin_MoonShine {
		scope=0;
		varLiquidTypeInit=4096;
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
	class NamantH_Apple_Moonshine: NamantH_Moonshine_Base
	{
		scope=2;
		displayName="Plut's G-Apple Moonshine";
		descriptionShort="Sour mash apple shine made from the freshest stock. Just a side gig from those Nice Cock guys. 150 Proof. Make sure to drink responsibly";
		model="NamantH_Moonshine\models\Moonshinebottle_Jack.p3d";
		hiddenSelections[]= {
			"bottle"
		};
		hiddenSelectionsTextures[] = {
			  "NamantH_Moonshine\data\Pluto_Apple_Moonshine_co.paa"
		};

	};
	class NamantH_Honey_Moonshine: NamantH_Moonshine_Base
	{
		scope=2;
		displayName="Zeebz Honey Wine Moonshine";
		descriptionShort="A sweet honey wine made from scratch. Just splash of something metalic. 150 Proof. Make sure to drink responsibly";
		model="NamantH_Moonshine\models\Moonshinebottle_Jack.p3d";
		hiddenSelections[]= {
			"bottle"
		};
		hiddenSelectionsTextures[] = {
			  "NamantH_Moonshine\data\Zeebz_Honey_Moonshine_co.paa"
		};

	};
	class NamantH_Marmalade_Moonshine: NamantH_Moonshine_Base
	{
		scope=2;
		displayName="Strawberry Liquor Moonshine";
		descriptionShort="Strawberries never tasted so good, or hit so hard. 150 Proof. Make sure to drink responsibly";
		model="NamantH_Moonshine\models\Moonshinebottle_Malibu.p3d";
		hiddenSelections[]= {
			"bottle"
		};
		hiddenSelectionsTextures[] = {
			  "NamantH_Moonshine\data\StrawberryLiquor_Moonshine_co.paa"
		};

	};
	class NamantH_Peach_Moonshine: NamantH_Moonshine_Base
	{
		scope=2;
		displayName="Peach Vodka Moonshine";
		descriptionShort="Smells like a fresh baked peach cobbler. Tastes like it as well. 150 Proof. Make sure to drink responsibly";
		model="NamantH_Moonshine\models\Moonshinebottle_Malibu.p3d";
		hiddenSelections[]= {
			"bottle"
		};
		hiddenSelectionsTextures[] = {
			  "NamantH_Moonshine\data\PeachVodka_Moonshine_co.paa"
		};

	};
	class NamantH_Pear_Moonshine: NamantH_Moonshine_Base
	{
		scope=2;
		displayName="Disa Pear Moonshine";
		descriptionShort="Pear hard cider. 150 Proof. Make sure to drink responsibly";
		model="NamantH_Moonshine\models\Moonshinebottle_RedLabel.p3d";
		hiddenSelections[]= {
			"bottle"
		};
		hiddenSelectionsTextures[] = {
			  "NamantH_Moonshine\data\DisaPear_Moonshine_co.paa"
		};

	};
	class NamantH_Plum_Moonshine: NamantH_Moonshine_Base
	{
		scope=2;
		displayName="Plum Brandy Moonshine";
		descriptionShort="A sweet Plum wine. 150 Proof. Make sure to drink responsibly";
		model="NamantH_Moonshine\models\Moonshinebottle_RedLabel.p3d";
		hiddenSelections[]= {
			"bottle"
		};
		hiddenSelectionsTextures[] = {
			  "NamantH_Moonshine\data\PlumBrandy_Moonshine_co.paa"
		};

	};
	class NamantH_Potato_Moonshine: NamantH_Moonshine_Base
	{
		scope=2;
		displayName="Shaun's Spud Slammer Poitín Moonshine";
		descriptionShort="Just like in the old country this potato based liquor will strip walls and your stomach. 150 Proof. Make sure to drink responsibly";
		model="NamantH_Moonshine\models\Moonshinebottle_Bacardi.p3d";
		hiddenSelections[]= {
			"bottle"
		};
		hiddenSelectionsTextures[] = {
			  "NamantH_Moonshine\data\ShaunsSpud_Potin_co.paa"
		};

	};
	class NamantH_Rice_Moonshine: NamantH_Moonshine_Base
	{
		scope=2;
		displayName="Wizaru's Sake #42 Moonshine";
		descriptionShort="A boy and his father took up moonshining as a side gig. The Wizaru's brought this sweet yet spicy Sake to the world. 150 Proof. Make sure to drink responsibly";
		model="NamantH_Moonshine\models\Moonshinebottle_Bacardi.p3d";
		hiddenSelections[]= {
			"bottle"
		};
		hiddenSelectionsTextures[] = {
			  "NamantH_Moonshine\data\WizarusSake_Moonshine_co.paa"
		};

	};
	
	// Pots
	class Pot;
	class NamantH_Apple_Pot: Pot
	{
		scope=2;
		displayName="Apple Mash";
		descriptionShort="A pot of apple mash, add 250g of sugar";
		itemsCargoSize[]={0,0};
	};
	class NamantH_Honey_Pot: Pot
	{
		scope=2;
		displayName="Honey Mash";
		descriptionShort="A pot of honey mash, add 250g of sugar";
		itemsCargoSize[]={0,0};
	};
	class NamantH_Marmalade_Pot: Pot
	{
		scope=2;
		displayName="Marmalade Mash";
		descriptionShort="A pot of marmalade mash, add 250g of sugar";
		itemsCargoSize[]={0,0};
	};
	class NamantH_Peach_Pot: Pot
	{
		scope=2;
		displayName="Peach Mash";
		descriptionShort="A pot of peach mash, add 250g of sugar";
		itemsCargoSize[]={0,0};
	};
	class NamantH_Pear_Pot: Pot
	{
		scope=2;
		displayName="Pear Mash";
		descriptionShort="A pot of pear mash, add 250g of sugar";
		itemsCargoSize[]={0,0};
	};
	class NamantH_Plum_Pot: Pot
	{
		scope=2;
		displayName="Plum Mash";
		descriptionShort="A pot of plum mash, add 250g of sugar";
		itemsCargoSize[]={0,0};
	};
	class NamantH_Potato_Pot: Pot
	{
		scope=2;
		displayName="Potato Mash";
		descriptionShort="A pot of potato mash, add 250g of sugar";
		itemsCargoSize[]={0,0};
	};
	class NamantH_Rice_Pot: Pot
	{
		scope=2;
		displayName="Rice Mash";
		descriptionShort="A pot of rice mash, add 250g of sugar";
		itemsCargoSize[]={0,0};
	};

	// Sugar Pots
	class NamantH_Apple_SugarPot: Pot
	{
		scope=2;
		displayName="Apple & sugar mix";
		descriptionShort="A pot of sugary apple mash. Add half a pack of yeast.";
		itemsCargoSize[]={0,0};
	};
	class NamantH_Honey_SugarPot: Pot
	{
		scope=2;
		displayName="Honey & sugar mix";
		descriptionShort="A pot of sugary Honey mash. Add half a pack of yeast.";
		itemsCargoSize[]={0,0};
	};
	class NamantH_Marmalade_SugarPot: Pot
	{
		scope=2;
		displayName="Marmalade & sugar mix";
		descriptionShort="A pot of sugary Marmalade mash. Add half a pack of yeast.";
		itemsCargoSize[]={0,0};
	};
	class NamantH_Peach_SugarPot: Pot
	{
		scope=2;
		displayName="Peach & sugar mix";
		descriptionShort="A pot of sugary Peach mash. Add half a pack of yeast.";
		itemsCargoSize[]={0,0};
	};
	class NamantH_Pear_SugarPot: Pot
	{
		scope=2;
		displayName="Pear & sugar mix";
		descriptionShort="A pot of sugary Pear mash. Add half a pack of yeast.";
		itemsCargoSize[]={0,0};
	};
	class NamantH_Plum_SugarPot: Pot
	{
		scope=2;
		displayName="Plum & sugar mix";
		descriptionShort="A pot of sugary Plum mash. Add half a pack of yeast.";
		itemsCargoSize[]={0,0};
	};
	class NamantH_Potato_SugarPot: Pot
	{
		scope=2;
		displayName="Potato & sugar mix";
		descriptionShort="A pot of sugary Potato mash. Add half a pack of yeast.";
		itemsCargoSize[]={0,0};
	};
	class NamantH_Rice_SugarPot: Pot
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
