class NamantH_Moonshine_Base extends Bottle_Base {
	override void InitItemVariables()
	{
		super.InitItemVariables();

		can_this_be_combined 	= true;
		m_VarLiquidType 		= GetLiquidTypeInit();
	}
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionFillFuel);
		AddAction(ActionFillCoolant);
		AddAction(ActionFillGeneratorTank);
		AddAction(ActionExtinguishFireplaceByLiquid);
		AddAction(ActionFillBottleBase);
		AddAction(ActionFillBottleSnow);
		AddAction(ActionWaterGardenSlot);
		AddAction(ActionWaterPlant);
		AddAction(ActionForceDrink);
		AddAction(ActionDrainLiquid);
		AddAction(ActionPourLiquid);
		AddAction(ActionWashHandsItemContinuous);
		AddAction(ActionDrink);
		AddAction(ActionEmptyBottleBase);
	}

};