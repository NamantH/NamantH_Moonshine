modded class TTD_MoonShineStill extends ItemBase
{
	protected string m_WhatShine;
	protected string m_WhatBottle;
	
	override void EEItemAttached( EntityAI item, string slot_name )
	{
		super.EEItemAttached( item, slot_name );
		m_WhatShine = item.GetType();
		Print(m_WhatShine);
	}

	ref array<string> m_AllowedCargo = {"TTD_Pumpkin_MoonShine","NamantH_Honey_Moonshine","NamantH_Marmalade_Moonshine","NamantH_Peach_Moonshine","NamantH_Pear_Moonshine","NamantH_Plum_Moonshine","NamantH_Potato_Moonshine","NamantH_Rice_Moonshine","NamantH_Apple_Moonshine"};

	override void hiShine()
	{
		
		if (GetGame().IsServer() && GetCompEM().IsWorking() )
		{
			switch(m_WhatShine) {
				case "TTD_Material_MashPot":
					m_WhatBottle = "TTD_Pumpkin_MoonShine";
					break;
				case "NamantH_Apple_MashPot":
					m_WhatBottle = "NamantH_Apple_Moonshine";
					break;
				case "NamantH_Honey_MashPot":
					m_WhatBottle = "NamantH_Honey_Moonshine";
					break;
				case "NamantH_Marmalade_MashPot":
					m_WhatBottle = "NamantH_Marmalade_Moonshine";
					break;
				case "NamantH_Peach_MashPot":
					m_WhatBottle = "NamantH_Peach_Moonshine";
					break;
				case "NamantH_Pear_MashPot":
					m_WhatBottle = "NamantH_Pear_Moonshine";
					break;
				case "NamantH_Plum_MashPot":
					m_WhatBottle = "NamantH_Plum_Moonshine";
					break;
				case "NamantH_Potato_MashPot":
					m_WhatBottle = "NamantH_Potato_Moonshine";
					break;
				case "NamantH_Rice_MashPot":
					m_WhatBottle = "NamantH_Rice_Moonshine";
					break;
				default: 
					m_WhatBottle = "TTD_Pumpkin_MoonShine";
					break;
			}
			Print(m_WhatBottle);
			EntityAI MoonShine1 = this.GetInventory().CreateInInventory(m_WhatBottle);
			EntityAI MoonShine2 = this.GetInventory().CreateInInventory(m_WhatBottle);
			EntityAI MoonShine3 = this.GetInventory().CreateInInventory(m_WhatBottle);
			EntityAI MoonShine4 = this.GetInventory().CreateInInventory(m_WhatBottle);
			EntityAI MoonShine5 = this.GetInventory().CreateInInventory(m_WhatBottle);
			EntityAI MoonShine6 = this.GetInventory().CreateInInventory(m_WhatBottle);
			removeMash();
			GetCompEM().SwitchOff();
		}
	}

};
