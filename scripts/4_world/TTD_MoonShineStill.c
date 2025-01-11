modded class TTD_MoonShineStill extends ItemBase
{
	private string m_WhatShine;
	private string m_WhatBottle;
	
	override void EEItemAttached( EntityAI item, string slot_name )
	{
		super.EEItemAttached( item, slot_name );
		m_WhatShine = item.GetType();
		Print(m_WhatShine);
	}


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
			EntityAI item1 = this.GetInventory().CreateInInventory(m_WhatBottle);
			EntityAI item2 = this.GetInventory().CreateInInventory(m_WhatBottle);
			EntityAI item3 = this.GetInventory().CreateInInventory(m_WhatBottle);
			EntityAI item4 = this.GetInventory().CreateInInventory(m_WhatBottle);
			EntityAI item5 = this.GetInventory().CreateInInventory(m_WhatBottle);
			EntityAI item6 = this.GetInventory().CreateInInventory(m_WhatBottle);
			removeMash();
			GetCompEM().SwitchOff();
		}
	}

};
