class BANK_dialog
{
  idd=-1;
  movingenable=false;

  class controls{
    class DIALOG_BANK_FRAME: RscFrame
    {
    	idc = 1800;
    	text = "Bank";
    	x = 0.363281 * safezoneW + safezoneX;
    	y = 0.15 * safezoneH + safezoneY;
    	w = 0.255208 * safezoneW;
    	h = 0.7 * safezoneH;
    	colorText[] = {0.04,0.07,0.74,1};
    	colorBackground[] = {0.04,0.07,0.74,1};
    	colorBackgroundActive[] = {0.04,0.07,0.74,1};
    };
    class DIALOG_BANK_DEPOSIT_T: RscText
    {
    	idc = 1000;
    	text = "Deposit:";
    	x = 0.372396 * safezoneW + safezoneX;
    	y = 0.1675 * safezoneH + safezoneY;
    	w = 0.110417 * safezoneW;
    	h = 0.0433333 * safezoneH;
    };
    class DIALOG_BANK_DEPOSIT_A: RscEdit
    {
    	idc = 1400;
    	text = "0";
    	x = 0.372396 * safezoneW + safezoneX;
    	y = 0.2025 * safezoneH + safezoneY;
    	w = 0.236979 * safezoneW;
    	h = 0.035 * safezoneH;
    };
    class DIALOG_BANK_SUBMIT1: RscButton
    {
    	idc = 1600;
    	text = "SUBMIT";
    	x = 0.372396 * safezoneW + safezoneX;
    	y = 0.255 * safezoneH + safezoneY;
    	w = 0.236979 * safezoneW;
    	h = 0.0525 * safezoneH;
    	colorBackground[] = {1,1,1,1};
    };
    class DIALOG_BANK_WITHDRAW_T: RscText
    {
    	idc = 1001;
    	text = "Withdraw:";
    	x = 0.372396 * safezoneW + safezoneX;
    	y = 0.6925 * safezoneH + safezoneY;
    	w = 0.110417 * safezoneW;
    	h = 0.0433333 * safezoneH;
    };
    class DIALOG_BANK_WITHDRAW_A: RscEdit
    {
    	idc = 1401;
    	text = "0";
    	x = 0.372396 * safezoneW + safezoneX;
    	y = 0.7275 * safezoneH + safezoneY;
    	w = 0.236979 * safezoneW;
    	h = 0.035 * safezoneH;
    };
    class DIALOG_BANK_SUBMIT2: RscButton
    {
    	idc = 1601;
    	text = "SUBMIT";
    	x = 0.372396 * safezoneW + safezoneX;
    	y = 0.78 * safezoneH + safezoneY;
    	w = 0.236979 * safezoneW;
    	h = 0.0525 * safezoneH;
    	colorBackground[] = {1,1,1,1};
    };
    class DIALOG_BANK_FRAME2: RscFrame
    {
    	idc = 1801;
    	text = "Player Menu";
    	x = 0.372396 * safezoneW + safezoneX;
    	y = 0.325 * safezoneH + safezoneY;
    	w = 0.236979 * safezoneW;
    	h = 0.3675 * safezoneH;
    };
    class DIALOG_BANK_PMENU: RscListbox
    {
    	idc = 1500;
    	x = 0.372396 * safezoneW + safezoneX;
    	y = 0.3425 * safezoneH + safezoneY;
    	w = 0.236979 * safezoneW;
    	h = 0.35 * safezoneH;
    };
  };
};
