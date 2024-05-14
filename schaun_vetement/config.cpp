////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 9.44
//https://mikero.bytex.digital/Downloads
//'now' is Sun May 05 17:33:22 2024 : 'file' last modified on Mon Jul 10 14:56:07 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class schaun_vetement
	{
		units[] = {"schaun_tenue1_F"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Data_F"};
	};
};
class CfgGlasses
{
	class None;
	class lunetterayban: None
	{
		displayname = "Lunette Rayban";
		picture = "\schaun_vetement\ui\ui_rayban1.paa";
		model = "\schaun_vetement\lunetterayban.p3d";
		author = "schaun";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {""};
		hiddenSelectionsMaterials[] = {""};
		identityTypes[] = {"NoGlasses",0,"G_NATO_default",0,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",0,"G_NATO_SF",0,"G_NATO_sniper",0,"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",0,"G_HAF_default",0,"G_CIVIL_female",0,"G_CIVIL_male",0};
	};
};
class UniformSlotInfo;
class CfgVehicles
{
	class B_AssaultPack_Base;
	class B_Soldier_base_F;
	class tenuesweat1A1_b: B_Soldier_base_F
	{
		scope = 1;
		author = "schaun";
		model = "\schaun_vetement\tenue1.p3d";
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\rouge\jordan4.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\gnamelv.paa","\schaun_vetement\texture\tenue1\hoodie\pant1.paa"};
	};
	class tenuesweat1B1_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\rouge\jordan4black.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\gnamelv.paa","\schaun_vetement\texture\tenue1\hoodie\pant1.paa"};
	};
	class tenuesweat1C1_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\gnamelv.paa","\schaun_vetement\texture\tenue1\hoodie\pant1.paa"};
	};
	class tenuesweat1A2_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\rouge\jordan4.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\gnamelv.paa","\schaun_vetement\texture\tenue1\hoodie\pant2.paa"};
	};
	class tenuesweat1B2_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\rouge\jordan4black.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\gnamelv.paa","\schaun_vetement\texture\tenue1\hoodie\pant2.paa"};
	};
	class tenuesweat1C2_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\gnamelv.paa","\schaun_vetement\texture\tenue1\hoodie\pant2.paa"};
	};
	class tenuesweat1A3_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\rouge\jordan4.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\gnamelv.paa","\schaun_vetement\texture\tenue1\hoodie\pant3.paa"};
	};
	class tenuesweat1B3_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\rouge\jordan4black.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\gnamelv.paa","\schaun_vetement\texture\tenue1\hoodie\pant3.paa"};
	};
	class tenuesweat1C3_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\gnamelv.paa","\schaun_vetement\texture\tenue1\hoodie\pant3.paa"};
	};
	class tenuesweat2A1_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\rouge\jordan4.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\sweatRouge.paa","\schaun_vetement\texture\tenue1\hoodie\pant1.paa"};
	};
	class tenuesweat2B1_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\rouge\jordan4black.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\sweatRouge.paa","\schaun_vetement\texture\tenue1\hoodie\pant1.paa"};
	};
	class tenuesweat2C1_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\sweatRouge.paa","\schaun_vetement\texture\tenue1\hoodie\pant1.paa"};
	};
	class tenuesweat2A2_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\rouge\jordan4.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\sweatRouge.paa","\schaun_vetement\texture\tenue1\hoodie\pant2.paa"};
	};
	class tenuesweat2B2_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\rouge\jordan4black.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\sweatRouge.paa","\schaun_vetement\texture\tenue1\hoodie\pant2.paa"};
	};
	class tenuesweat2C2_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\sweatRouge.paa","\schaun_vetement\texture\tenue1\hoodie\pant2.paa"};
	};
	class tenuesweat2A3_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\rouge\jordan4.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\sweatRouge.paa","\schaun_vetement\texture\tenue1\hoodie\pant3.paa"};
	};
	class tenuesweat2B3_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\rouge\jordan4black.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\sweatRouge.paa","\schaun_vetement\texture\tenue1\hoodie\pant3.paa"};
	};
	class tenuesweat2C3_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\sweatRouge.paa","\schaun_vetement\texture\tenue1\hoodie\pant3.paa"};
	};
	class tenuesweat3A1_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\rouge\jordan4.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\uppr_diff_008_b_uniredsuprem.paa","\schaun_vetement\texture\tenue1\hoodie\pant1.paa"};
	};
	class tenuesweat3B1_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\rouge\jordan4black.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\uppr_diff_008_b_uniredsuprem.paa","\schaun_vetement\texture\tenue1\hoodie\pant1.paa"};
	};
	class tenuesweat3C1_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\uppr_diff_008_b_uniredsuprem.paa","\schaun_vetement\texture\tenue1\hoodie\pant1.paa"};
	};
	class tenuesweat3A2_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\rouge\jordan4.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\uppr_diff_008_b_uniredsuprem.paa","\schaun_vetement\texture\tenue1\hoodie\pant2.paa"};
	};
	class tenuesweat3B2_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\rouge\jordan4black.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\uppr_diff_008_b_uniredsuprem.paa","\schaun_vetement\texture\tenue1\hoodie\pant2.paa"};
	};
	class tenuesweat3C2_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\uppr_diff_008_b_uniredsuprem.paa","\schaun_vetement\texture\tenue1\hoodie\pant2.paa"};
	};
	class tenuesweat3A3_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\rouge\jordan4.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\uppr_diff_008_b_uniredsuprem.paa","\schaun_vetement\texture\tenue1\hoodie\pant3.paa"};
	};
	class tenuesweat3B3_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\rouge\jordan4black.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\uppr_diff_008_b_uniredsuprem.paa","\schaun_vetement\texture\tenue1\hoodie\pant3.paa"};
	};
	class tenuesweat3C3_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\uppr_diff_008_b_uniredsuprem.paa","\schaun_vetement\texture\tenue1\hoodie\pant3.paa"};
	};
	class tenuesweat4A1_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\rouge\jordan4.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\uppr_diff_008_c_unid.paa","\schaun_vetement\texture\tenue1\hoodie\pant1.paa"};
	};
	class tenuesweat4B1_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\rouge\jordan4black.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\uppr_diff_008_c_unid.paa","\schaun_vetement\texture\tenue1\hoodie\pant1.paa"};
	};
	class tenuesweat4C1_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\uppr_diff_008_c_unid.paa","\schaun_vetement\texture\tenue1\hoodie\pant1.paa"};
	};
	class tenuesweat4A2_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\rouge\jordan4.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\uppr_diff_008_c_unid.paa","\schaun_vetement\texture\tenue1\hoodie\pant2.paa"};
	};
	class tenuesweat4B2_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\rouge\jordan4black.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\uppr_diff_008_c_unid.paa","\schaun_vetement\texture\tenue1\hoodie\pant2.paa"};
	};
	class tenuesweat4C2_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\uppr_diff_008_c_unid.paa","\schaun_vetement\texture\tenue1\hoodie\pant2.paa"};
	};
	class tenuesweat4A3_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\rouge\jordan4.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\uppr_diff_008_c_unid.paa","\schaun_vetement\texture\tenue1\hoodie\pant3.paa"};
	};
	class tenuesweat4B3_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\rouge\jordan4black.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\uppr_diff_008_c_unid.paa","\schaun_vetement\texture\tenue1\hoodie\pant3.paa"};
	};
	class tenuesweat4C3_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\uppr_diff_008_c_unid.paa","\schaun_vetement\texture\tenue1\hoodie\pant3.paa"};
	};
	class tenuesweat5A1_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\rouge\jordan4.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\uppr_diff_008_k_unicoeur.paa","\schaun_vetement\texture\tenue1\hoodie\pant1.paa"};
	};
	class tenuesweat5B1_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\rouge\jordan4black.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\uppr_diff_008_k_unicoeur.paa","\schaun_vetement\texture\tenue1\hoodie\pant1.paa"};
	};
	class tenuesweat5C1_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\uppr_diff_008_k_unicoeur.paa","\schaun_vetement\texture\tenue1\hoodie\pant1.paa"};
	};
	class tenuesweat5A2_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\rouge\jordan4.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\uppr_diff_008_k_unicoeur.paa","\schaun_vetement\texture\tenue1\hoodie\pant2.paa"};
	};
	class tenuesweat5B2_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\rouge\jordan4black.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\uppr_diff_008_k_unicoeur.paa","\schaun_vetement\texture\tenue1\hoodie\pant2.paa"};
	};
	class tenuesweat5C2_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\uppr_diff_008_k_unicoeur.paa","\schaun_vetement\texture\tenue1\hoodie\pant2.paa"};
	};
	class tenuesweat5A3_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\rouge\jordan4.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\uppr_diff_008_k_unicoeur.paa","\schaun_vetement\texture\tenue1\hoodie\pant3.paa"};
	};
	class tenuesweat5B3_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\rouge\jordan4black.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\uppr_diff_008_k_unicoeur.paa","\schaun_vetement\texture\tenue1\hoodie\pant3.paa"};
	};
	class tenuesweat5C3_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\uppr_diff_008_k_unicoeur.paa","\schaun_vetement\texture\tenue1\hoodie\pant3.paa"};
	};
	class tenuesweat6A1_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\rouge\jordan4.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\uppr_diff_008_l_uninike.paa","\schaun_vetement\texture\tenue1\hoodie\pant1.paa"};
	};
	class tenuesweat6B1_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\rouge\jordan4black.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\uppr_diff_008_l_uninike.paa","\schaun_vetement\texture\tenue1\hoodie\pant1.paa"};
	};
	class tenuesweat6C1_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\uppr_diff_008_l_uninike.paa","\schaun_vetement\texture\tenue1\hoodie\pant1.paa"};
	};
	class tenuesweat6A2_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\rouge\jordan4.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\uppr_diff_008_l_uninike.paa","\schaun_vetement\texture\tenue1\hoodie\pant2.paa"};
	};
	class tenuesweat6B2_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\rouge\jordan4black.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\uppr_diff_008_l_uninike.paa","\schaun_vetement\texture\tenue1\hoodie\pant2.paa"};
	};
	class tenuesweat6C2_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\uppr_diff_008_l_uninike.paa","\schaun_vetement\texture\tenue1\hoodie\pant2.paa"};
	};
	class tenuesweat6A3_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\rouge\jordan4.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\uppr_diff_008_l_uninike.paa","\schaun_vetement\texture\tenue1\hoodie\pant3.paa"};
	};
	class tenuesweat6B3_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\rouge\jordan4black.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\uppr_diff_008_l_uninike.paa","\schaun_vetement\texture\tenue1\hoodie\pant3.paa"};
	};
	class tenuesweat6C3_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\uppr_diff_008_l_uninike.paa","\schaun_vetement\texture\tenue1\hoodie\pant3.paa"};
	};
	class tenuesweat7A1_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\orange\Jordan1.paa","\schaun_vetement\texture\tenue1\hoodie\orange\uppr_diff_000_a_unig.paa","\schaun_vetement\texture\tenue1\hoodie\pant1.paa"};
	};
	class tenuesweat7B1_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\orange\Jordan21.paa","\schaun_vetement\texture\tenue1\hoodie\orange\uppr_diff_000_a_unig.paa","\schaun_vetement\texture\tenue1\hoodie\pant1.paa"};
	};
	class tenuesweat7C1_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\orange\uppr_diff_000_a_unig.paa","\schaun_vetement\texture\tenue1\hoodie\pant1.paa"};
	};
	class tenuesweat7A2_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\orange\Jordan1.paa","\schaun_vetement\texture\tenue1\hoodie\orange\uppr_diff_000_a_unig.paa","\schaun_vetement\texture\tenue1\hoodie\pant2.paa"};
	};
	class tenuesweat7B2_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\orange\Jordan21.paa","\schaun_vetement\texture\tenue1\hoodie\orange\uppr_diff_000_a_unig.paa","\schaun_vetement\texture\tenue1\hoodie\pant2.paa"};
	};
	class tenuesweat7C2_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\orange\uppr_diff_000_a_unig.paa","\schaun_vetement\texture\tenue1\hoodie\pant2.paa"};
	};
	class tenuesweat7A3_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\orange\Jordan1.paa","\schaun_vetement\texture\tenue1\hoodie\orange\uppr_diff_000_a_unig.paa","\schaun_vetement\texture\tenue1\hoodie\pant3.paa"};
	};
	class tenuesweat7B3_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\orange\Jordan21.paa","\schaun_vetement\texture\tenue1\hoodie\orange\uppr_diff_000_a_unig.paa","\schaun_vetement\texture\tenue1\hoodie\pant3.paa"};
	};
	class tenuesweat7C3_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\orange\uppr_diff_000_a_unig.paa","\schaun_vetement\texture\tenue1\hoodie\pant3.paa"};
	};
	class tenuesweat8A1_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\orange\Jordan1.paa","\schaun_vetement\texture\tenue1\hoodie\orange\uppr_diff_000_a_uniOFFFWHITEEBANC.paa","\schaun_vetement\texture\tenue1\hoodie\pant1.paa"};
	};
	class tenuesweat8B1_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\orange\Jordan21.paa","\schaun_vetement\texture\tenue1\hoodie\orange\uppr_diff_000_a_uniOFFFWHITEEBANC.paa","\schaun_vetement\texture\tenue1\hoodie\pant1.paa"};
	};
	class tenuesweat8C1_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\orange\uppr_diff_000_a_uniOFFFWHITEEBANC.paa","\schaun_vetement\texture\tenue1\hoodie\pant1.paa"};
	};
	class tenuesweat8A2_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\orange\Jordan1.paa","\schaun_vetement\texture\tenue1\hoodie\orange\uppr_diff_000_a_uniOFFFWHITEEBANC.paa","\schaun_vetement\texture\tenue1\hoodie\pant2.paa"};
	};
	class tenuesweat8B2_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\orange\Jordan21.paa","\schaun_vetement\texture\tenue1\hoodie\orange\uppr_diff_000_a_uniOFFFWHITEEBANC.paa","\schaun_vetement\texture\tenue1\hoodie\pant2.paa"};
	};
	class tenuesweat8C2_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\orange\uppr_diff_000_a_uniOFFFWHITEEBANC.paa","\schaun_vetement\texture\tenue1\hoodie\pant2.paa"};
	};
	class tenuesweat8A3_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\orange\Jordan1.paa","\schaun_vetement\texture\tenue1\hoodie\orange\uppr_diff_000_a_uniOFFFWHITEEBANC.paa","\schaun_vetement\texture\tenue1\hoodie\pant3.paa"};
	};
	class tenuesweat8B3_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\orange\Jordan21.paa","\schaun_vetement\texture\tenue1\hoodie\orange\uppr_diff_000_a_uniOFFFWHITEEBANC.paa","\schaun_vetement\texture\tenue1\hoodie\pant3.paa"};
	};
	class tenuesweat8C3_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\orange\uppr_diff_000_a_uniOFFFWHITEEBANC.paa","\schaun_vetement\texture\tenue1\hoodie\pant3.paa"};
	};
	class tenuesweat9A1_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\orange\Jordan1.paa","\schaun_vetement\texture\tenue1\hoodie\orange\uppr_diff_000_a_uniOFFFWHITEENOIR.paa","\schaun_vetement\texture\tenue1\hoodie\pant1.paa"};
	};
	class tenuesweat9B1_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\orange\Jordan21.paa","\schaun_vetement\texture\tenue1\hoodie\orange\uppr_diff_000_a_uniOFFFWHITEENOIR.paa","\schaun_vetement\texture\tenue1\hoodie\pant1.paa"};
	};
	class tenuesweat9C1_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\orange\uppr_diff_000_a_uniOFFFWHITEENOIR.paa","\schaun_vetement\texture\tenue1\hoodie\pant1.paa"};
	};
	class tenuesweat9A2_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\orange\Jordan1.paa","\schaun_vetement\texture\tenue1\hoodie\orange\uppr_diff_000_a_uniOFFFWHITEENOIR.paa","\schaun_vetement\texture\tenue1\hoodie\pant2.paa"};
	};
	class tenuesweat9B2_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\orange\Jordan21.paa","\schaun_vetement\texture\tenue1\hoodie\orange\uppr_diff_000_a_uniOFFFWHITEENOIR.paa","\schaun_vetement\texture\tenue1\hoodie\pant2.paa"};
	};
	class tenuesweat9C2_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\orange\uppr_diff_000_a_uniOFFFWHITEENOIR.paa","\schaun_vetement\texture\tenue1\hoodie\pant2.paa"};
	};
	class tenuesweat9A3_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\orange\Jordan1.paa","\schaun_vetement\texture\tenue1\hoodie\orange\uppr_diff_000_a_uniOFFFWHITEENOIR.paa","\schaun_vetement\texture\tenue1\hoodie\pant3.paa"};
	};
	class tenuesweat9B3_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\orange\Jordan21.paa","\schaun_vetement\texture\tenue1\hoodie\orange\uppr_diff_000_a_uniOFFFWHITEENOIR.paa","\schaun_vetement\texture\tenue1\hoodie\pant3.paa"};
	};
	class tenuesweat9C3_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\orange\uppr_diff_000_a_uniOFFFWHITEENOIR.paa","\schaun_vetement\texture\tenue1\hoodie\pant3.paa"};
	};
	class tenuesweat10A1_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\jaune\Jordan.paa","\schaun_vetement\texture\tenue1\hoodie\jaune\enameSTONE.paa","\schaun_vetement\texture\tenue1\hoodie\pant1.paa"};
	};
	class tenuesweat10B1_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\jaune\enameSTONE.paa","\schaun_vetement\texture\tenue1\hoodie\pant1.paa"};
	};
	class tenuesweat10A2_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\jaune\Jordan.paa","\schaun_vetement\texture\tenue1\hoodie\jaune\enameSTONE.paa","\schaun_vetement\texture\tenue1\hoodie\pant2.paa"};
	};
	class tenuesweat10B2_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\jaune\enameSTONE.paa","\schaun_vetement\texture\tenue1\hoodie\pant2.paa"};
	};
	class tenuesweat10A3_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\jaune\Jordan.paa","\schaun_vetement\texture\tenue1\hoodie\jaune\enameSTONE.paa","\schaun_vetement\texture\tenue1\hoodie\pant3.paa"};
	};
	class tenuesweat10B3_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\jaune\enameSTONE.paa","\schaun_vetement\texture\tenue1\hoodie\pant3.paa"};
	};
	class tenuesweat11A1_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\jaune\Jordan.paa","\schaun_vetement\texture\tenue1\hoodie\jaune\gnametravis.paa","\schaun_vetement\texture\tenue1\hoodie\pant1.paa"};
	};
	class tenuesweat11B1_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\jaune\gnametravis.paa","\schaun_vetement\texture\tenue1\hoodie\pant1.paa"};
	};
	class tenuesweat11A2_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\jaune\Jordan.paa","\schaun_vetement\texture\tenue1\hoodie\jaune\gnametravis.paa","\schaun_vetement\texture\tenue1\hoodie\pant2.paa"};
	};
	class tenuesweat11B2_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\jaune\gnametravis.paa","\schaun_vetement\texture\tenue1\hoodie\pant2.paa"};
	};
	class tenuesweat11A3_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\jaune\Jordan.paa","\schaun_vetement\texture\tenue1\hoodie\jaune\gnametravis.paa","\schaun_vetement\texture\tenue1\hoodie\pant3.paa"};
	};
	class tenuesweat11B3_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\jaune\gnametravis.paa","\schaun_vetement\texture\tenue1\hoodie\pant3.paa"};
	};
	class tenuesweat12A1_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\vert\jordanvert.paa","\schaun_vetement\texture\tenue1\hoodie\vert\bapee.paa","\schaun_vetement\texture\tenue1\hoodie\pant1.paa"};
	};
	class tenuesweat12B1_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\vert\bapee.paa","\schaun_vetement\texture\tenue1\hoodie\pant1.paa"};
	};
	class tenuesweat12A2_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\vert\jordanvert.paa","\schaun_vetement\texture\tenue1\hoodie\vert\bapee.paa","\schaun_vetement\texture\tenue1\hoodie\pant2.paa"};
	};
	class tenuesweat12B2_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\vert\bapee.paa","\schaun_vetement\texture\tenue1\hoodie\pant2.paa"};
	};
	class tenuesweat12A3_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\vert\jordanvert.paa","\schaun_vetement\texture\tenue1\hoodie\vert\bapee.paa","\schaun_vetement\texture\tenue1\hoodie\pant3.paa"};
	};
	class tenuesweat12B3_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\vert\bapee.paa","\schaun_vetement\texture\tenue1\hoodie\pant3.paa"};
	};
	class tenuesweat13A1_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\vert\jordanvert.paa","\schaun_vetement\texture\tenue1\hoodie\vert\hname2.paa","\schaun_vetement\texture\tenue1\hoodie\pant1.paa"};
	};
	class tenuesweat13B1_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\vert\hname2.paa","\schaun_vetement\texture\tenue1\hoodie\pant1.paa"};
	};
	class tenuesweat13A2_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\vert\jordanvert.paa","\schaun_vetement\texture\tenue1\hoodie\vert\hname2.paa","\schaun_vetement\texture\tenue1\hoodie\pant2.paa"};
	};
	class tenuesweat13B2_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\vert\hname2.paa","\schaun_vetement\texture\tenue1\hoodie\pant2.paa"};
	};
	class tenuesweat13A3_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\vert\jordanvert.paa","\schaun_vetement\texture\tenue1\hoodie\vert\hname2.paa","\schaun_vetement\texture\tenue1\hoodie\pant3.paa"};
	};
	class tenuesweat13B3_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\vert\hname2.paa","\schaun_vetement\texture\tenue1\hoodie\pant3.paa"};
	};
	class tenuesweat14A1_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\bleu\Jordan2.paa","\schaun_vetement\texture\tenue1\hoodie\bleu\gnamelacoste.paa","\schaun_vetement\texture\tenue1\hoodie\pant1.paa"};
	};
	class tenuesweat14B1_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\bleu\Jordan111.paa","\schaun_vetement\texture\tenue1\hoodie\bleu\gnamelacoste.paa","\schaun_vetement\texture\tenue1\hoodie\pant1.paa"};
	};
	class tenuesweat14C1_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\bleu\gnamelacoste.paa","\schaun_vetement\texture\tenue1\hoodie\pant1.paa"};
	};
	class tenuesweat14A2_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\bleu\Jordan2.paa","\schaun_vetement\texture\tenue1\hoodie\bleu\gnamelacoste.paa","\schaun_vetement\texture\tenue1\hoodie\pant2.paa"};
	};
	class tenuesweat14B2_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\bleu\Jordan111.paa","\schaun_vetement\texture\tenue1\hoodie\bleu\gnamelacoste.paa","\schaun_vetement\texture\tenue1\hoodie\pant2.paa"};
	};
	class tenuesweat14C2_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\bleu\gnamelacoste.paa","\schaun_vetement\texture\tenue1\hoodie\pant2.paa"};
	};
	class tenuesweat14A3_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\bleu\Jordan2.paa","\schaun_vetement\texture\tenue1\hoodie\bleu\gnamelacoste.paa","\schaun_vetement\texture\tenue1\hoodie\pant3.paa"};
	};
	class tenuesweat14B3_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\bleu\Jordan111.paa","\schaun_vetement\texture\tenue1\hoodie\bleu\gnamelacoste.paa","\schaun_vetement\texture\tenue1\hoodie\pant3.paa"};
	};
	class tenuesweat14C3_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\bleu\gnamelacoste.paa","\schaun_vetement\texture\tenue1\hoodie\pant3.paa"};
	};
	class tenuesweat15A1_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\bleu\Jordan2.paa","\schaun_vetement\texture\tenue1\hoodie\bleu\uppr_diff_008_g_uniGUESS.paa","\schaun_vetement\texture\tenue1\hoodie\pant1.paa"};
	};
	class tenuesweat15B1_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\bleu\Jordan111.paa","\schaun_vetement\texture\tenue1\hoodie\bleu\uppr_diff_008_g_uniGUESS.paa","\schaun_vetement\texture\tenue1\hoodie\pant1.paa"};
	};
	class tenuesweat15C1_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\bleu\uppr_diff_008_g_uniGUESS.paa","\schaun_vetement\texture\tenue1\hoodie\pant1.paa"};
	};
	class tenuesweat15A2_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\bleu\Jordan2.paa","\schaun_vetement\texture\tenue1\hoodie\bleu\uppr_diff_008_g_uniGUESS.paa","\schaun_vetement\texture\tenue1\hoodie\pant2.paa"};
	};
	class tenuesweat15B2_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\bleu\Jordan111.paa","\schaun_vetement\texture\tenue1\hoodie\bleu\uppr_diff_008_g_uniGUESS.paa","\schaun_vetement\texture\tenue1\hoodie\pant2.paa"};
	};
	class tenuesweat15C2_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\bleu\uppr_diff_008_g_uniGUESS.paa","\schaun_vetement\texture\tenue1\hoodie\pant2.paa"};
	};
	class tenuesweat15A3_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\bleu\Jordan2.paa","\schaun_vetement\texture\tenue1\hoodie\bleu\uppr_diff_008_g_uniGUESS.paa","\schaun_vetement\texture\tenue1\hoodie\pant3.paa"};
	};
	class tenuesweat15B3_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\bleu\Jordan111.paa","\schaun_vetement\texture\tenue1\hoodie\bleu\uppr_diff_008_g_uniGUESS.paa","\schaun_vetement\texture\tenue1\hoodie\pant3.paa"};
	};
	class tenuesweat15C3_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\bleu\uppr_diff_008_g_uniGUESS.paa","\schaun_vetement\texture\tenue1\hoodie\pant3.paa"};
	};
	class tenuesweat16A1_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\BlackGris\jordanblack.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\fname.paa","\schaun_vetement\texture\tenue1\hoodie\pant1.paa"};
	};
	class tenuesweat16B1_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\fname.paa","\schaun_vetement\texture\tenue1\hoodie\pant1.paa"};
	};
	class tenuesweat16A2_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\BlackGris\jordanblack.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\fname.paa","\schaun_vetement\texture\tenue1\hoodie\pant2.paa"};
	};
	class tenuesweat16B2_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\fname.paa","\schaun_vetement\texture\tenue1\hoodie\pant2.paa"};
	};
	class tenuesweat16A3_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\BlackGris\jordanblack.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\fname.paa","\schaun_vetement\texture\tenue1\hoodie\pant3.paa"};
	};
	class tenuesweat16B3_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\fname.paa","\schaun_vetement\texture\tenue1\hoodie\pant3.paa"};
	};
	class tenuesweat17A1_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\BlackGris\jordanblack.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\gname22.paa","\schaun_vetement\texture\tenue1\hoodie\pant1.paa"};
	};
	class tenuesweat17B1_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\gname22.paa","\schaun_vetement\texture\tenue1\hoodie\pant1.paa"};
	};
	class tenuesweat17A2_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\BlackGris\jordanblack.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\gname22.paa","\schaun_vetement\texture\tenue1\hoodie\pant2.paa"};
	};
	class tenuesweat17B2_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\gname22.paa","\schaun_vetement\texture\tenue1\hoodie\pant2.paa"};
	};
	class tenuesweat17A3_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\BlackGris\jordanblack.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\gname22.paa","\schaun_vetement\texture\tenue1\hoodie\pant3.paa"};
	};
	class tenuesweat17B3_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\gname22.paa","\schaun_vetement\texture\tenue1\hoodie\pant3.paa"};
	};
	class tenuesweat18A1_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\BlackGris\jordanblack.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\gnmaoff.paa","\schaun_vetement\texture\tenue1\hoodie\pant1.paa"};
	};
	class tenuesweat18B1_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\gnmaoff.paa","\schaun_vetement\texture\tenue1\hoodie\pant1.paa"};
	};
	class tenuesweat18A2_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\BlackGris\jordanblack.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\gnmaoff.paa","\schaun_vetement\texture\tenue1\hoodie\pant2.paa"};
	};
	class tenuesweat18B2_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\gnmaoff.paa","\schaun_vetement\texture\tenue1\hoodie\pant2.paa"};
	};
	class tenuesweat18A3_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\BlackGris\jordanblack.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\gnmaoff.paa","\schaun_vetement\texture\tenue1\hoodie\pant3.paa"};
	};
	class tenuesweat18B3_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\gnmaoff.paa","\schaun_vetement\texture\tenue1\hoodie\pant3.paa"};
	};
	class tenuesweat19A1_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\BlackGris\jordanblack.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\hoodiesuprcamo.paa","\schaun_vetement\texture\tenue1\hoodie\pant1.paa"};
	};
	class tenuesweat19B1_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\hoodiesuprcamo.paa","\schaun_vetement\texture\tenue1\hoodie\pant1.paa"};
	};
	class tenuesweat19A2_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\BlackGris\jordanblack.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\hoodiesuprcamo.paa","\schaun_vetement\texture\tenue1\hoodie\pant2.paa"};
	};
	class tenuesweat19B2_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\hoodiesuprcamo.paa","\schaun_vetement\texture\tenue1\hoodie\pant2.paa"};
	};
	class tenuesweat19A3_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\BlackGris\jordanblack.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\hoodiesuprcamo.paa","\schaun_vetement\texture\tenue1\hoodie\pant3.paa"};
	};
	class tenuesweat19B3_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\hoodiesuprcamo.paa","\schaun_vetement\texture\tenue1\hoodie\pant3.paa"};
	};
	class tenuesweat20A1_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\BlackGris\jordanblack.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\uppr_diff_008_d_uniCMGsupr.paa","\schaun_vetement\texture\tenue1\hoodie\pant1.paa"};
	};
	class tenuesweat20B1_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\uppr_diff_008_d_uniCMGsupr.paa","\schaun_vetement\texture\tenue1\hoodie\pant1.paa"};
	};
	class tenuesweat20A2_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\BlackGris\jordanblack.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\uppr_diff_008_d_uniCMGsupr.paa","\schaun_vetement\texture\tenue1\hoodie\pant2.paa"};
	};
	class tenuesweat20B2_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\uppr_diff_008_d_uniCMGsupr.paa","\schaun_vetement\texture\tenue1\hoodie\pant2.paa"};
	};
	class tenuesweat20A3_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\BlackGris\jordanblack.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\uppr_diff_008_d_uniCMGsupr.paa","\schaun_vetement\texture\tenue1\hoodie\pant3.paa"};
	};
	class tenuesweat20B3_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\uppr_diff_008_d_uniCMGsupr.paa","\schaun_vetement\texture\tenue1\hoodie\pant3.paa"};
	};
	class tenuesweat21A1_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\BlackGris\jordanblack.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\uppr_diff_008_h_uniKAPPA.paa","\schaun_vetement\texture\tenue1\hoodie\pant1.paa"};
	};
	class tenuesweat21B1_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\uppr_diff_008_h_uniKAPPA.paa","\schaun_vetement\texture\tenue1\hoodie\pant1.paa"};
	};
	class tenuesweat21A2_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\BlackGris\jordanblack.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\uppr_diff_008_h_uniKAPPA.paa","\schaun_vetement\texture\tenue1\hoodie\pant2.paa"};
	};
	class tenuesweat21B2_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\uppr_diff_008_h_uniKAPPA.paa","\schaun_vetement\texture\tenue1\hoodie\pant2.paa"};
	};
	class tenuesweat21A3_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\BlackGris\jordanblack.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\uppr_diff_008_h_uniKAPPA.paa","\schaun_vetement\texture\tenue1\hoodie\pant3.paa"};
	};
	class tenuesweat21B3_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\uppr_diff_008_h_uniKAPPA.paa","\schaun_vetement\texture\tenue1\hoodie\pant3.paa"};
	};
	class tenuesweat22A1_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\BlackGris\jordanblack.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\uppr_diff_008_m_unidg.paa","\schaun_vetement\texture\tenue1\hoodie\pant1.paa"};
	};
	class tenuesweat22B1_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\uppr_diff_008_m_unidg.paa","\schaun_vetement\texture\tenue1\hoodie\pant1.paa"};
	};
	class tenuesweat22A2_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\BlackGris\jordanblack.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\uppr_diff_008_m_unidg.paa","\schaun_vetement\texture\tenue1\hoodie\pant2.paa"};
	};
	class tenuesweat22B2_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\uppr_diff_008_m_unidg.paa","\schaun_vetement\texture\tenue1\hoodie\pant2.paa"};
	};
	class tenuesweat22A3_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\BlackGris\jordanblack.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\uppr_diff_008_m_unidg.paa","\schaun_vetement\texture\tenue1\hoodie\pant3.paa"};
	};
	class tenuesweat22B3_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\uppr_diff_008_m_unidg.paa","\schaun_vetement\texture\tenue1\hoodie\pant3.paa"};
	};
	class tenuesweat23A1_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\rose\jordanrose.paa","\schaun_vetement\texture\tenue1\hoodie\rose\rose1.paa","\schaun_vetement\texture\tenue1\hoodie\pant1.paa"};
	};
	class tenuesweat23B1_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\rose\rose1.paa","\schaun_vetement\texture\tenue1\hoodie\pant1.paa"};
	};
	class tenuesweat23A2_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\rose\jordanrose.paa","\schaun_vetement\texture\tenue1\hoodie\rose\rose1.paa","\schaun_vetement\texture\tenue1\hoodie\pant2.paa"};
	};
	class tenuesweat23B2_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\rose\rose1.paa","\schaun_vetement\texture\tenue1\hoodie\pant2.paa"};
	};
	class tenuesweat23A3_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\rose\jordanrose.paa","\schaun_vetement\texture\tenue1\hoodie\rose\rose1.paa","\schaun_vetement\texture\tenue1\hoodie\pant3.paa"};
	};
	class tenuesweat23B3_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\rose\rose1.paa","\schaun_vetement\texture\tenue1\hoodie\pant3.paa"};
	};
	class tenuesweat24A1_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\rose\jordanrose.paa","\schaun_vetement\texture\tenue1\hoodie\rose\rose2.paa","\schaun_vetement\texture\tenue1\hoodie\pant1.paa"};
	};
	class tenuesweat24B1_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\rose\rose2.paa","\schaun_vetement\texture\tenue1\hoodie\pant1.paa"};
	};
	class tenuesweat24A2_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\rose\jordanrose.paa","\schaun_vetement\texture\tenue1\hoodie\rose\rose2.paa","\schaun_vetement\texture\tenue1\hoodie\pant2.paa"};
	};
	class tenuesweat24B2_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\rose\rose2.paa","\schaun_vetement\texture\tenue1\hoodie\pant2.paa"};
	};
	class tenuesweat24A3_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\rose\jordanrose.paa","\schaun_vetement\texture\tenue1\hoodie\rose\rose2.paa","\schaun_vetement\texture\tenue1\hoodie\pant3.paa"};
	};
	class tenuesweat24B3_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\rose\rose2.paa","\schaun_vetement\texture\tenue1\hoodie\pant3.paa"};
	};
	class tenuesweat25A1_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\blackgris\jordanblack.paa","\schaun_vetement\texture\tenue1\hoodie\blackgris\concessgris.paa","\schaun_vetement\texture\tenue1\hoodie\pant1.paa"};
	};
	class tenuesweat25B1_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\blackgris\concessgris.paa","\schaun_vetement\texture\tenue1\hoodie\pant1.paa"};
	};
	class tenuesweat25A2_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\blackgris\jordanblack.paa","\schaun_vetement\texture\tenue1\hoodie\blackgris\concessgris.paa","\schaun_vetement\texture\tenue1\hoodie\pant2.paa"};
	};
	class tenuesweat25B2_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\blackgris\concessgris.paa","\schaun_vetement\texture\tenue1\hoodie\pant2.paa"};
	};
	class tenuesweat25A3_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\blackgris\jordanblack.paa","\schaun_vetement\texture\tenue1\hoodie\blackgris\concessgris.paa","\schaun_vetement\texture\tenue1\hoodie\pant3.paa"};
	};
	class tenuesweat25B3_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\blackgris\concessgris.paa","\schaun_vetement\texture\tenue1\hoodie\pant3.paa"};
	};
	class tenuesweat26A1_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\blackgris\jordanblack.paa","\schaun_vetement\texture\tenue1\hoodie\blackgris\concessnoir.paa","\schaun_vetement\texture\tenue1\hoodie\pant1.paa"};
	};
	class tenuesweat26B1_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\blackgris\concessnoir.paa","\schaun_vetement\texture\tenue1\hoodie\pant1.paa"};
	};
	class tenuesweat26A2_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\blackgris\jordanblack.paa","\schaun_vetement\texture\tenue1\hoodie\blackgris\concessnoir.paa","\schaun_vetement\texture\tenue1\hoodie\pant2.paa"};
	};
	class tenuesweat26B2_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\blackgris\concessnoir.paa","\schaun_vetement\texture\tenue1\hoodie\pant2.paa"};
	};
	class tenuesweat26A3_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\blackgris\jordanblack.paa","\schaun_vetement\texture\tenue1\hoodie\blackgris\concessnoir.paa","\schaun_vetement\texture\tenue1\hoodie\pant3.paa"};
	};
	class tenuesweat26B3_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\blackgris\concessnoir.paa","\schaun_vetement\texture\tenue1\hoodie\pant3.paa"};
	};
	class tenuesweat27A1_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\blackgris\jordanblack.paa","\schaun_vetement\texture\tenue1\hoodie\blackgris\coolermaster.paa","\schaun_vetement\texture\tenue1\hoodie\pant1.paa"};
	};
	class tenuesweat27B1_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\blackgris\coolermaster.paa","\schaun_vetement\texture\tenue1\hoodie\pant1.paa"};
	};
	class tenuesweat27A2_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\blackgris\jordanblack.paa","\schaun_vetement\texture\tenue1\hoodie\blackgris\coolermaster.paa","\schaun_vetement\texture\tenue1\hoodie\pant2.paa"};
	};
	class tenuesweat27B2_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\blackgris\coolermaster.paa","\schaun_vetement\texture\tenue1\hoodie\pant2.paa"};
	};
	class tenuesweat27A3_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\blackgris\jordanblack.paa","\schaun_vetement\texture\tenue1\hoodie\blackgris\coolermaster.paa","\schaun_vetement\texture\tenue1\hoodie\pant3.paa"};
	};
	class tenuesweat27B3_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\blackgris\coolermaster.paa","\schaun_vetement\texture\tenue1\hoodie\pant3.paa"};
	};
	class tenuesweat28A1_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\orange\Jordan1.paa","\schaun_vetement\texture\tenue1\hoodie\orange\instanggaming.paa","\schaun_vetement\texture\tenue1\hoodie\pant1.paa"};
	};
	class tenuesweat28B1_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\orange\Jordan21.paa","\schaun_vetement\texture\tenue1\hoodie\orange\instanggaming.paa","\schaun_vetement\texture\tenue1\hoodie\pant1.paa"};
	};
	class tenuesweat28C1_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\orange\instanggaming.paa","\schaun_vetement\texture\tenue1\hoodie\pant1.paa"};
	};
	class tenuesweat28A2_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\orange\Jordan1.paa","\schaun_vetement\texture\tenue1\hoodie\orange\instanggaming.paa","\schaun_vetement\texture\tenue1\hoodie\pant2.paa"};
	};
	class tenuesweat28B2_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\orange\Jordan21.paa","\schaun_vetement\texture\tenue1\hoodie\orange\instanggaming.paa","\schaun_vetement\texture\tenue1\hoodie\pant2.paa"};
	};
	class tenuesweat28C2_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\orange\instanggaming.paa","\schaun_vetement\texture\tenue1\hoodie\pant2.paa"};
	};
	class tenuesweat28A3_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\orange\Jordan1.paa","\schaun_vetement\texture\tenue1\hoodie\orange\instanggaming.paa","\schaun_vetement\texture\tenue1\hoodie\pant3.paa"};
	};
	class tenuesweat28B3_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\orange\Jordan21.paa","\schaun_vetement\texture\tenue1\hoodie\orange\instanggaming.paa","\schaun_vetement\texture\tenue1\hoodie\pant3.paa"};
	};
	class tenuesweat28C3_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\orange\instanggaming.paa","\schaun_vetement\texture\tenue1\hoodie\pant3.paa"};
	};
	class tenuesweat29A1_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\BlackGris\jordanblack.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\sub1.paa","\schaun_vetement\texture\tenue1\hoodie\pant1.paa"};
	};
	class tenuesweat29A2_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\BlackGris\jordanblack.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\sub1.paa","\schaun_vetement\texture\tenue1\hoodie\pant2.paa"};
	};
	class tenuesweat29A3_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\BlackGris\jordanblack.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\sub1.paa","\schaun_vetement\texture\tenue1\hoodie\pant3.paa"};
	};
	class tenuesweat30A1_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\BlackGris\jordanblack.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\sub2.paa","\schaun_vetement\texture\tenue1\hoodie\pant1.paa"};
	};
	class tenuesweat30A2_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\BlackGris\jordanblack.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\sub2.paa","\schaun_vetement\texture\tenue1\hoodie\pant2.paa"};
	};
	class tenuesweat30A3_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\BlackGris\jordanblack.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\sub2.paa","\schaun_vetement\texture\tenue1\hoodie\pant3.paa"};
	};
	class tenuesweatGOLD_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\dior\sweatgold.paa","\schaun_vetement\texture\tenue1\hoodie\pantblanc.paa"};
		hiddenSelectionsMaterials[] = {"\schaun_vetement\texture\tenue1\shoes.rvmat","\schaun_vetement\texture\tenue1\hoodie\dior\sweatgold.rvmat","\schaun_vetement\texture\tenue1\jean.rvmat"};
	};
	class tenuesweat31A1_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\rouge\jordan4black.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\merguez1000tipla.paa","\schaun_vetement\texture\tenue1\hoodie\pant1.paa"};
	};
	class tenuesweat32A1_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\BlackGris\jordanblack.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\corteiznoir.paa","\schaun_vetement\texture\tenue1\hoodie\pant1.paa"};
	};
	class tenuesweat32B1_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\corteiznoir.paa","\schaun_vetement\texture\tenue1\hoodie\pant1.paa"};
	};
	class tenuesweat32A2_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\BlackGris\jordanblack.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\corteiznoir.paa","\schaun_vetement\texture\tenue1\hoodie\pant2.paa"};
	};
	class tenuesweat32B2_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\corteiznoir.paa","\schaun_vetement\texture\tenue1\hoodie\pant2.paa"};
	};
	class tenuesweat32A3_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\BlackGris\jordanblack.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\corteiznoir.paa","\schaun_vetement\texture\tenue1\hoodie\pant3.paa"};
	};
	class tenuesweat32B3_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\corteiznoir.paa","\schaun_vetement\texture\tenue1\hoodie\pant3.paa"};
	};
	class tenuesweat33A1_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\BlackGris\jordanblack.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\corteizgris.paa","\schaun_vetement\texture\tenue1\hoodie\pant1.paa"};
	};
	class tenuesweat33B1_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\corteizgris.paa","\schaun_vetement\texture\tenue1\hoodie\pant1.paa"};
	};
	class tenuesweat33A2_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\BlackGris\jordanblack.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\corteizgris.paa","\schaun_vetement\texture\tenue1\hoodie\pant2.paa"};
	};
	class tenuesweat33B2_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\corteizgris.paa","\schaun_vetement\texture\tenue1\hoodie\pant2.paa"};
	};
	class tenuesweat33A3_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\BlackGris\jordanblack.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\corteizgris.paa","\schaun_vetement\texture\tenue1\hoodie\pant3.paa"};
	};
	class tenuesweat33B3_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\corteizgris.paa","\schaun_vetement\texture\tenue1\hoodie\pant3.paa"};
	};
	class tenuesweat34A1_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\BlackGris\jordanblack.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\supremeburberry.paa","\schaun_vetement\texture\tenue1\hoodie\pant1.paa"};
	};
	class tenuesweat34B1_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\supremeburberry.paa","\schaun_vetement\texture\tenue1\hoodie\pant1.paa"};
	};
	class tenuesweat34A2_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\BlackGris\jordanblack.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\supremeburberry.paa","\schaun_vetement\texture\tenue1\hoodie\pant2.paa"};
	};
	class tenuesweat34B2_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\supremeburberry.paa","\schaun_vetement\texture\tenue1\hoodie\pant2.paa"};
	};
	class tenuesweat34A3_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\BlackGris\jordanblack.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\supremeburberry.paa","\schaun_vetement\texture\tenue1\hoodie\pant3.paa"};
	};
	class tenuesweat34B3_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\supremeburberry.paa","\schaun_vetement\texture\tenue1\hoodie\pant3.paa"};
	};
	class tenuesweat35A1_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\BlackGris\jordanblack.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\stussynoir.paa","\schaun_vetement\texture\tenue1\hoodie\pant1.paa"};
	};
	class tenuesweat35B1_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\stussynoir.paa","\schaun_vetement\texture\tenue1\hoodie\pant1.paa"};
	};
	class tenuesweat35A2_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\BlackGris\jordanblack.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\stussynoir.paa","\schaun_vetement\texture\tenue1\hoodie\pant2.paa"};
	};
	class tenuesweat35B2_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\stussynoir.paa","\schaun_vetement\texture\tenue1\hoodie\pant2.paa"};
	};
	class tenuesweat35A3_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\BlackGris\jordanblack.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\stussynoir.paa","\schaun_vetement\texture\tenue1\hoodie\pant3.paa"};
	};
	class tenuesweat35B3_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\stussynoir.paa","\schaun_vetement\texture\tenue1\hoodie\pant3.paa"};
	};
	class tenuesweat36A1_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\BlackGris\jordanblack.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\stussyblanc.paa","\schaun_vetement\texture\tenue1\hoodie\pant1.paa"};
	};
	class tenuesweat36B1_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\stussyblanc.paa","\schaun_vetement\texture\tenue1\hoodie\pant1.paa"};
	};
	class tenuesweat36A2_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\BlackGris\jordanblack.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\stussyblanc.paa","\schaun_vetement\texture\tenue1\hoodie\pant2.paa"};
	};
	class tenuesweat36B2_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\stussyblanc.paa","\schaun_vetement\texture\tenue1\hoodie\pant2.paa"};
	};
	class tenuesweat36A3_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\BlackGris\jordanblack.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\stussyblanc.paa","\schaun_vetement\texture\tenue1\hoodie\pant3.paa"};
	};
	class tenuesweat36B3_b: tenuesweat1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\stussyblanc.paa","\schaun_vetement\texture\tenue1\hoodie\pant3.paa"};
	};
	class tenuesweatcargo1A1_b: B_Soldier_base_F
	{
		scope = 1;
		author = "schaun";
		model = "\schaun_vetement\tenue1cargo.p3d";
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\rouge\jordan4.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\gnamelv.paa","\schaun_vetement\texture\tenue1\hoodie\cargo1.paa"};
	};
	class tenuesweatcargo1B1_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\rouge\jordan4black.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\gnamelv.paa","\schaun_vetement\texture\tenue1\hoodie\cargo1.paa"};
	};
	class tenuesweatcargo1C1_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\gnamelv.paa","\schaun_vetement\texture\tenue1\hoodie\cargo1.paa"};
	};
	class tenuesweatcargo1A2_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\rouge\jordan4.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\gnamelv.paa","\schaun_vetement\texture\tenue1\hoodie\cargo2.paa"};
	};
	class tenuesweatcargo1B2_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\rouge\jordan4black.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\gnamelv.paa","\schaun_vetement\texture\tenue1\hoodie\cargo2.paa"};
	};
	class tenuesweatcargo1C2_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\gnamelv.paa","\schaun_vetement\texture\tenue1\hoodie\cargo2.paa"};
	};
	class tenuesweatcargo1A3_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\rouge\jordan4.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\gnamelv.paa","\schaun_vetement\texture\tenue1\hoodie\cargo3.paa"};
	};
	class tenuesweatcargo1B3_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\rouge\jordan4black.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\gnamelv.paa","\schaun_vetement\texture\tenue1\hoodie\cargo3.paa"};
	};
	class tenuesweatcargo1C3_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\gnamelv.paa","\schaun_vetement\texture\tenue1\hoodie\cargo3.paa"};
	};
	class tenuesweatcargo2A1_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\rouge\jordan4.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\sweatRouge.paa","\schaun_vetement\texture\tenue1\hoodie\cargo1.paa"};
	};
	class tenuesweatcargo2B1_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\rouge\jordan4black.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\sweatRouge.paa","\schaun_vetement\texture\tenue1\hoodie\cargo1.paa"};
	};
	class tenuesweatcargo2C1_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\sweatRouge.paa","\schaun_vetement\texture\tenue1\hoodie\cargo1.paa"};
	};
	class tenuesweatcargo2A2_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\rouge\jordan4.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\sweatRouge.paa","\schaun_vetement\texture\tenue1\hoodie\cargo2.paa"};
	};
	class tenuesweatcargo2B2_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\rouge\jordan4black.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\sweatRouge.paa","\schaun_vetement\texture\tenue1\hoodie\cargo2.paa"};
	};
	class tenuesweatcargo2C2_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\sweatRouge.paa","\schaun_vetement\texture\tenue1\hoodie\cargo2.paa"};
	};
	class tenuesweatcargo2A3_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\rouge\jordan4.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\sweatRouge.paa","\schaun_vetement\texture\tenue1\hoodie\cargo3.paa"};
	};
	class tenuesweatcargo2B3_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\rouge\jordan4black.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\sweatRouge.paa","\schaun_vetement\texture\tenue1\hoodie\cargo3.paa"};
	};
	class tenuesweatcargo2C3_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\sweatRouge.paa","\schaun_vetement\texture\tenue1\hoodie\cargo3.paa"};
	};
	class tenuesweatcargo3A1_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\rouge\jordan4.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\uppr_diff_008_b_uniredsuprem.paa","\schaun_vetement\texture\tenue1\hoodie\cargo1.paa"};
	};
	class tenuesweatcargo3B1_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\rouge\jordan4black.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\uppr_diff_008_b_uniredsuprem.paa","\schaun_vetement\texture\tenue1\hoodie\cargo1.paa"};
	};
	class tenuesweatcargo3C1_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\uppr_diff_008_b_uniredsuprem.paa","\schaun_vetement\texture\tenue1\hoodie\cargo1.paa"};
	};
	class tenuesweatcargo3A2_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\rouge\jordan4.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\uppr_diff_008_b_uniredsuprem.paa","\schaun_vetement\texture\tenue1\hoodie\cargo2.paa"};
	};
	class tenuesweatcargo3B2_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\rouge\jordan4black.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\uppr_diff_008_b_uniredsuprem.paa","\schaun_vetement\texture\tenue1\hoodie\cargo2.paa"};
	};
	class tenuesweatcargo3C2_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\uppr_diff_008_b_uniredsuprem.paa","\schaun_vetement\texture\tenue1\hoodie\cargo2.paa"};
	};
	class tenuesweatcargo3A3_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\rouge\jordan4.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\uppr_diff_008_b_uniredsuprem.paa","\schaun_vetement\texture\tenue1\hoodie\cargo3.paa"};
	};
	class tenuesweatcargo3B3_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\rouge\jordan4black.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\uppr_diff_008_b_uniredsuprem.paa","\schaun_vetement\texture\tenue1\hoodie\cargo3.paa"};
	};
	class tenuesweatcargo3C3_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\uppr_diff_008_b_uniredsuprem.paa","\schaun_vetement\texture\tenue1\hoodie\cargo3.paa"};
	};
	class tenuesweatcargo4A1_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\rouge\jordan4.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\uppr_diff_008_c_unid.paa","\schaun_vetement\texture\tenue1\hoodie\cargo1.paa"};
	};
	class tenuesweatcargo4B1_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\rouge\jordan4black.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\uppr_diff_008_c_unid.paa","\schaun_vetement\texture\tenue1\hoodie\cargo1.paa"};
	};
	class tenuesweatcargo4C1_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\uppr_diff_008_c_unid.paa","\schaun_vetement\texture\tenue1\hoodie\cargo1.paa"};
	};
	class tenuesweatcargo4A2_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\rouge\jordan4.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\uppr_diff_008_c_unid.paa","\schaun_vetement\texture\tenue1\hoodie\cargo2.paa"};
	};
	class tenuesweatcargo4B2_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\rouge\jordan4black.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\uppr_diff_008_c_unid.paa","\schaun_vetement\texture\tenue1\hoodie\cargo2.paa"};
	};
	class tenuesweatcargo4C2_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\uppr_diff_008_c_unid.paa","\schaun_vetement\texture\tenue1\hoodie\cargo2.paa"};
	};
	class tenuesweatcargo4A3_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\rouge\jordan4.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\uppr_diff_008_c_unid.paa","\schaun_vetement\texture\tenue1\hoodie\cargo3.paa"};
	};
	class tenuesweatcargo4B3_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\rouge\jordan4black.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\uppr_diff_008_c_unid.paa","\schaun_vetement\texture\tenue1\hoodie\cargo3.paa"};
	};
	class tenuesweatcargo4C3_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\uppr_diff_008_c_unid.paa","\schaun_vetement\texture\tenue1\hoodie\cargo3.paa"};
	};
	class tenuesweatcargo5A1_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\rouge\jordan4.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\uppr_diff_008_k_unicoeur.paa","\schaun_vetement\texture\tenue1\hoodie\cargo1.paa"};
	};
	class tenuesweatcargo5B1_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\rouge\jordan4black.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\uppr_diff_008_k_unicoeur.paa","\schaun_vetement\texture\tenue1\hoodie\cargo1.paa"};
	};
	class tenuesweatcargo5C1_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\uppr_diff_008_k_unicoeur.paa","\schaun_vetement\texture\tenue1\hoodie\cargo1.paa"};
	};
	class tenuesweatcargo5A2_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\rouge\jordan4.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\uppr_diff_008_k_unicoeur.paa","\schaun_vetement\texture\tenue1\hoodie\cargo2.paa"};
	};
	class tenuesweatcargo5B2_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\rouge\jordan4black.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\uppr_diff_008_k_unicoeur.paa","\schaun_vetement\texture\tenue1\hoodie\cargo2.paa"};
	};
	class tenuesweatcargo5C2_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\uppr_diff_008_k_unicoeur.paa","\schaun_vetement\texture\tenue1\hoodie\cargo2.paa"};
	};
	class tenuesweatcargo5A3_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\rouge\jordan4.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\uppr_diff_008_k_unicoeur.paa","\schaun_vetement\texture\tenue1\hoodie\cargo3.paa"};
	};
	class tenuesweatcargo5B3_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\rouge\jordan4black.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\uppr_diff_008_k_unicoeur.paa","\schaun_vetement\texture\tenue1\hoodie\cargo3.paa"};
	};
	class tenuesweatcargo5C3_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\uppr_diff_008_k_unicoeur.paa","\schaun_vetement\texture\tenue1\hoodie\cargo3.paa"};
	};
	class tenuesweatcargo6A1_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\rouge\jordan4.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\uppr_diff_008_l_uninike.paa","\schaun_vetement\texture\tenue1\hoodie\cargo1.paa"};
	};
	class tenuesweatcargo6B1_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\rouge\jordan4black.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\uppr_diff_008_l_uninike.paa","\schaun_vetement\texture\tenue1\hoodie\cargo1.paa"};
	};
	class tenuesweatcargo6C1_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\uppr_diff_008_l_uninike.paa","\schaun_vetement\texture\tenue1\hoodie\cargo1.paa"};
	};
	class tenuesweatcargo6A2_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\rouge\jordan4.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\uppr_diff_008_l_uninike.paa","\schaun_vetement\texture\tenue1\hoodie\cargo2.paa"};
	};
	class tenuesweatcargo6B2_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\rouge\jordan4black.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\uppr_diff_008_l_uninike.paa","\schaun_vetement\texture\tenue1\hoodie\cargo2.paa"};
	};
	class tenuesweatcargo6C2_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\uppr_diff_008_l_uninike.paa","\schaun_vetement\texture\tenue1\hoodie\cargo2.paa"};
	};
	class tenuesweatcargo6A3_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\rouge\jordan4.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\uppr_diff_008_l_uninike.paa","\schaun_vetement\texture\tenue1\hoodie\cargo3.paa"};
	};
	class tenuesweatcargo6B3_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\rouge\jordan4black.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\uppr_diff_008_l_uninike.paa","\schaun_vetement\texture\tenue1\hoodie\cargo3.paa"};
	};
	class tenuesweatcargo6C3_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\uppr_diff_008_l_uninike.paa","\schaun_vetement\texture\tenue1\hoodie\cargo3.paa"};
	};
	class tenuesweatcargo7A1_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\orange\Jordan1.paa","\schaun_vetement\texture\tenue1\hoodie\orange\uppr_diff_000_a_unig.paa","\schaun_vetement\texture\tenue1\hoodie\cargo1.paa"};
	};
	class tenuesweatcargo7B1_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\orange\Jordan21.paa","\schaun_vetement\texture\tenue1\hoodie\orange\uppr_diff_000_a_unig.paa","\schaun_vetement\texture\tenue1\hoodie\cargo1.paa"};
	};
	class tenuesweatcargo7C1_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\orange\uppr_diff_000_a_unig.paa","\schaun_vetement\texture\tenue1\hoodie\cargo1.paa"};
	};
	class tenuesweatcargo7A2_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\orange\Jordan1.paa","\schaun_vetement\texture\tenue1\hoodie\orange\uppr_diff_000_a_unig.paa","\schaun_vetement\texture\tenue1\hoodie\cargo2.paa"};
	};
	class tenuesweatcargo7B2_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\orange\Jordan21.paa","\schaun_vetement\texture\tenue1\hoodie\orange\uppr_diff_000_a_unig.paa","\schaun_vetement\texture\tenue1\hoodie\cargo2.paa"};
	};
	class tenuesweatcargo7C2_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\orange\uppr_diff_000_a_unig.paa","\schaun_vetement\texture\tenue1\hoodie\cargo2.paa"};
	};
	class tenuesweatcargo7A3_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\orange\Jordan1.paa","\schaun_vetement\texture\tenue1\hoodie\orange\uppr_diff_000_a_unig.paa","\schaun_vetement\texture\tenue1\hoodie\cargo3.paa"};
	};
	class tenuesweatcargo7B3_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\orange\Jordan21.paa","\schaun_vetement\texture\tenue1\hoodie\orange\uppr_diff_000_a_unig.paa","\schaun_vetement\texture\tenue1\hoodie\cargo3.paa"};
	};
	class tenuesweatcargo7C3_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\orange\uppr_diff_000_a_unig.paa","\schaun_vetement\texture\tenue1\hoodie\cargo3.paa"};
	};
	class tenuesweatcargo8A1_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\orange\Jordan1.paa","\schaun_vetement\texture\tenue1\hoodie\orange\uppr_diff_000_a_uniOFFFWHITEEBANC.paa","\schaun_vetement\texture\tenue1\hoodie\cargo1.paa"};
	};
	class tenuesweatcargo8B1_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\orange\Jordan21.paa","\schaun_vetement\texture\tenue1\hoodie\orange\uppr_diff_000_a_uniOFFFWHITEEBANC.paa","\schaun_vetement\texture\tenue1\hoodie\cargo1.paa"};
	};
	class tenuesweatcargo8C1_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\orange\uppr_diff_000_a_uniOFFFWHITEEBANC.paa","\schaun_vetement\texture\tenue1\hoodie\cargo1.paa"};
	};
	class tenuesweatcargo8A2_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\orange\Jordan1.paa","\schaun_vetement\texture\tenue1\hoodie\orange\uppr_diff_000_a_uniOFFFWHITEEBANC.paa","\schaun_vetement\texture\tenue1\hoodie\cargo2.paa"};
	};
	class tenuesweatcargo8B2_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\orange\Jordan21.paa","\schaun_vetement\texture\tenue1\hoodie\orange\uppr_diff_000_a_uniOFFFWHITEEBANC.paa","\schaun_vetement\texture\tenue1\hoodie\cargo2.paa"};
	};
	class tenuesweatcargo8C2_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\orange\uppr_diff_000_a_uniOFFFWHITEEBANC.paa","\schaun_vetement\texture\tenue1\hoodie\cargo2.paa"};
	};
	class tenuesweatcargo8A3_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\orange\Jordan1.paa","\schaun_vetement\texture\tenue1\hoodie\orange\uppr_diff_000_a_uniOFFFWHITEEBANC.paa","\schaun_vetement\texture\tenue1\hoodie\cargo3.paa"};
	};
	class tenuesweatcargo8B3_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\orange\Jordan21.paa","\schaun_vetement\texture\tenue1\hoodie\orange\uppr_diff_000_a_uniOFFFWHITEEBANC.paa","\schaun_vetement\texture\tenue1\hoodie\cargo3.paa"};
	};
	class tenuesweatcargo8C3_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\orange\uppr_diff_000_a_uniOFFFWHITEEBANC.paa","\schaun_vetement\texture\tenue1\hoodie\cargo3.paa"};
	};
	class tenuesweatcargo9A1_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\orange\Jordan1.paa","\schaun_vetement\texture\tenue1\hoodie\orange\uppr_diff_000_a_uniOFFFWHITEENOIR.paa","\schaun_vetement\texture\tenue1\hoodie\cargo1.paa"};
	};
	class tenuesweatcargo9B1_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\orange\Jordan21.paa","\schaun_vetement\texture\tenue1\hoodie\orange\uppr_diff_000_a_uniOFFFWHITEENOIR.paa","\schaun_vetement\texture\tenue1\hoodie\cargo1.paa"};
	};
	class tenuesweatcargo9C1_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\orange\uppr_diff_000_a_uniOFFFWHITEENOIR.paa","\schaun_vetement\texture\tenue1\hoodie\cargo1.paa"};
	};
	class tenuesweatcargo9A2_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\orange\Jordan1.paa","\schaun_vetement\texture\tenue1\hoodie\orange\uppr_diff_000_a_uniOFFFWHITEENOIR.paa","\schaun_vetement\texture\tenue1\hoodie\cargo2.paa"};
	};
	class tenuesweatcargo9B2_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\orange\Jordan21.paa","\schaun_vetement\texture\tenue1\hoodie\orange\uppr_diff_000_a_uniOFFFWHITEENOIR.paa","\schaun_vetement\texture\tenue1\hoodie\cargo2.paa"};
	};
	class tenuesweatcargo9C2_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\orange\uppr_diff_000_a_uniOFFFWHITEENOIR.paa","\schaun_vetement\texture\tenue1\hoodie\cargo2.paa"};
	};
	class tenuesweatcargo9A3_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\orange\Jordan1.paa","\schaun_vetement\texture\tenue1\hoodie\orange\uppr_diff_000_a_uniOFFFWHITEENOIR.paa","\schaun_vetement\texture\tenue1\hoodie\cargo3.paa"};
	};
	class tenuesweatcargo9B3_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\orange\Jordan21.paa","\schaun_vetement\texture\tenue1\hoodie\orange\uppr_diff_000_a_uniOFFFWHITEENOIR.paa","\schaun_vetement\texture\tenue1\hoodie\cargo3.paa"};
	};
	class tenuesweatcargo9C3_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\orange\uppr_diff_000_a_uniOFFFWHITEENOIR.paa","\schaun_vetement\texture\tenue1\hoodie\cargo3.paa"};
	};
	class tenuesweatcargo10A1_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\jaune\Jordan.paa","\schaun_vetement\texture\tenue1\hoodie\jaune\enameSTONE.paa","\schaun_vetement\texture\tenue1\hoodie\cargo1.paa"};
	};
	class tenuesweatcargo10B1_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\jaune\enameSTONE.paa","\schaun_vetement\texture\tenue1\hoodie\cargo1.paa"};
	};
	class tenuesweatcargo10A2_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\jaune\Jordan.paa","\schaun_vetement\texture\tenue1\hoodie\jaune\enameSTONE.paa","\schaun_vetement\texture\tenue1\hoodie\cargo2.paa"};
	};
	class tenuesweatcargo10B2_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\jaune\enameSTONE.paa","\schaun_vetement\texture\tenue1\hoodie\cargo2.paa"};
	};
	class tenuesweatcargo10A3_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\jaune\Jordan.paa","\schaun_vetement\texture\tenue1\hoodie\jaune\enameSTONE.paa","\schaun_vetement\texture\tenue1\hoodie\cargo3.paa"};
	};
	class tenuesweatcargo10B3_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\jaune\enameSTONE.paa","\schaun_vetement\texture\tenue1\hoodie\cargo3.paa"};
	};
	class tenuesweatcargo11A1_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\jaune\Jordan.paa","\schaun_vetement\texture\tenue1\hoodie\jaune\gnametravis.paa","\schaun_vetement\texture\tenue1\hoodie\cargo1.paa"};
	};
	class tenuesweatcargo11B1_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\jaune\gnametravis.paa","\schaun_vetement\texture\tenue1\hoodie\cargo1.paa"};
	};
	class tenuesweatcargo11A2_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\jaune\Jordan.paa","\schaun_vetement\texture\tenue1\hoodie\jaune\gnametravis.paa","\schaun_vetement\texture\tenue1\hoodie\cargo2.paa"};
	};
	class tenuesweatcargo11B2_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\jaune\gnametravis.paa","\schaun_vetement\texture\tenue1\hoodie\cargo2.paa"};
	};
	class tenuesweatcargo11A3_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\jaune\Jordan.paa","\schaun_vetement\texture\tenue1\hoodie\jaune\gnametravis.paa","\schaun_vetement\texture\tenue1\hoodie\cargo3.paa"};
	};
	class tenuesweatcargo11B3_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\jaune\gnametravis.paa","\schaun_vetement\texture\tenue1\hoodie\cargo3.paa"};
	};
	class tenuesweatcargo12A1_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\vert\jordanvert.paa","\schaun_vetement\texture\tenue1\hoodie\vert\bapee.paa","\schaun_vetement\texture\tenue1\hoodie\cargo1.paa"};
	};
	class tenuesweatcargo12B1_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\vert\bapee.paa","\schaun_vetement\texture\tenue1\hoodie\cargo1.paa"};
	};
	class tenuesweatcargo12A2_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\vert\jordanvert.paa","\schaun_vetement\texture\tenue1\hoodie\vert\bapee.paa","\schaun_vetement\texture\tenue1\hoodie\cargo2.paa"};
	};
	class tenuesweatcargo12B2_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\vert\bapee.paa","\schaun_vetement\texture\tenue1\hoodie\cargo2.paa"};
	};
	class tenuesweatcargo12A3_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\vert\jordanvert.paa","\schaun_vetement\texture\tenue1\hoodie\vert\bapee.paa","\schaun_vetement\texture\tenue1\hoodie\cargo3.paa"};
	};
	class tenuesweatcargo12B3_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\vert\bapee.paa","\schaun_vetement\texture\tenue1\hoodie\cargo3.paa"};
	};
	class tenuesweatcargo13A1_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\vert\jordanvert.paa","\schaun_vetement\texture\tenue1\hoodie\vert\hname2.paa","\schaun_vetement\texture\tenue1\hoodie\cargo1.paa"};
	};
	class tenuesweatcargo13B1_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\vert\hname2.paa","\schaun_vetement\texture\tenue1\hoodie\cargo1.paa"};
	};
	class tenuesweatcargo13A2_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\vert\jordanvert.paa","\schaun_vetement\texture\tenue1\hoodie\vert\hname2.paa","\schaun_vetement\texture\tenue1\hoodie\cargo2.paa"};
	};
	class tenuesweatcargo13B2_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\vert\hname2.paa","\schaun_vetement\texture\tenue1\hoodie\cargo2.paa"};
	};
	class tenuesweatcargo13A3_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\vert\jordanvert.paa","\schaun_vetement\texture\tenue1\hoodie\vert\hname2.paa","\schaun_vetement\texture\tenue1\hoodie\cargo3.paa"};
	};
	class tenuesweatcargo13B3_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\vert\hname2.paa","\schaun_vetement\texture\tenue1\hoodie\cargo3.paa"};
	};
	class tenuesweatcargo14A1_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\bleu\Jordan2.paa","\schaun_vetement\texture\tenue1\hoodie\bleu\gnamelacoste.paa","\schaun_vetement\texture\tenue1\hoodie\cargo1.paa"};
	};
	class tenuesweatcargo14B1_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\bleu\Jordan111.paa","\schaun_vetement\texture\tenue1\hoodie\bleu\gnamelacoste.paa","\schaun_vetement\texture\tenue1\hoodie\cargo1.paa"};
	};
	class tenuesweatcargo14C1_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\bleu\gnamelacoste.paa","\schaun_vetement\texture\tenue1\hoodie\cargo1.paa"};
	};
	class tenuesweatcargo14A2_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\bleu\Jordan2.paa","\schaun_vetement\texture\tenue1\hoodie\bleu\gnamelacoste.paa","\schaun_vetement\texture\tenue1\hoodie\cargo2.paa"};
	};
	class tenuesweatcargo14B2_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\bleu\Jordan111.paa","\schaun_vetement\texture\tenue1\hoodie\bleu\gnamelacoste.paa","\schaun_vetement\texture\tenue1\hoodie\cargo2.paa"};
	};
	class tenuesweatcargo14C2_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\bleu\gnamelacoste.paa","\schaun_vetement\texture\tenue1\hoodie\cargo2.paa"};
	};
	class tenuesweatcargo14A3_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\bleu\Jordan2.paa","\schaun_vetement\texture\tenue1\hoodie\bleu\gnamelacoste.paa","\schaun_vetement\texture\tenue1\hoodie\cargo3.paa"};
	};
	class tenuesweatcargo14B3_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\bleu\Jordan111.paa","\schaun_vetement\texture\tenue1\hoodie\bleu\gnamelacoste.paa","\schaun_vetement\texture\tenue1\hoodie\cargo3.paa"};
	};
	class tenuesweatcargo14C3_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\bleu\gnamelacoste.paa","\schaun_vetement\texture\tenue1\hoodie\cargo3.paa"};
	};
	class tenuesweatcargo15A1_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\bleu\Jordan2.paa","\schaun_vetement\texture\tenue1\hoodie\bleu\uppr_diff_008_g_uniGUESS.paa","\schaun_vetement\texture\tenue1\hoodie\cargo1.paa"};
	};
	class tenuesweatcargo15B1_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\bleu\Jordan111.paa","\schaun_vetement\texture\tenue1\hoodie\bleu\uppr_diff_008_g_uniGUESS.paa","\schaun_vetement\texture\tenue1\hoodie\cargo1.paa"};
	};
	class tenuesweatcargo15C1_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\bleu\uppr_diff_008_g_uniGUESS.paa","\schaun_vetement\texture\tenue1\hoodie\cargo1.paa"};
	};
	class tenuesweatcargo15A2_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\bleu\Jordan2.paa","\schaun_vetement\texture\tenue1\hoodie\bleu\uppr_diff_008_g_uniGUESS.paa","\schaun_vetement\texture\tenue1\hoodie\cargo2.paa"};
	};
	class tenuesweatcargo15B2_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\bleu\Jordan111.paa","\schaun_vetement\texture\tenue1\hoodie\bleu\uppr_diff_008_g_uniGUESS.paa","\schaun_vetement\texture\tenue1\hoodie\cargo2.paa"};
	};
	class tenuesweatcargo15C2_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\bleu\uppr_diff_008_g_uniGUESS.paa","\schaun_vetement\texture\tenue1\hoodie\cargo2.paa"};
	};
	class tenuesweatcargo15A3_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\bleu\Jordan2.paa","\schaun_vetement\texture\tenue1\hoodie\bleu\uppr_diff_008_g_uniGUESS.paa","\schaun_vetement\texture\tenue1\hoodie\cargo3.paa"};
	};
	class tenuesweatcargo15B3_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\bleu\Jordan111.paa","\schaun_vetement\texture\tenue1\hoodie\bleu\uppr_diff_008_g_uniGUESS.paa","\schaun_vetement\texture\tenue1\hoodie\cargo3.paa"};
	};
	class tenuesweatcargo15C3_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\bleu\uppr_diff_008_g_uniGUESS.paa","\schaun_vetement\texture\tenue1\hoodie\cargo3.paa"};
	};
	class tenuesweatcargo16A1_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\BlackGris\jordanblack.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\fname.paa","\schaun_vetement\texture\tenue1\hoodie\cargo1.paa"};
	};
	class tenuesweatcargo16B1_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\fname.paa","\schaun_vetement\texture\tenue1\hoodie\cargo1.paa"};
	};
	class tenuesweatcargo16A2_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\BlackGris\jordanblack.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\fname.paa","\schaun_vetement\texture\tenue1\hoodie\cargo2.paa"};
	};
	class tenuesweatcargo16B2_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\fname.paa","\schaun_vetement\texture\tenue1\hoodie\cargo2.paa"};
	};
	class tenuesweatcargo16A3_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\BlackGris\jordanblack.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\fname.paa","\schaun_vetement\texture\tenue1\hoodie\cargo3.paa"};
	};
	class tenuesweatcargo16B3_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\fname.paa","\schaun_vetement\texture\tenue1\hoodie\cargo3.paa"};
	};
	class tenuesweatcargo17A1_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\BlackGris\jordanblack.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\gname22.paa","\schaun_vetement\texture\tenue1\hoodie\cargo1.paa"};
	};
	class tenuesweatcargo17B1_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\gname22.paa","\schaun_vetement\texture\tenue1\hoodie\cargo1.paa"};
	};
	class tenuesweatcargo17A2_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\BlackGris\jordanblack.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\gname22.paa","\schaun_vetement\texture\tenue1\hoodie\cargo2.paa"};
	};
	class tenuesweatcargo17B2_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\gname22.paa","\schaun_vetement\texture\tenue1\hoodie\cargo2.paa"};
	};
	class tenuesweatcargo17A3_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\BlackGris\jordanblack.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\gname22.paa","\schaun_vetement\texture\tenue1\hoodie\cargo3.paa"};
	};
	class tenuesweatcargo17B3_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\gname22.paa","\schaun_vetement\texture\tenue1\hoodie\cargo3.paa"};
	};
	class tenuesweatcargo18A1_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\BlackGris\jordanblack.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\gnmaoff.paa","\schaun_vetement\texture\tenue1\hoodie\cargo1.paa"};
	};
	class tenuesweatcargo18B1_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\gnmaoff.paa","\schaun_vetement\texture\tenue1\hoodie\cargo1.paa"};
	};
	class tenuesweatcargo18A2_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\BlackGris\jordanblack.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\gnmaoff.paa","\schaun_vetement\texture\tenue1\hoodie\cargo2.paa"};
	};
	class tenuesweatcargo18B2_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\gnmaoff.paa","\schaun_vetement\texture\tenue1\hoodie\cargo2.paa"};
	};
	class tenuesweatcargo18A3_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\BlackGris\jordanblack.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\gnmaoff.paa","\schaun_vetement\texture\tenue1\hoodie\cargo3.paa"};
	};
	class tenuesweatcargo18B3_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\gnmaoff.paa","\schaun_vetement\texture\tenue1\hoodie\cargo3.paa"};
	};
	class tenuesweatcargo19A1_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\BlackGris\jordanblack.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\hoodiesuprcamo.paa","\schaun_vetement\texture\tenue1\hoodie\cargo1.paa"};
	};
	class tenuesweatcargo19B1_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\hoodiesuprcamo.paa","\schaun_vetement\texture\tenue1\hoodie\cargo1.paa"};
	};
	class tenuesweatcargo19A2_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\BlackGris\jordanblack.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\hoodiesuprcamo.paa","\schaun_vetement\texture\tenue1\hoodie\cargo2.paa"};
	};
	class tenuesweatcargo19B2_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\hoodiesuprcamo.paa","\schaun_vetement\texture\tenue1\hoodie\cargo2.paa"};
	};
	class tenuesweatcargo19A3_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\BlackGris\jordanblack.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\hoodiesuprcamo.paa","\schaun_vetement\texture\tenue1\hoodie\cargo3.paa"};
	};
	class tenuesweatcargo19B3_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\hoodiesuprcamo.paa","\schaun_vetement\texture\tenue1\hoodie\cargo3.paa"};
	};
	class tenuesweatcargo20A1_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\BlackGris\jordanblack.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\uppr_diff_008_d_uniCMGsupr.paa","\schaun_vetement\texture\tenue1\hoodie\cargo1.paa"};
	};
	class tenuesweatcargo20B1_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\uppr_diff_008_d_uniCMGsupr.paa","\schaun_vetement\texture\tenue1\hoodie\cargo1.paa"};
	};
	class tenuesweatcargo20A2_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\BlackGris\jordanblack.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\uppr_diff_008_d_uniCMGsupr.paa","\schaun_vetement\texture\tenue1\hoodie\cargo2.paa"};
	};
	class tenuesweatcargo20B2_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\uppr_diff_008_d_uniCMGsupr.paa","\schaun_vetement\texture\tenue1\hoodie\cargo2.paa"};
	};
	class tenuesweatcargo20A3_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\BlackGris\jordanblack.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\uppr_diff_008_d_uniCMGsupr.paa","\schaun_vetement\texture\tenue1\hoodie\cargo3.paa"};
	};
	class tenuesweatcargo20B3_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\uppr_diff_008_d_uniCMGsupr.paa","\schaun_vetement\texture\tenue1\hoodie\cargo3.paa"};
	};
	class tenuesweatcargo21A1_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\BlackGris\jordanblack.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\uppr_diff_008_h_uniKAPPA.paa","\schaun_vetement\texture\tenue1\hoodie\cargo1.paa"};
	};
	class tenuesweatcargo21B1_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\uppr_diff_008_h_uniKAPPA.paa","\schaun_vetement\texture\tenue1\hoodie\cargo1.paa"};
	};
	class tenuesweatcargo21A2_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\BlackGris\jordanblack.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\uppr_diff_008_h_uniKAPPA.paa","\schaun_vetement\texture\tenue1\hoodie\cargo2.paa"};
	};
	class tenuesweatcargo21B2_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\uppr_diff_008_h_uniKAPPA.paa","\schaun_vetement\texture\tenue1\hoodie\cargo2.paa"};
	};
	class tenuesweatcargo21A3_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\BlackGris\jordanblack.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\uppr_diff_008_h_uniKAPPA.paa","\schaun_vetement\texture\tenue1\hoodie\cargo3.paa"};
	};
	class tenuesweatcargo21B3_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\uppr_diff_008_h_uniKAPPA.paa","\schaun_vetement\texture\tenue1\hoodie\cargo3.paa"};
	};
	class tenuesweatcargo22A1_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\BlackGris\jordanblack.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\uppr_diff_008_m_unidg.paa","\schaun_vetement\texture\tenue1\hoodie\cargo1.paa"};
	};
	class tenuesweatcargo22B1_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\uppr_diff_008_m_unidg.paa","\schaun_vetement\texture\tenue1\hoodie\cargo1.paa"};
	};
	class tenuesweatcargo22A2_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\BlackGris\jordanblack.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\uppr_diff_008_m_unidg.paa","\schaun_vetement\texture\tenue1\hoodie\cargo2.paa"};
	};
	class tenuesweatcargo22B2_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\uppr_diff_008_m_unidg.paa","\schaun_vetement\texture\tenue1\hoodie\cargo2.paa"};
	};
	class tenuesweatcargo22A3_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\BlackGris\jordanblack.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\uppr_diff_008_m_unidg.paa","\schaun_vetement\texture\tenue1\hoodie\cargo3.paa"};
	};
	class tenuesweatcargo22B3_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\uppr_diff_008_m_unidg.paa","\schaun_vetement\texture\tenue1\hoodie\cargo3.paa"};
	};
	class tenuesweatcargo23A1_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\rose\jordanrose.paa","\schaun_vetement\texture\tenue1\hoodie\rose\rose1.paa","\schaun_vetement\texture\tenue1\hoodie\cargo1.paa"};
	};
	class tenuesweatcargo23B1_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\rose\rose1.paa","\schaun_vetement\texture\tenue1\hoodie\cargo1.paa"};
	};
	class tenuesweatcargo23A2_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\rose\jordanrose.paa","\schaun_vetement\texture\tenue1\hoodie\rose\rose1.paa","\schaun_vetement\texture\tenue1\hoodie\cargo2.paa"};
	};
	class tenuesweatcargo23B2_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\rose\rose1.paa","\schaun_vetement\texture\tenue1\hoodie\cargo2.paa"};
	};
	class tenuesweatcargo23A3_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\rose\jordanrose.paa","\schaun_vetement\texture\tenue1\hoodie\rose\rose1.paa","\schaun_vetement\texture\tenue1\hoodie\cargo3.paa"};
	};
	class tenuesweatcargo23B3_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\rose\rose1.paa","\schaun_vetement\texture\tenue1\hoodie\cargo3.paa"};
	};
	class tenuesweatcargo24A1_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\rose\jordanrose.paa","\schaun_vetement\texture\tenue1\hoodie\rose\rose2.paa","\schaun_vetement\texture\tenue1\hoodie\cargo1.paa"};
	};
	class tenuesweatcargo24B1_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\rose\rose2.paa","\schaun_vetement\texture\tenue1\hoodie\cargo1.paa"};
	};
	class tenuesweatcargo24A2_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\rose\jordanrose.paa","\schaun_vetement\texture\tenue1\hoodie\rose\rose2.paa","\schaun_vetement\texture\tenue1\hoodie\cargo2.paa"};
	};
	class tenuesweatcargo24B2_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\rose\rose2.paa","\schaun_vetement\texture\tenue1\hoodie\cargo2.paa"};
	};
	class tenuesweatcargo24A3_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\rose\jordanrose.paa","\schaun_vetement\texture\tenue1\hoodie\rose\rose2.paa","\schaun_vetement\texture\tenue1\hoodie\cargo3.paa"};
	};
	class tenuesweatcargo24B3_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\rose\rose2.paa","\schaun_vetement\texture\tenue1\hoodie\cargo3.paa"};
	};
	class tenuesweatcargo25A1_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\blackgris\jordanblack.paa","\schaun_vetement\texture\tenue1\hoodie\blackgris\concessgris.paa","\schaun_vetement\texture\tenue1\hoodie\cargo1.paa"};
	};
	class tenuesweatcargo25B1_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\blackgris\concessgris.paa","\schaun_vetement\texture\tenue1\hoodie\cargo1.paa"};
	};
	class tenuesweatcargo25A2_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\blackgris\jordanblack.paa","\schaun_vetement\texture\tenue1\hoodie\blackgris\concessgris.paa","\schaun_vetement\texture\tenue1\hoodie\cargo2.paa"};
	};
	class tenuesweatcargo25B2_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\blackgris\concessgris.paa","\schaun_vetement\texture\tenue1\hoodie\cargo2.paa"};
	};
	class tenuesweatcargo25A3_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\blackgris\jordanblack.paa","\schaun_vetement\texture\tenue1\hoodie\blackgris\concessgris.paa","\schaun_vetement\texture\tenue1\hoodie\cargo3.paa"};
	};
	class tenuesweatcargo25B3_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\blackgris\concessgris.paa","\schaun_vetement\texture\tenue1\hoodie\cargo3.paa"};
	};
	class tenuesweatcargo26A1_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\blackgris\jordanblack.paa","\schaun_vetement\texture\tenue1\hoodie\blackgris\concessnoir.paa","\schaun_vetement\texture\tenue1\hoodie\cargo1.paa"};
	};
	class tenuesweatcargo26B1_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\blackgris\concessnoir.paa","\schaun_vetement\texture\tenue1\hoodie\cargo1.paa"};
	};
	class tenuesweatcargo26A2_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\blackgris\jordanblack.paa","\schaun_vetement\texture\tenue1\hoodie\blackgris\concessnoir.paa","\schaun_vetement\texture\tenue1\hoodie\cargo2.paa"};
	};
	class tenuesweatcargo26B2_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\blackgris\concessnoir.paa","\schaun_vetement\texture\tenue1\hoodie\cargo2.paa"};
	};
	class tenuesweatcargo26A3_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\blackgris\jordanblack.paa","\schaun_vetement\texture\tenue1\hoodie\blackgris\concessnoir.paa","\schaun_vetement\texture\tenue1\hoodie\cargo3.paa"};
	};
	class tenuesweatcargo26B3_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\blackgris\concessnoir.paa","\schaun_vetement\texture\tenue1\hoodie\cargo3.paa"};
	};
	class tenuesweatcargo27A1_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\blackgris\jordanblack.paa","\schaun_vetement\texture\tenue1\hoodie\blackgris\coolermaster.paa","\schaun_vetement\texture\tenue1\hoodie\cargo1.paa"};
	};
	class tenuesweatcargo27B1_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\blackgris\coolermaster.paa","\schaun_vetement\texture\tenue1\hoodie\cargo1.paa"};
	};
	class tenuesweatcargo27A2_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\blackgris\jordanblack.paa","\schaun_vetement\texture\tenue1\hoodie\blackgris\coolermaster.paa","\schaun_vetement\texture\tenue1\hoodie\cargo2.paa"};
	};
	class tenuesweatcargo27B2_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\blackgris\coolermaster.paa","\schaun_vetement\texture\tenue1\hoodie\cargo2.paa"};
	};
	class tenuesweatcargo27A3_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\blackgris\jordanblack.paa","\schaun_vetement\texture\tenue1\hoodie\blackgris\coolermaster.paa","\schaun_vetement\texture\tenue1\hoodie\cargo3.paa"};
	};
	class tenuesweatcargo27B3_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\blackgris\coolermaster.paa","\schaun_vetement\texture\tenue1\hoodie\cargo3.paa"};
	};
	class tenuesweatcargo28A1_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\orange\Jordan1.paa","\schaun_vetement\texture\tenue1\hoodie\orange\instanggaming.paa","\schaun_vetement\texture\tenue1\hoodie\cargo1.paa"};
	};
	class tenuesweatcargo28B1_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\orange\Jordan21.paa","\schaun_vetement\texture\tenue1\hoodie\orange\instanggaming.paa","\schaun_vetement\texture\tenue1\hoodie\cargo1.paa"};
	};
	class tenuesweatcargo28C1_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\orange\instanggaming.paa","\schaun_vetement\texture\tenue1\hoodie\cargo1.paa"};
	};
	class tenuesweatcargo28A2_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\orange\Jordan1.paa","\schaun_vetement\texture\tenue1\hoodie\orange\instanggaming.paa","\schaun_vetement\texture\tenue1\hoodie\cargo2.paa"};
	};
	class tenuesweatcargo28B2_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\orange\Jordan21.paa","\schaun_vetement\texture\tenue1\hoodie\orange\instanggaming.paa","\schaun_vetement\texture\tenue1\hoodie\cargo2.paa"};
	};
	class tenuesweatcargo28C2_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\orange\instanggaming.paa","\schaun_vetement\texture\tenue1\hoodie\cargo2.paa"};
	};
	class tenuesweatcargo28A3_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\orange\Jordan1.paa","\schaun_vetement\texture\tenue1\hoodie\orange\instanggaming.paa","\schaun_vetement\texture\tenue1\hoodie\cargo3.paa"};
	};
	class tenuesweatcargo28B3_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\orange\Jordan21.paa","\schaun_vetement\texture\tenue1\hoodie\orange\instanggaming.paa","\schaun_vetement\texture\tenue1\hoodie\cargo3.paa"};
	};
	class tenuesweatcargo28C3_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\orange\instanggaming.paa","\schaun_vetement\texture\tenue1\hoodie\cargo3.paa"};
	};
	class tenuesweatcargo29A1_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\BlackGris\jordanblack.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\sub1.paa","\schaun_vetement\texture\tenue1\hoodie\cargo1.paa"};
	};
	class tenuesweatcargo29A2_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\BlackGris\jordanblack.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\sub1.paa","\schaun_vetement\texture\tenue1\hoodie\cargo2.paa"};
	};
	class tenuesweatcargo29A3_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\BlackGris\jordanblack.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\sub1.paa","\schaun_vetement\texture\tenue1\hoodie\cargo3.paa"};
	};
	class tenuesweatcargo30A1_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\BlackGris\jordanblack.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\sub2.paa","\schaun_vetement\texture\tenue1\hoodie\cargo1.paa"};
	};
	class tenuesweatcargo30A2_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\BlackGris\jordanblack.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\sub2.paa","\schaun_vetement\texture\tenue1\hoodie\cargo2.paa"};
	};
	class tenuesweatcargo30A3_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\BlackGris\jordanblack.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\sub2.paa","\schaun_vetement\texture\tenue1\hoodie\cargo3.paa"};
	};
	class tenuesweatcargo31A1_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\rouge\jordan4black.paa","\schaun_vetement\texture\tenue1\hoodie\rouge\merguez1000tipla.paa","\schaun_vetement\texture\tenue1\hoodie\cargo1.paa"};
	};
	class tenuesweatcargo32A1_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\BlackGris\jordanblack.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\corteiznoir.paa","\schaun_vetement\texture\tenue1\hoodie\cargo1.paa"};
	};
	class tenuesweatcargo32B1_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\corteiznoir.paa","\schaun_vetement\texture\tenue1\hoodie\cargo1.paa"};
	};
	class tenuesweatcargo32A2_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\BlackGris\jordanblack.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\corteiznoir.paa","\schaun_vetement\texture\tenue1\hoodie\cargo2.paa"};
	};
	class tenuesweatcargo32B2_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\corteiznoir.paa","\schaun_vetement\texture\tenue1\hoodie\cargo2.paa"};
	};
	class tenuesweatcargo32A3_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\BlackGris\jordanblack.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\corteiznoir.paa","\schaun_vetement\texture\tenue1\hoodie\cargo3.paa"};
	};
	class tenuesweatcargo32B3_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\corteiznoir.paa","\schaun_vetement\texture\tenue1\hoodie\cargo3.paa"};
	};
	class tenuesweatcargo33A1_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\BlackGris\jordanblack.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\corteizgris.paa","\schaun_vetement\texture\tenue1\hoodie\cargo1.paa"};
	};
	class tenuesweatcargo33B1_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\corteizgris.paa","\schaun_vetement\texture\tenue1\hoodie\cargo1.paa"};
	};
	class tenuesweatcargo33A2_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\BlackGris\jordanblack.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\corteizgris.paa","\schaun_vetement\texture\tenue1\hoodie\cargo2.paa"};
	};
	class tenuesweatcargo33B2_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\corteizgris.paa","\schaun_vetement\texture\tenue1\hoodie\cargo2.paa"};
	};
	class tenuesweatcargo33A3_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\BlackGris\jordanblack.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\corteizgris.paa","\schaun_vetement\texture\tenue1\hoodie\cargo3.paa"};
	};
	class tenuesweatcargo33B3_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\corteizgris.paa","\schaun_vetement\texture\tenue1\hoodie\cargo3.paa"};
	};
	class tenuesweatcargo34A1_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\BlackGris\jordanblack.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\supremeburberry.paa","\schaun_vetement\texture\tenue1\hoodie\cargo1.paa"};
	};
	class tenuesweatcargo34B1_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\supremeburberry.paa","\schaun_vetement\texture\tenue1\hoodie\cargo1.paa"};
	};
	class tenuesweatcargo34A2_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\BlackGris\jordanblack.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\supremeburberry.paa","\schaun_vetement\texture\tenue1\hoodie\cargo2.paa"};
	};
	class tenuesweatcargo34B2_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\supremeburberry.paa","\schaun_vetement\texture\tenue1\hoodie\cargo2.paa"};
	};
	class tenuesweatcargo34A3_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\BlackGris\jordanblack.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\supremeburberry.paa","\schaun_vetement\texture\tenue1\hoodie\cargo3.paa"};
	};
	class tenuesweatcargo34B3_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\supremeburberry.paa","\schaun_vetement\texture\tenue1\hoodie\cargo3.paa"};
	};
	class tenuesweatcargo35A1_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\BlackGris\jordanblack.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\stussynoir.paa","\schaun_vetement\texture\tenue1\hoodie\cargo1.paa"};
	};
	class tenuesweatcargo35B1_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\stussynoir.paa","\schaun_vetement\texture\tenue1\hoodie\cargo1.paa"};
	};
	class tenuesweatcargo35A2_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\BlackGris\jordanblack.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\stussynoir.paa","\schaun_vetement\texture\tenue1\hoodie\cargo2.paa"};
	};
	class tenuesweatcargo35B2_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\stussynoir.paa","\schaun_vetement\texture\tenue1\hoodie\cargo2.paa"};
	};
	class tenuesweatcargo35A3_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\BlackGris\jordanblack.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\stussynoir.paa","\schaun_vetement\texture\tenue1\hoodie\cargo3.paa"};
	};
	class tenuesweatcargo35B3_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\stussynoir.paa","\schaun_vetement\texture\tenue1\hoodie\cargo3.paa"};
	};
	class tenuesweatcargo36A1_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\BlackGris\jordanblack.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\stussyblanc.paa","\schaun_vetement\texture\tenue1\hoodie\cargo1.paa"};
	};
	class tenuesweatcargo36B1_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\stussyblanc.paa","\schaun_vetement\texture\tenue1\hoodie\cargo1.paa"};
	};
	class tenuesweatcargo36A2_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\BlackGris\jordanblack.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\stussyblanc.paa","\schaun_vetement\texture\tenue1\hoodie\cargo2.paa"};
	};
	class tenuesweatcargo36B2_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\stussyblanc.paa","\schaun_vetement\texture\tenue1\hoodie\cargo2.paa"};
	};
	class tenuesweatcargo36A3_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\BlackGris\jordanblack.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\stussyblanc.paa","\schaun_vetement\texture\tenue1\hoodie\cargo3.paa"};
	};
	class tenuesweatcargo36B3_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\stussyblanc.paa","\schaun_vetement\texture\tenue1\hoodie\cargo3.paa"};
	};
	class tenuesweatcargo37A1_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\BlackGris\jordanfullblack.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\black.paa","\schaun_vetement\texture\tenue1\hoodie\cargo1.paa"};
	};
	class tenuesweatcargo37B1_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\black.paa","\schaun_vetement\texture\tenue1\hoodie\cargo1.paa"};
	};
	class tenuesweatcargo37A2_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\BlackGris\jordanfullblack.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\black.paa","\schaun_vetement\texture\tenue1\hoodie\cargo2.paa"};
	};
	class tenuesweatcargo37B2_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\black.paa","\schaun_vetement\texture\tenue1\hoodie\cargo2.paa"};
	};
	class tenuesweatcargo37A3_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\BlackGris\jordanfullblack.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\black.paa","\schaun_vetement\texture\tenue1\hoodie\cargo3.paa"};
	};
	class tenuesweatcargo37B3_b: tenuesweatcargo1A1_b
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\jordandior.paa","\schaun_vetement\texture\tenue1\hoodie\BlackGris\black.paa","\schaun_vetement\texture\tenue1\hoodie\cargo3.paa"};
	};
	class banane_LV: B_AssaultPack_Base
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		maximumLoad = 50;
		author = "schaun";
		displayName = "Banane Louis Vuitton";
		model = "\schaun_vetement\banane.p3d";
		picture = "\schaun_vetement\ui\ui_lv2.paa";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\banane\LV2.paa"};
	};
	class banane_LVB: B_AssaultPack_Base
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		maximumLoad = 50;
		author = "schaun";
		displayName = "Banane Louis Vuitton Black";
		model = "\schaun_vetement\banane.p3d";
		picture = "\schaun_vetement\ui\ui_lv.paa";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\banane\LV.paa"};
	};
	class banane_offwhite: B_AssaultPack_Base
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		maximumLoad = 50;
		author = "schaun";
		displayName = "Banane Off White";
		model = "\schaun_vetement\banane.p3d";
		picture = "\schaun_vetement\ui\ui_offwhite.paa";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\banane\offwhite.paa"};
	};
	class banane_tnfs1: B_AssaultPack_Base
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		maximumLoad = 50;
		author = "schaun";
		displayName = "Banane The North Face Supreme 1";
		model = "\schaun_vetement\banane.p3d";
		picture = "\schaun_vetement\ui\ui_tnf1.paa";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\banane\TNFS1.paa"};
	};
	class banane_tnfs2: B_AssaultPack_Base
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		maximumLoad = 50;
		author = "schaun";
		displayName = "Banane The North Face Supreme 2";
		model = "\schaun_vetement\banane.p3d";
		picture = "\schaun_vetement\ui\ui_tnf2.paa";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\banane\TNFS2.paa"};
	};
	class banane_tnfs3: B_AssaultPack_Base
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		maximumLoad = 50;
		author = "schaun";
		displayName = "Banane The North Face Supreme 3";
		model = "\schaun_vetement\banane.p3d";
		picture = "\schaun_vetement\ui\ui_tnf3.paa";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\banane\TNFS3.paa"};
	};
	class bagbandouliere: B_AssaultPack_Base
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		maximumLoad = 100;
		author = "schaun";
		displayName = "Bag Supreme";
		model = "\schaun_vetement\bagbandouliere.p3d";
		picture = "\schaun_vetement\ui\ui_sacbandouliere.paa";
	};
};
class cfgWeapons
{
	class ItemCore;
	class HeadgearItem;
	class InventoryItem_Base_F;
	class UniformItem;
	class Uniform_Base;
	class VestItem;
	class Vest_Camo_Base;
	class tenuesweat1A1: Uniform_Base
	{
		author = "schaun";
		scope = 2;
		displayName = "Tenue Sweat Supreme LV A1";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\rouge\gnamelv.paa"};
		picture = "\schaun_vetement\ui\hoodie\1.paa";
		model = "\schaun_vetement\tenue1sol.p3d";
		class Wounds
		{
			tex[] = {};
			mat[] = {};
		};
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat1A1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat1B1: tenuesweat1A1
	{
		displayName = "Tenue Sweat Supreme LV B1";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat1B1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat1C1: tenuesweat1A1
	{
		displayName = "Tenue Sweat Supreme LV C1";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat1C1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat1A2: tenuesweat1A1
	{
		displayName = "Tenue Sweat Supreme LV A2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat1A2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat1B2: tenuesweat1A1
	{
		displayName = "Tenue Sweat Supreme LV B2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat1B2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat1C2: tenuesweat1A1
	{
		displayName = "Tenue Sweat Supreme LV C2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat1C2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat1A3: tenuesweat1A1
	{
		displayName = "Tenue Sweat Supreme LV A3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat1A3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat1B3: tenuesweat1A1
	{
		displayName = "Tenue Sweat Supreme LV B3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat1B3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat1C3: tenuesweat1A1
	{
		displayName = "Tenue Sweat Supreme LV C3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat1C3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat2A1: tenuesweat1A1
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\rouge\sweatRouge.paa"};
		displayName = "Tenue Sweat Off White Mona Lisa Rouge A1";
		picture = "\schaun_vetement\ui\hoodie\2.paa";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat2A1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat2B1: tenuesweat2A1
	{
		displayName = "Tenue Sweat Off White Mona Lisa Rouge B1";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat2B1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat2C1: tenuesweat2A1
	{
		displayName = "Tenue Sweat Off White Mona Lisa Rouge C1";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat2C1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat2A2: tenuesweat2A1
	{
		displayName = "Tenue Sweat Off White Mona Lisa Rouge A2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat2A2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat2B2: tenuesweat2A1
	{
		displayName = "Tenue Sweat Off White Mona Lisa Rouge B2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat2B2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat2C2: tenuesweat2A1
	{
		displayName = "Tenue Sweat Off White Mona Lisa Rouge C2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat2C2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat2A3: tenuesweat2A1
	{
		displayName = "Tenue Sweat Off White Mona Lisa Rouge A3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat2A3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat2B3: tenuesweat2A1
	{
		displayName = "Tenue Sweat Off White Mona Lisa Rouge B3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat2B3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat2C3: tenuesweat2A1
	{
		displayName = "Tenue Sweat Off White Mona Lisa Rouge C3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat2C3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat3A1: tenuesweat1A1
	{
		displayName = "Tenue Sweat Supreme Logo Rouge A1";
		picture = "\schaun_vetement\ui\hoodie\3.paa";
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\rouge\uppr_diff_008_b_uniredsuprem.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat3A1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat3B1: tenuesweat3A1
	{
		displayName = "Tenue Sweat Supreme Logo Rouge B1";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat3B1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat3C1: tenuesweat3A1
	{
		displayName = "Tenue Sweat Supreme Logo Rouge C1";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat3C1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat3A2: tenuesweat3A1
	{
		displayName = "Tenue Sweat Supreme Logo Rouge A2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat3A2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat3B2: tenuesweat3A1
	{
		displayName = "Tenue Sweat Supreme Logo Rouge B2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat3B2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat3C2: tenuesweat3A1
	{
		displayName = "Tenue Sweat Supreme Logo Rouge C2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat3C2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat3A3: tenuesweat3A1
	{
		displayName = "Tenue Sweat Supreme Logo Rouge A3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat3A3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat3B3: tenuesweat3A1
	{
		displayName = "Tenue Sweat Supreme Logo Rouge B3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat3B3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat3C3: tenuesweat3A1
	{
		displayName = "Tenue Sweat Supreme Logo Rouge C3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat3C3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat4A1: tenuesweat1A1
	{
		displayName = "Tenue Sweat Supreme COMMME des GARCONS A1";
		picture = "\schaun_vetement\ui\hoodie\4.paa";
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\rouge\uppr_diff_008_c_unid.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat4A1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat4B1: tenuesweat4A1
	{
		displayName = "Tenue Sweat Supreme COMMME des GARCONS B1";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat4B1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat4C1: tenuesweat4A1
	{
		displayName = "Tenue Sweat Supreme COMMME des GARCONS C1";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat4C1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat4A2: tenuesweat4A1
	{
		displayName = "Tenue Sweat Supreme COMMME des GARCONS A2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat4A2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat4B2: tenuesweat4A1
	{
		displayName = "Tenue Sweat Supreme COMMME des GARCONS B2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat4B2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat4C2: tenuesweat4A1
	{
		displayName = "Tenue Sweat Supreme COMMME des GARCONS C2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat4C2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat4A3: tenuesweat4A1
	{
		displayName = "Tenue Sweat Supreme COMMME des GARCONS A3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat4A3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat4B3: tenuesweat4A1
	{
		displayName = "Tenue Sweat Supreme COMMME des GARCONS B3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat4B3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat4C3: tenuesweat4A1
	{
		displayName = "Tenue Sweat Supreme COMMME des GARCONS C3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat4C3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat5A1: tenuesweat1A1
	{
		displayName = "Tenue Sweat COMMME des GARCONS A1";
		picture = "\schaun_vetement\ui\hoodie\5.paa";
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\rouge\uppr_diff_008_k_unicoeur.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat5A1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat5B1: tenuesweat5A1
	{
		displayName = "Tenue Sweat COMMME des GARCONS B1";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat5B1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat5C1: tenuesweat5A1
	{
		displayName = "Tenue Sweat COMMME des GARCONS C1";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat5C1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat5A2: tenuesweat5A1
	{
		displayName = "Tenue Sweat COMMME des GARCONS A2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat5A2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat5B2: tenuesweat5A1
	{
		displayName = "Tenue Sweat COMMME des GARCONS B2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat5B2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat5C2: tenuesweat5A1
	{
		displayName = "Tenue Sweat COMMME des GARCONS C2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat5C2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat5A3: tenuesweat5A1
	{
		displayName = "Tenue Sweat COMMME des GARCONS A3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat5A3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat5B3: tenuesweat5A1
	{
		displayName = "Tenue Sweat COMMME des GARCONS B3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat5B3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat5C3: tenuesweat5A1
	{
		displayName = "Tenue Sweat COMMME des GARCONS C3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat5C3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat6A1: tenuesweat1A1
	{
		displayName = "Tenue Sweat Nike A1";
		picture = "\schaun_vetement\ui\hoodie\6.paa";
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\rouge\uppr_diff_008_l_uninike.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat6A1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat6B1: tenuesweat6A1
	{
		displayName = "Tenue Sweat Nike B1";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat6B1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat6C1: tenuesweat6A1
	{
		displayName = "Tenue Sweat Nike C1";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat6C1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat6A2: tenuesweat6A1
	{
		displayName = "Tenue Sweat Nike A2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat6A2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat6B2: tenuesweat6A1
	{
		displayName = "Tenue Sweat Nike B2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat6B2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat6C2: tenuesweat6A1
	{
		displayName = "Tenue Sweat Nike C2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat6C2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat6A3: tenuesweat6A1
	{
		displayName = "Tenue Sweat Nike A3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat6A3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat6B3: tenuesweat6A1
	{
		displayName = "Tenue Sweat Nike B3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat6B3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat6C3: tenuesweat6A1
	{
		displayName = "Tenue Sweat Nike C3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat6C3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat7A1: tenuesweat1A1
	{
		displayName = "Tenue Sweat TRASHER A1";
		picture = "\schaun_vetement\ui\hoodie\7.paa";
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\orange\uppr_diff_000_a_unig.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat7A1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat7B1: tenuesweat7A1
	{
		displayName = "Tenue Sweat TRASHER B1";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat7B1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat7C1: tenuesweat7A1
	{
		displayName = "Tenue Sweat TRASHER C1";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat7C1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat7A2: tenuesweat7A1
	{
		displayName = "Tenue Sweat TRASHER A2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat7A2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat7B2: tenuesweat7A1
	{
		displayName = "Tenue Sweat TRASHER B2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat7B2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat7C2: tenuesweat7A1
	{
		displayName = "Tenue Sweat TRASHER C2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat7C2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat7A3: tenuesweat7A1
	{
		displayName = "Tenue Sweat TRASHER A3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat7A3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat7B3: tenuesweat7A1
	{
		displayName = "Tenue Sweat TRASHER B3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat7B3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat7C3: tenuesweat7A1
	{
		displayName = "Tenue Sweat TRASHER C3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat7C3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat8A1: tenuesweat1A1
	{
		displayName = "Tenue Sweat OFF WHITE Blanc Orange A1";
		picture = "\schaun_vetement\ui\hoodie\8.paa";
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\orange\uppr_diff_000_a_uniOFFFWHITEEBANC.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat8A1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat8B1: tenuesweat8A1
	{
		displayName = "Tenue Sweat OFF WHITE Blanc Orange B1";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat8B1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat8C1: tenuesweat8A1
	{
		displayName = "Tenue Sweat OFF WHITE Blanc Orange C1";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat8C1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat8A2: tenuesweat8A1
	{
		displayName = "Tenue Sweat OFF WHITE Blanc Orange A2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat8A2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat8B2: tenuesweat8A1
	{
		displayName = "Tenue Sweat OFF WHITE Blanc Orange B2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat8B2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat8C2: tenuesweat8A1
	{
		displayName = "Tenue Sweat OFF WHITE Blanc Orange C2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat8C2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat8A3: tenuesweat8A1
	{
		displayName = "Tenue Sweat OFF WHITE Blanc Orange A3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat8A3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat8B3: tenuesweat8A1
	{
		displayName = "Tenue Sweat OFF WHITE Blanc Orange B3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat8B3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat8C3: tenuesweat8A1
	{
		displayName = "Tenue Sweat OFF WHITE Blanc Orange C3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat8C3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat9A1: tenuesweat1A1
	{
		displayName = "Tenue Sweat OFF WHITE Noir Orange A1";
		picture = "\schaun_vetement\ui\hoodie\9.paa";
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\orange\uppr_diff_000_a_uniOFFFWHITEENOIR.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat9A1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat9B1: tenuesweat9A1
	{
		displayName = "Tenue Sweat OFF WHITE Noir Orange B1";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat9B1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat9C1: tenuesweat9A1
	{
		displayName = "Tenue Sweat OFF WHITE Noir Orange C1";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat9C1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat9A2: tenuesweat9A1
	{
		displayName = "Tenue Sweat OFF WHITE Noir Orange A2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat9A2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat9B2: tenuesweat9A1
	{
		displayName = "Tenue Sweat OFF WHITE Noir Orange B2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat9B2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat9C2: tenuesweat9A1
	{
		displayName = "Tenue Sweat OFF WHITE Noir Orange C2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat9C2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat9A3: tenuesweat9A1
	{
		displayName = "Tenue Sweat OFF WHITE Noir Orange A3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat9A3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat9B3: tenuesweat9A1
	{
		displayName = "Tenue Sweat OFF WHITE Noir Orange B3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat9B3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat9C3: tenuesweat9A1
	{
		displayName = "Tenue Sweat OFF WHITE Noir Orange C3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat9C3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat10A1: tenuesweat1A1
	{
		displayName = "Tenue Sweat Stone Island Jaune A1";
		picture = "\schaun_vetement\ui\hoodie\10.paa";
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\jaune\enameSTONE.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat10A1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat10B1: tenuesweat10A1
	{
		displayName = "Tenue Sweat Stone Island Jaune B1";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat10B1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat10A2: tenuesweat10A1
	{
		displayName = "Tenue Sweat Stone Island Jaune A2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat10A2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat10B2: tenuesweat10A1
	{
		displayName = "Tenue Sweat Stone Island Jaune B2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat10B2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat10A3: tenuesweat10A1
	{
		displayName = "Tenue Sweat Stone Island Jaune A3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat10A3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat10B3: tenuesweat10A1
	{
		displayName = "Tenue Sweat Stone Island Jaune B3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat10B3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat11A1: tenuesweat1A1
	{
		picture = "\schaun_vetement\ui\hoodie\11.paa";
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\jaune\gnametravis.paa"};
		displayName = "Tenue Sweat Travis Scott Jaune A1";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat11A1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat11B1: tenuesweat11A1
	{
		displayName = "Tenue Sweat Travis Scott Jaune B1";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat11B1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat11A2: tenuesweat11A1
	{
		displayName = "Tenue Sweat Travis Scott Jaune A2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat11A2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat11B2: tenuesweat11A1
	{
		displayName = "Tenue Sweat Travis Scott Jaune B2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat11B2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat11A3: tenuesweat11A1
	{
		displayName = "Tenue Sweat Travis Scott Jaune A3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat11A3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat11B3: tenuesweat11A1
	{
		displayName = "Tenue Sweat Travis Scott Jaune B3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat11B3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat12A1: tenuesweat1A1
	{
		displayName = "Tenue Sweat BAPE A1";
		picture = "\schaun_vetement\ui\hoodie\12.paa";
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\vert\bapee.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat12A1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat12B1: tenuesweat12A1
	{
		displayName = "Tenue Sweat BAPE B1";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat12B1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat12A2: tenuesweat12A1
	{
		displayName = "Tenue Sweat BAPE A2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat12A2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat12B2: tenuesweat12A1
	{
		displayName = "Tenue Sweat BAPE B2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat12B2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat12A3: tenuesweat12A1
	{
		displayName = "Tenue Sweat BAPE A3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat12A3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat12B3: tenuesweat12A1
	{
		displayName = "Tenue Sweat BAPE B3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat12B3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat13A1: tenuesweat1A1
	{
		displayName = "Tenue Sweat OFF WHITE VERT A1";
		picture = "\schaun_vetement\ui\hoodie\13.paa";
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\vert\hname2.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat13A1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat13B1: tenuesweat13A1
	{
		displayName = "Tenue Sweat OFF WHITE VERT B1";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat13B1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat13A2: tenuesweat13A1
	{
		displayName = "Tenue Sweat OFF WHITE VERT A2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat13A2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat13B2: tenuesweat13A1
	{
		displayName = "Tenue Sweat OFF WHITE VERT B2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat13B2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat13A3: tenuesweat13A1
	{
		displayName = "Tenue Sweat OFF WHITE VERT A3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat13A3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat13B3: tenuesweat13A1
	{
		displayName = "Tenue Sweat OFF WHITE VERT B3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat13B3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat14A1: tenuesweat1A1
	{
		displayName = "Tenue Sweat Lacoste A1";
		picture = "\schaun_vetement\ui\hoodie\14.paa";
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\bleu\gnamelacoste.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat14A1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat14B1: tenuesweat14A1
	{
		displayName = "Tenue Sweat Lacoste B1";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat14B1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat14C1: tenuesweat14A1
	{
		displayName = "Tenue Sweat Lacoste C1";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat14C1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat14A2: tenuesweat14A1
	{
		displayName = "Tenue Sweat Lacoste A2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat14A2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat14B2: tenuesweat14A1
	{
		displayName = "Tenue Sweat Lacoste B2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat14B2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat14C2: tenuesweat14A1
	{
		displayName = "Tenue Sweat Lacoste C2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat14C2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat14A3: tenuesweat14A1
	{
		displayName = "Tenue Sweat Lacoste A3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat14A3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat14B3: tenuesweat14A1
	{
		displayName = "Tenue Sweat Lacoste B3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat14B3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat14C3: tenuesweat14A1
	{
		displayName = "Tenue Sweat Lacoste C3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat14C3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat15A1: tenuesweat1A1
	{
		displayName = "Tenue Sweat Guess A1";
		picture = "\schaun_vetement\ui\hoodie\15.paa";
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\bleu\uppr_diff_008_g_uniGUESS.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat15A1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat15B1: tenuesweat15A1
	{
		displayName = "Tenue Sweat Guess B1";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat15B1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat15C1: tenuesweat15A1
	{
		displayName = "Tenue Sweat Guess C1";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat15C1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat15A2: tenuesweat15A1
	{
		displayName = "Tenue Sweat Guess A2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat15A2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat15B2: tenuesweat15A1
	{
		displayName = "Tenue Sweat Guess B2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat15B2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat15C2: tenuesweat15A1
	{
		displayName = "Tenue Sweat Guess C2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat15C2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat15A3: tenuesweat15A1
	{
		displayName = "Tenue Sweat Guess A3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat15A3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat15B3: tenuesweat15A1
	{
		displayName = "Tenue Sweat Guess B3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat15B3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat15C3: tenuesweat15A1
	{
		displayName = "Tenue Sweat Guess C3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat15C3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat16A1: tenuesweat1A1
	{
		displayName = "Tenue Sweat OFF WHITE BLACK CROIX A1";
		picture = "\schaun_vetement\ui\hoodie\16.paa";
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\BlackGris\fname.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat16A1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat16B1: tenuesweat16A1
	{
		displayName = "Tenue Sweat OFF WHITE BLACK CROIX B1";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat16B1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat16A2: tenuesweat16A1
	{
		displayName = "Tenue Sweat OFF WHITE BLACK CROIX A2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat16A2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat16B2: tenuesweat16A1
	{
		displayName = "Tenue Sweat OFF WHITE BLACK CROIX B2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat16B2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat16A3: tenuesweat16A1
	{
		displayName = "Tenue Sweat OFF WHITE BLACK CROIX A3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat16A3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat16B3: tenuesweat16A1
	{
		displayName = "Tenue Sweat OFF WHITE BLACK CROIX B3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat16B3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat17A1: tenuesweat1A1
	{
		displayName = "Tenue Sweat OFF WHITE Mona Lisa Noir A1";
		picture = "\schaun_vetement\ui\hoodie\17.paa";
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\BlackGris\gname22.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat17A1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat17B1: tenuesweat17A1
	{
		displayName = "Tenue Sweat OFF WHITE Mona Lisa Noir B1";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat17B1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat17A2: tenuesweat17A1
	{
		displayName = "Tenue Sweat OFF WHITE Mona Lisa Noir A2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat17A2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat17B2: tenuesweat17A1
	{
		displayName = "Tenue Sweat OFF WHITE Mona Lisa Noir B2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat17B2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat17A3: tenuesweat17A1
	{
		displayName = "Tenue Sweat OFF WHITE Mona Lisa Noir A3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat17A3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat17B3: tenuesweat17A1
	{
		displayName = "Tenue Sweat OFF WHITE Mona Lisa Noir B3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat17B3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat18A1: tenuesweat1A1
	{
		displayName = "Tenue Sweat OFF WHITE BLACK AND WHITE A1";
		picture = "\schaun_vetement\ui\hoodie\18.paa";
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\BlackGris\gnmaoff.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat18A1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat18B1: tenuesweat18A1
	{
		displayName = "Tenue Sweat OFF WHITE BLACK AND WHITE B1";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat18B1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat18A2: tenuesweat18A1
	{
		displayName = "Tenue Sweat OFF WHITE BLACK AND WHITE A2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat18A2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat18B2: tenuesweat18A1
	{
		displayName = "Tenue Sweat OFF WHITE BLACK AND WHITE B2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat18B2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat18A3: tenuesweat18A1
	{
		displayName = "Tenue Sweat OFF WHITE BLACK AND WHITE A3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat18A3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat18B3: tenuesweat18A1
	{
		displayName = "Tenue Sweat OFF WHITE BLACK AND WHITE B3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat18B3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat19A1: tenuesweat1A1
	{
		displayName = "Tenue Sweat Supreme Camo A1";
		picture = "\schaun_vetement\ui\hoodie\19.paa";
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\BlackGris\hoodiesuprcamo.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat19A1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat19B1: tenuesweat19A1
	{
		displayName = "Tenue Sweat Supreme Camo B1";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat19B1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat19A2: tenuesweat19A1
	{
		displayName = "Tenue Sweat Supreme Camo A2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat19A2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat19B2: tenuesweat19A1
	{
		displayName = "Tenue Sweat Supreme Camo B2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat19B2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat19A3: tenuesweat19A1
	{
		displayName = "Tenue Sweat Supreme Camo A3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat19A3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat19B3: tenuesweat19A1
	{
		displayName = "Tenue Sweat Supreme Camo B3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat19B3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat20A1: tenuesweat1A1
	{
		displayName = "Tenue Sweat Supreme COMMME des GARCONS BLACK A1";
		picture = "\schaun_vetement\ui\hoodie\20.paa";
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\BlackGris\uppr_diff_008_d_uniCMGsupr.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat20A1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat20B1: tenuesweat20A1
	{
		displayName = "Tenue Sweat Supreme COMMME des GARCONS BLACK B1";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat20B1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat20A2: tenuesweat20A1
	{
		displayName = "Tenue Sweat Supreme COMMME des GARCONS BLACK A2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat20A2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat20B2: tenuesweat20A1
	{
		displayName = "Tenue Sweat Supreme COMMME des GARCONS BLACK B2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat20B2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat20A3: tenuesweat20A1
	{
		displayName = "Tenue Sweat Supreme COMMME des GARCONS BLACK A3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat20A3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat20B3: tenuesweat20A1
	{
		displayName = "Tenue Sweat Supreme COMMME des GARCONS BLACK B3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat20B3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat21A1: tenuesweat1A1
	{
		displayName = "Tenue Sweat Kappa A1";
		picture = "\schaun_vetement\ui\hoodie\21.paa";
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\BlackGris\uppr_diff_008_h_uniKAPPA.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat21A1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat21B1: tenuesweat21A1
	{
		displayName = "Tenue Sweat Kappa B1";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat21B1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat21A2: tenuesweat21A1
	{
		displayName = "Tenue Sweat Kappa A2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat21A2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat21B2: tenuesweat21A1
	{
		displayName = "Tenue Sweat Kappa B2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat21B2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat21A3: tenuesweat21A1
	{
		displayName = "Tenue Sweat Kappa A3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat21A3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat21B3: tenuesweat21A1
	{
		displayName = "Tenue Sweat Kappa B3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat21B3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat22A1: tenuesweat1A1
	{
		displayName = "Tenue Sweat Dolce et Gabbana A1";
		picture = "\schaun_vetement\ui\hoodie\22.paa";
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\BlackGris\uppr_diff_008_m_unidg.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat22A1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat22B1: tenuesweat22A1
	{
		displayName = "Tenue Sweat Dolce et Gabbana B1";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat22B1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat22A2: tenuesweat22A1
	{
		displayName = "Tenue Sweat Dolce et Gabbana A2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat22A2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat22B2: tenuesweat22A1
	{
		displayName = "Tenue Sweat Dolce et Gabbana B2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat22B2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat22A3: tenuesweat22A1
	{
		displayName = "Tenue Sweat Dolce et Gabbana A3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat22A3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat22B3: tenuesweat22A1
	{
		displayName = "Tenue Sweat Dolce et Gabbana B3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat22B3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat23A1: tenuesweat1A1
	{
		displayName = "Tenue Sweat Lil Peep Rose A1";
		picture = "\schaun_vetement\ui\hoodie\23.paa";
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\rose\rose1.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat23A1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat23B1: tenuesweat23A1
	{
		displayName = "Tenue Sweat Lil Peep Rose B1";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat23B1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat23A2: tenuesweat23A1
	{
		displayName = "Tenue Sweat Lil Peep Rose A2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat23A2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat23B2: tenuesweat23A1
	{
		displayName = "Tenue Sweat Lil Peep Rose B2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat23B2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat23A3: tenuesweat23A1
	{
		displayName = "Tenue Sweat Lil Peep Rose A3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat23A3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat23B3: tenuesweat23A1
	{
		displayName = "Tenue Sweat Lil Peep Rose B3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat23B3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat24A1: tenuesweat1A1
	{
		displayName = "Tenue Sweat Anti Social Social Club Rose A1";
		picture = "\schaun_vetement\ui\hoodie\24.paa";
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\rose\rose2.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat24A1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat24B1: tenuesweat24A1
	{
		displayName = "Tenue Sweat Anti Social Social Club Rose B1";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat24B1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat24A2: tenuesweat24A1
	{
		displayName = "Tenue Sweat Anti Social Social Club Rose A2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat24A2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat24B2: tenuesweat24A1
	{
		displayName = "Tenue Sweat Anti Social Social Club Rose B2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat24B2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat24A3: tenuesweat24A1
	{
		displayName = "Tenue Sweat Anti Social Social Club Rose A3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat24A3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat24B3: tenuesweat24A1
	{
		displayName = "Tenue Sweat Anti Social Social Club Rose B3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat24B3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat25A1: tenuesweat1A1
	{
		displayName = "Tenue Sweat Concessionnaire Gris A1";
		picture = "\schaun_vetement\ui\hoodie\25.paa";
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\blackgris\concessgris.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat25A1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat25B1: tenuesweat25A1
	{
		displayName = "Tenue Sweat Concessionnaire Gris B1";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat25B1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat25A2: tenuesweat25A1
	{
		displayName = "Tenue Sweat Concessionnaire Gris A2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat25A2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat25B2: tenuesweat25A1
	{
		displayName = "Tenue Sweat Concessionnaire Gris B2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat25B2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat25A3: tenuesweat25A1
	{
		displayName = "Tenue Sweat Concessionnaire Gris A3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat25A3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat25B3: tenuesweat25A1
	{
		displayName = "Tenue Sweat Concessionnaire Gris B3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat25B3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat26A1: tenuesweat1A1
	{
		displayName = "Tenue Sweat Concessionnaire Noir A1";
		picture = "\schaun_vetement\ui\hoodie\26.paa";
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\blackgris\concessnoir.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat26A1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat26B1: tenuesweat26A1
	{
		displayName = "Tenue Sweat Concessionnaire Noir B1";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat26B1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat26A2: tenuesweat26A1
	{
		displayName = "Tenue Sweat Concessionnaire Noir A2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat26A2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat26B2: tenuesweat26A1
	{
		displayName = "Tenue Sweat Concessionnaire Noir B2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat26B2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat26A3: tenuesweat26A1
	{
		displayName = "Tenue Sweat Concessionnaire Noir A3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat26A3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatGOLD: tenuesweat1A1
	{
		displayName = "Tenue Sweat Gold";
		picture = "\schaun_vetement\ui\hoodie\hoodieor.paa";
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\sweatgold.paa"};
		hiddenSelectionsMaterials[] = {"\schaun_vetement\texture\tenue1\hoodie\Dior\sweatgold.rvmat"};
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatGOLD_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat32A1: tenuesweat1A1
	{
		displayName = "Tenue Sweat Corteiz Noir A1";
		picture = "\schaun_vetement\ui\hoodie\32.paa";
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\blackgris\corteiznoir.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat32A1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat32B1: tenuesweat32A1
	{
		displayName = "Tenue Sweat Corteiz Noir B1";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat32B1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat32A2: tenuesweat32A1
	{
		displayName = "Tenue Sweat Corteiz Noir A2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat32A2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat32B2: tenuesweat32A1
	{
		displayName = "Tenue Sweat Corteiz Noir B2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat32B2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat32A3: tenuesweat32A1
	{
		displayName = "Tenue Sweat Corteiz Noir A3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat32A3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat32B3: tenuesweat32A1
	{
		displayName = "Tenue Sweat Corteiz Noir B3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat32B3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat33A1: tenuesweat1A1
	{
		displayName = "Tenue Sweat Corteiz Gris A1";
		picture = "\schaun_vetement\ui\hoodie\33.paa";
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\blackgris\corteizgris.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat33A1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat33B1: tenuesweat33A1
	{
		displayName = "Tenue Sweat Corteiz Gris B1";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat33B1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat33A2: tenuesweat33A1
	{
		displayName = "Tenue Sweat Corteiz Gris A2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat33A2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat33B2: tenuesweat33A1
	{
		displayName = "Tenue Sweat Corteiz Gris B2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat33B2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat33A3: tenuesweat33A1
	{
		displayName = "Tenue Sweat Corteiz Gris A3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat33A3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat33B3: tenuesweat33A1
	{
		displayName = "Tenue Sweat Corteiz Gris B3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat33B3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat34A1: tenuesweat1A1
	{
		displayName = "Tenue Sweat Supreme Burberry A1";
		picture = "\schaun_vetement\ui\hoodie\34.paa";
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\blackgris\supremeburberry.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat34A1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat34B1: tenuesweat34A1
	{
		displayName = "Tenue Sweat Supreme Burberry B1";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat34B1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat34A2: tenuesweat34A1
	{
		displayName = "Tenue Sweat Supreme Burberry A2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat34A2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat34B2: tenuesweat34A1
	{
		displayName = "Tenue Sweat Supreme Burberry B2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat34B2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat34A3: tenuesweat34A1
	{
		displayName = "Tenue Sweat Supreme Burberry A3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat34A3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat34B3: tenuesweat34A1
	{
		displayName = "Tenue Sweat Supreme Burberry B3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat34B3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat35A1: tenuesweat1A1
	{
		displayName = "Tenue Sweat Stussy Noir A1";
		picture = "\schaun_vetement\ui\hoodie\35.paa";
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\blackgris\stussynoir.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat35A1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat35B1: tenuesweat35A1
	{
		displayName = "Tenue Sweat Stussy Noir B1";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat35B1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat35A2: tenuesweat35A1
	{
		displayName = "Tenue Sweat Stussy Noir A2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat35A2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat35B2: tenuesweat35A1
	{
		displayName = "Tenue Sweat Stussy Noir B2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat35B2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat35A3: tenuesweat35A1
	{
		displayName = "Tenue Sweat Stussy Noir A3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat35A3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat35B3: tenuesweat35A1
	{
		displayName = "Tenue Sweat Stussy Noir B3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat35B3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat36A1: tenuesweat1A1
	{
		displayName = "Tenue Sweat Stussy Blanc A1";
		picture = "\schaun_vetement\ui\hoodie\36.paa";
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\blackgris\stussyblanc.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat36A1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat36B1: tenuesweat36A1
	{
		displayName = "Tenue Sweat Stussy Blanc B1";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat36B1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat36A2: tenuesweat36A1
	{
		displayName = "Tenue Sweat Stussy Blanc A2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat36A2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat36B2: tenuesweat36A1
	{
		displayName = "Tenue Sweat Stussy Blanc B2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat36B2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat36A3: tenuesweat36A1
	{
		displayName = "Tenue Sweat Stussy Blanc A3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat36A3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweat36B3: tenuesweat36A1
	{
		displayName = "Tenue Sweat Stussy Blanc B3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweat36B3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo1A1: Uniform_Base
	{
		author = "schaun";
		scope = 2;
		displayName = "Tenue Sweat Cargo Supreme LV A1";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\rouge\gnamelv.paa"};
		picture = "\schaun_vetement\ui\hoodie\1.paa";
		model = "\schaun_vetement\tenue1sol.p3d";
		class Wounds
		{
			tex[] = {};
			mat[] = {};
		};
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo1A1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo1B1: tenuesweatcargo1A1
	{
		displayName = "Tenue Sweat Cargo Supreme LV B1";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo1B1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo1C1: tenuesweatcargo1A1
	{
		displayName = "Tenue Sweat Cargo Supreme LV C1";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo1C1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo1A2: tenuesweatcargo1A1
	{
		displayName = "Tenue Sweat Cargo Supreme LV A2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo1A2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo1B2: tenuesweatcargo1A1
	{
		displayName = "Tenue Sweat Cargo Supreme LV B2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo1B2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo1C2: tenuesweatcargo1A1
	{
		displayName = "Tenue Sweat Cargo Supreme LV C2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo1C2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo1A3: tenuesweatcargo1A1
	{
		displayName = "Tenue Sweat Cargo Supreme LV A3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo1A3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo1B3: tenuesweatcargo1A1
	{
		displayName = "Tenue Sweat Cargo Supreme LV B3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo1B3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo1C3: tenuesweatcargo1A1
	{
		displayName = "Tenue Sweat Cargo Supreme LV C3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo1C3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo2A1: tenuesweatcargo1A1
	{
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\rouge\sweatRouge.paa"};
		displayName = "Tenue Sweat Cargo Off White Mona Lisa Rouge A1";
		picture = "\schaun_vetement\ui\hoodie\2.paa";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo2A1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo2B1: tenuesweatcargo2A1
	{
		displayName = "Tenue Sweat Cargo Off White Mona Lisa Rouge B1";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo2B1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo2C1: tenuesweatcargo2A1
	{
		displayName = "Tenue Sweat Cargo Off White Mona Lisa Rouge C1";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo2C1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo2A2: tenuesweatcargo2A1
	{
		displayName = "Tenue Sweat Cargo Off White Mona Lisa Rouge A2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo2A2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo2B2: tenuesweatcargo2A1
	{
		displayName = "Tenue Sweat Cargo Off White Mona Lisa Rouge B2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo2B2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo2C2: tenuesweatcargo2A1
	{
		displayName = "Tenue Sweat Cargo Off White Mona Lisa Rouge C2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo2C2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo2A3: tenuesweatcargo2A1
	{
		displayName = "Tenue Sweat Cargo Off White Mona Lisa Rouge A3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo2A3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo2B3: tenuesweatcargo2A1
	{
		displayName = "Tenue Sweat Cargo Off White Mona Lisa Rouge B3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo2B3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo2C3: tenuesweatcargo2A1
	{
		displayName = "Tenue Sweat Cargo Off White Mona Lisa Rouge C3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo2C3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo3A1: tenuesweatcargo1A1
	{
		displayName = "Tenue Sweat Cargo Supreme Logo Rouge A1";
		picture = "\schaun_vetement\ui\hoodie\3.paa";
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\rouge\uppr_diff_008_b_uniredsuprem.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo3A1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo3B1: tenuesweatcargo3A1
	{
		displayName = "Tenue Sweat Cargo Supreme Logo Rouge B1";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo3B1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo3C1: tenuesweatcargo3A1
	{
		displayName = "Tenue Sweat Cargo Supreme Logo Rouge C1";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo3C1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo3A2: tenuesweatcargo3A1
	{
		displayName = "Tenue Sweat Cargo Supreme Logo Rouge A2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo3A2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo3B2: tenuesweatcargo3A1
	{
		displayName = "Tenue Sweat Cargo Supreme Logo Rouge B2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo3B2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo3C2: tenuesweatcargo3A1
	{
		displayName = "Tenue Sweat Cargo Supreme Logo Rouge C2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo3C2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo3A3: tenuesweatcargo3A1
	{
		displayName = "Tenue Sweat Cargo Supreme Logo Rouge A3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo3A3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo3B3: tenuesweatcargo3A1
	{
		displayName = "Tenue Sweat Cargo Supreme Logo Rouge B3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo3B3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo3C3: tenuesweatcargo3A1
	{
		displayName = "Tenue Sweat Cargo Supreme Logo Rouge C3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo3C3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo4A1: tenuesweatcargo1A1
	{
		displayName = "Tenue Sweat Cargo Supreme COMMME des GARCONS A1";
		picture = "\schaun_vetement\ui\hoodie\4.paa";
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\rouge\uppr_diff_008_c_unid.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo4A1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo4B1: tenuesweatcargo4A1
	{
		displayName = "Tenue Sweat Cargo Supreme COMMME des GARCONS B1";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo4B1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo4C1: tenuesweatcargo4A1
	{
		displayName = "Tenue Sweat Cargo Supreme COMMME des GARCONS C1";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo4C1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo4A2: tenuesweatcargo4A1
	{
		displayName = "Tenue Sweat Cargo Supreme COMMME des GARCONS A2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo4A2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo4B2: tenuesweatcargo4A1
	{
		displayName = "Tenue Sweat Cargo Supreme COMMME des GARCONS B2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo4B2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo4C2: tenuesweatcargo4A1
	{
		displayName = "Tenue Sweat Cargo Supreme COMMME des GARCONS C2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo4C2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo4A3: tenuesweatcargo4A1
	{
		displayName = "Tenue Sweat Cargo Supreme COMMME des GARCONS A3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo4A3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo4B3: tenuesweatcargo4A1
	{
		displayName = "Tenue Sweat Cargo Supreme COMMME des GARCONS B3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo4B3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo4C3: tenuesweatcargo4A1
	{
		displayName = "Tenue Sweat Cargo Supreme COMMME des GARCONS C3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo4C3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo5A1: tenuesweatcargo1A1
	{
		displayName = "Tenue Sweat Cargo COMMME des GARCONS A1";
		picture = "\schaun_vetement\ui\hoodie\5.paa";
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\rouge\uppr_diff_008_k_unicoeur.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo5A1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo5B1: tenuesweatcargo5A1
	{
		displayName = "Tenue Sweat Cargo COMMME des GARCONS B1";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo5B1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo5C1: tenuesweatcargo5A1
	{
		displayName = "Tenue Sweat Cargo COMMME des GARCONS C1";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo5C1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo5A2: tenuesweatcargo5A1
	{
		displayName = "Tenue Sweat Cargo COMMME des GARCONS A2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo5A2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo5B2: tenuesweatcargo5A1
	{
		displayName = "Tenue Sweat Cargo COMMME des GARCONS B2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo5B2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo5C2: tenuesweatcargo5A1
	{
		displayName = "Tenue Sweat Cargo COMMME des GARCONS C2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo5C2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo5A3: tenuesweatcargo5A1
	{
		displayName = "Tenue Sweat Cargo COMMME des GARCONS A3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo5A3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo5B3: tenuesweatcargo5A1
	{
		displayName = "Tenue Sweat Cargo COMMME des GARCONS B3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo5B3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo5C3: tenuesweatcargo5A1
	{
		displayName = "Tenue Sweat Cargo COMMME des GARCONS C3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo5C3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo6A1: tenuesweatcargo1A1
	{
		displayName = "Tenue Sweat Cargo Nike A1";
		picture = "\schaun_vetement\ui\hoodie\6.paa";
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\rouge\uppr_diff_008_l_uninike.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo6A1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo6B1: tenuesweatcargo6A1
	{
		displayName = "Tenue Sweat Cargo Nike B1";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo6B1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo6C1: tenuesweatcargo6A1
	{
		displayName = "Tenue Sweat Cargo Nike C1";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo6C1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo6A2: tenuesweatcargo6A1
	{
		displayName = "Tenue Sweat Cargo Nike A2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo6A2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo6B2: tenuesweatcargo6A1
	{
		displayName = "Tenue Sweat Cargo Nike B2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo6B2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo6C2: tenuesweatcargo6A1
	{
		displayName = "Tenue Sweat Cargo Nike C2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo6C2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo6A3: tenuesweatcargo6A1
	{
		displayName = "Tenue Sweat Cargo Nike A3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo6A3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo6B3: tenuesweatcargo6A1
	{
		displayName = "Tenue Sweat Cargo Nike B3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo6B3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo6C3: tenuesweatcargo6A1
	{
		displayName = "Tenue Sweat Cargo Nike C3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo6C3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo7A1: tenuesweatcargo1A1
	{
		displayName = "Tenue Sweat Cargo TRASHER A1";
		picture = "\schaun_vetement\ui\hoodie\7.paa";
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\orange\uppr_diff_000_a_unig.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo7A1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo7B1: tenuesweatcargo7A1
	{
		displayName = "Tenue Sweat Cargo TRASHER B1";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo7B1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo7C1: tenuesweatcargo7A1
	{
		displayName = "Tenue Sweat Cargo TRASHER C1";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo7C1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo7A2: tenuesweatcargo7A1
	{
		displayName = "Tenue Sweat Cargo TRASHER A2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo7A2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo7B2: tenuesweatcargo7A1
	{
		displayName = "Tenue Sweat Cargo TRASHER B2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo7B2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo7C2: tenuesweatcargo7A1
	{
		displayName = "Tenue Sweat Cargo TRASHER C2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo7C2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo7A3: tenuesweatcargo7A1
	{
		displayName = "Tenue Sweat Cargo TRASHER A3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo7A3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo7B3: tenuesweatcargo7A1
	{
		displayName = "Tenue Sweat Cargo TRASHER B3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo7B3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo7C3: tenuesweatcargo7A1
	{
		displayName = "Tenue Sweat Cargo TRASHER C3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo7C3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo8A1: tenuesweatcargo1A1
	{
		displayName = "Tenue Sweat Cargo OFF WHITE Blanc Orange A1";
		picture = "\schaun_vetement\ui\hoodie\8.paa";
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\orange\uppr_diff_000_a_uniOFFFWHITEEBANC.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo8A1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo8B1: tenuesweatcargo8A1
	{
		displayName = "Tenue Sweat Cargo OFF WHITE Blanc Orange B1";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo8B1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo8C1: tenuesweatcargo8A1
	{
		displayName = "Tenue Sweat Cargo OFF WHITE Blanc Orange C1";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo8C1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo8A2: tenuesweatcargo8A1
	{
		displayName = "Tenue Sweat Cargo OFF WHITE Blanc Orange A2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo8A2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo8B2: tenuesweatcargo8A1
	{
		displayName = "Tenue Sweat Cargo OFF WHITE Blanc Orange B2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo8B2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo8C2: tenuesweatcargo8A1
	{
		displayName = "Tenue Sweat Cargo OFF WHITE Blanc Orange C2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo8C2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo8A3: tenuesweatcargo8A1
	{
		displayName = "Tenue Sweat Cargo OFF WHITE Blanc Orange A3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo8A3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo8B3: tenuesweatcargo8A1
	{
		displayName = "Tenue Sweat Cargo OFF WHITE Blanc Orange B3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo8B3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo8C3: tenuesweatcargo8A1
	{
		displayName = "Tenue Sweat Cargo OFF WHITE Blanc Orange C3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo8C3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo9A1: tenuesweatcargo1A1
	{
		displayName = "Tenue Sweat Cargo OFF WHITE Noir Orange A1";
		picture = "\schaun_vetement\ui\hoodie\9.paa";
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\orange\uppr_diff_000_a_uniOFFFWHITEENOIR.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo9A1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo9B1: tenuesweatcargo9A1
	{
		displayName = "Tenue Sweat Cargo OFF WHITE Noir Orange B1";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo9B1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo9C1: tenuesweatcargo9A1
	{
		displayName = "Tenue Sweat Cargo OFF WHITE Noir Orange C1";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo9C1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo9A2: tenuesweatcargo9A1
	{
		displayName = "Tenue Sweat Cargo OFF WHITE Noir Orange A2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo9A2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo9B2: tenuesweatcargo9A1
	{
		displayName = "Tenue Sweat Cargo OFF WHITE Noir Orange B2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo9B2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo9C2: tenuesweatcargo9A1
	{
		displayName = "Tenue Sweat Cargo OFF WHITE Noir Orange C2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo9C2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo9A3: tenuesweatcargo9A1
	{
		displayName = "Tenue Sweat Cargo OFF WHITE Noir Orange A3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo9A3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo9B3: tenuesweatcargo9A1
	{
		displayName = "Tenue Sweat Cargo OFF WHITE Noir Orange B3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo9B3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo9C3: tenuesweatcargo9A1
	{
		displayName = "Tenue Sweat Cargo OFF WHITE Noir Orange C3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo9C3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo10A1: tenuesweatcargo1A1
	{
		displayName = "Tenue Sweat Cargo Stone Island Jaune A1";
		picture = "\schaun_vetement\ui\hoodie\10.paa";
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\jaune\enameSTONE.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo10A1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo10B1: tenuesweatcargo10A1
	{
		displayName = "Tenue Sweat Cargo Stone Island Jaune B1";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo10B1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo10A2: tenuesweatcargo10A1
	{
		displayName = "Tenue Sweat Cargo Stone Island Jaune A2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo10A2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo10B2: tenuesweatcargo10A1
	{
		displayName = "Tenue Sweat Cargo Stone Island Jaune B2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo10B2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo10A3: tenuesweatcargo10A1
	{
		displayName = "Tenue Sweat Cargo Stone Island Jaune A3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo10A3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo10B3: tenuesweatcargo10A1
	{
		displayName = "Tenue Sweat Cargo Stone Island Jaune B3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo10B3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo11A1: tenuesweatcargo1A1
	{
		picture = "\schaun_vetement\ui\hoodie\11.paa";
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\jaune\gnametravis.paa"};
		displayName = "Tenue Sweat Cargo Travis Scott Jaune A1";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo11A1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo11B1: tenuesweatcargo11A1
	{
		displayName = "Tenue Sweat Cargo Travis Scott Jaune B1";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo11B1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo11A2: tenuesweatcargo11A1
	{
		displayName = "Tenue Sweat Cargo Travis Scott Jaune A2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo11A2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo11B2: tenuesweatcargo11A1
	{
		displayName = "Tenue Sweat Cargo Travis Scott Jaune B2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo11B2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo11A3: tenuesweatcargo11A1
	{
		displayName = "Tenue Sweat Cargo Travis Scott Jaune A3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo11A3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo11B3: tenuesweatcargo11A1
	{
		displayName = "Tenue Sweat Cargo Travis Scott Jaune B3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo11B3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo12A1: tenuesweatcargo1A1
	{
		displayName = "Tenue Sweat Cargo BAPE A1";
		picture = "\schaun_vetement\ui\hoodie\12.paa";
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\vert\bapee.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo12A1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo12B1: tenuesweatcargo12A1
	{
		displayName = "Tenue Sweat Cargo BAPE B1";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo12B1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo12A2: tenuesweatcargo12A1
	{
		displayName = "Tenue Sweat Cargo BAPE A2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo12A2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo12B2: tenuesweatcargo12A1
	{
		displayName = "Tenue Sweat Cargo BAPE B2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo12B2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo12A3: tenuesweatcargo12A1
	{
		displayName = "Tenue Sweat Cargo BAPE A3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo12A3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo12B3: tenuesweatcargo12A1
	{
		displayName = "Tenue Sweat Cargo BAPE B3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo12B3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo13A1: tenuesweatcargo1A1
	{
		displayName = "Tenue Sweat Cargo OFF WHITE VERT A1";
		picture = "\schaun_vetement\ui\hoodie\13.paa";
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\vert\hname2.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo13A1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo13B1: tenuesweatcargo13A1
	{
		displayName = "Tenue Sweat Cargo OFF WHITE VERT B1";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo13B1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo13A2: tenuesweatcargo13A1
	{
		displayName = "Tenue Sweat Cargo OFF WHITE VERT A2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo13A2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo13B2: tenuesweatcargo13A1
	{
		displayName = "Tenue Sweat Cargo OFF WHITE VERT B2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo13B2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo13A3: tenuesweatcargo13A1
	{
		displayName = "Tenue Sweat Cargo OFF WHITE VERT A3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo13A3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo13B3: tenuesweatcargo13A1
	{
		displayName = "Tenue Sweat Cargo OFF WHITE VERT B3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo13B3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo14A1: tenuesweatcargo1A1
	{
		displayName = "Tenue Sweat Cargo Lacoste A1";
		picture = "\schaun_vetement\ui\hoodie\14.paa";
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\bleu\gnamelacoste.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo14A1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo14B1: tenuesweatcargo14A1
	{
		displayName = "Tenue Sweat Cargo Lacoste B1";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo14B1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo14C1: tenuesweatcargo14A1
	{
		displayName = "Tenue Sweat Cargo Lacoste C1";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo14C1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo14A2: tenuesweatcargo14A1
	{
		displayName = "Tenue Sweat Cargo Lacoste A2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo14A2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo14B2: tenuesweatcargo14A1
	{
		displayName = "Tenue Sweat Cargo Lacoste B2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo14B2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo14C2: tenuesweatcargo14A1
	{
		displayName = "Tenue Sweat Cargo Lacoste C2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo14C2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo14A3: tenuesweatcargo14A1
	{
		displayName = "Tenue Sweat Cargo Lacoste A3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo14A3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo14B3: tenuesweatcargo14A1
	{
		displayName = "Tenue Sweat Cargo Lacoste B3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo14B3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo14C3: tenuesweatcargo14A1
	{
		displayName = "Tenue Sweat Cargo Lacoste C3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo14C3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo15A1: tenuesweatcargo1A1
	{
		displayName = "Tenue Sweat Cargo Guess A1";
		picture = "\schaun_vetement\ui\hoodie\15.paa";
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\bleu\uppr_diff_008_g_uniGUESS.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo15A1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo15B1: tenuesweatcargo15A1
	{
		displayName = "Tenue Sweat Cargo Guess B1";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo15B1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo15C1: tenuesweatcargo15A1
	{
		displayName = "Tenue Sweat Cargo Guess C1";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo15C1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo15A2: tenuesweatcargo15A1
	{
		displayName = "Tenue Sweat Cargo Guess A2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo15A2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo15B2: tenuesweatcargo15A1
	{
		displayName = "Tenue Sweat Cargo Guess B2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo15B2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo15C2: tenuesweatcargo15A1
	{
		displayName = "Tenue Sweat Cargo Guess C2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo15C2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo15A3: tenuesweatcargo15A1
	{
		displayName = "Tenue Sweat Cargo Guess A3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo15A3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo15B3: tenuesweatcargo15A1
	{
		displayName = "Tenue Sweat Cargo Guess B3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo15B3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo15C3: tenuesweatcargo15A1
	{
		displayName = "Tenue Sweat Cargo Guess C3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo15C3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo16A1: tenuesweatcargo1A1
	{
		displayName = "Tenue Sweat Cargo OFF WHITE BLACK CROIX A1";
		picture = "\schaun_vetement\ui\hoodie\16.paa";
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\BlackGris\fname.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo16A1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo16B1: tenuesweatcargo16A1
	{
		displayName = "Tenue Sweat Cargo OFF WHITE BLACK CROIX B1";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo16B1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo16A2: tenuesweatcargo16A1
	{
		displayName = "Tenue Sweat Cargo OFF WHITE BLACK CROIX A2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo16A2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo16B2: tenuesweatcargo16A1
	{
		displayName = "Tenue Sweat Cargo OFF WHITE BLACK CROIX B2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo16B2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo16A3: tenuesweatcargo16A1
	{
		displayName = "Tenue Sweat Cargo OFF WHITE BLACK CROIX A3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo16A3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo16B3: tenuesweatcargo16A1
	{
		displayName = "Tenue Sweat Cargo OFF WHITE BLACK CROIX B3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo16B3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo17A1: tenuesweatcargo1A1
	{
		displayName = "Tenue Sweat Cargo OFF WHITE Mona Lisa Noir A1";
		picture = "\schaun_vetement\ui\hoodie\17.paa";
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\BlackGris\gname22.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo17A1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo17B1: tenuesweatcargo17A1
	{
		displayName = "Tenue Sweat Cargo OFF WHITE Mona Lisa Noir B1";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo17B1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo17A2: tenuesweatcargo17A1
	{
		displayName = "Tenue Sweat Cargo OFF WHITE Mona Lisa Noir A2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo17A2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo17B2: tenuesweatcargo17A1
	{
		displayName = "Tenue Sweat Cargo OFF WHITE Mona Lisa Noir B2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo17B2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo17A3: tenuesweatcargo17A1
	{
		displayName = "Tenue Sweat Cargo OFF WHITE Mona Lisa Noir A3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo17A3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo17B3: tenuesweatcargo17A1
	{
		displayName = "Tenue Sweat Cargo OFF WHITE Mona Lisa Noir B3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo17B3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo18A1: tenuesweatcargo1A1
	{
		displayName = "Tenue Sweat Cargo OFF WHITE BLACK AND WHITE A1";
		picture = "\schaun_vetement\ui\hoodie\18.paa";
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\BlackGris\gnmaoff.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo18A1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo18B1: tenuesweatcargo18A1
	{
		displayName = "Tenue Sweat Cargo OFF WHITE BLACK AND WHITE B1";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo18B1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo18A2: tenuesweatcargo18A1
	{
		displayName = "Tenue Sweat Cargo OFF WHITE BLACK AND WHITE A2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo18A2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo18B2: tenuesweatcargo18A1
	{
		displayName = "Tenue Sweat Cargo OFF WHITE BLACK AND WHITE B2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo18B2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo18A3: tenuesweatcargo18A1
	{
		displayName = "Tenue Sweat Cargo OFF WHITE BLACK AND WHITE A3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo18A3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo18B3: tenuesweatcargo18A1
	{
		displayName = "Tenue Sweat Cargo OFF WHITE BLACK AND WHITE B3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo18B3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo19A1: tenuesweatcargo1A1
	{
		displayName = "Tenue Sweat Cargo Supreme Camo A1";
		picture = "\schaun_vetement\ui\hoodie\19.paa";
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\BlackGris\hoodiesuprcamo.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo19A1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo19B1: tenuesweatcargo19A1
	{
		displayName = "Tenue Sweat Cargo Supreme Camo B1";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo19B1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo19A2: tenuesweatcargo19A1
	{
		displayName = "Tenue Sweat Cargo Supreme Camo A2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo19A2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo19B2: tenuesweatcargo19A1
	{
		displayName = "Tenue Sweat Cargo Supreme Camo B2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo19B2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo19A3: tenuesweatcargo19A1
	{
		displayName = "Tenue Sweat Cargo Supreme Camo A3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo19A3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo19B3: tenuesweatcargo19A1
	{
		displayName = "Tenue Sweat Cargo Supreme Camo B3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo19B3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo20A1: tenuesweatcargo1A1
	{
		displayName = "Tenue Sweat Cargo Supreme COMMME des GARCONS BLACK A1";
		picture = "\schaun_vetement\ui\hoodie\20.paa";
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\BlackGris\uppr_diff_008_d_uniCMGsupr.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo20A1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo20B1: tenuesweatcargo20A1
	{
		displayName = "Tenue Sweat Cargo Supreme COMMME des GARCONS BLACK B1";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo20B1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo20A2: tenuesweatcargo20A1
	{
		displayName = "Tenue Sweat Cargo Supreme COMMME des GARCONS BLACK A2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo20A2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo20B2: tenuesweatcargo20A1
	{
		displayName = "Tenue Sweat Cargo Supreme COMMME des GARCONS BLACK B2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo20B2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo20A3: tenuesweatcargo20A1
	{
		displayName = "Tenue Sweat Cargo Supreme COMMME des GARCONS BLACK A3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo20A3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo20B3: tenuesweatcargo20A1
	{
		displayName = "Tenue Sweat Cargo Supreme COMMME des GARCONS BLACK B3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo20B3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo21A1: tenuesweatcargo1A1
	{
		displayName = "Tenue Sweat Cargo Kappa A1";
		picture = "\schaun_vetement\ui\hoodie\21.paa";
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\BlackGris\uppr_diff_008_h_uniKAPPA.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo21A1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo21B1: tenuesweatcargo21A1
	{
		displayName = "Tenue Sweat Cargo Kappa B1";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo21B1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo21A2: tenuesweatcargo21A1
	{
		displayName = "Tenue Sweat Cargo Kappa A2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo21A2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo21B2: tenuesweatcargo21A1
	{
		displayName = "Tenue Sweat Cargo Kappa B2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo21B2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo21A3: tenuesweatcargo21A1
	{
		displayName = "Tenue Sweat Cargo Kappa A3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo21A3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo21B3: tenuesweatcargo21A1
	{
		displayName = "Tenue Sweat Cargo Kappa B3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo21B3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo22A1: tenuesweatcargo1A1
	{
		displayName = "Tenue Sweat Cargo Dolce et Gabbana A1";
		picture = "\schaun_vetement\ui\hoodie\22.paa";
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\BlackGris\uppr_diff_008_m_unidg.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo22A1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo22B1: tenuesweatcargo22A1
	{
		displayName = "Tenue Sweat Cargo Dolce et Gabbana B1";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo22B1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo22A2: tenuesweatcargo22A1
	{
		displayName = "Tenue Sweat Cargo Dolce et Gabbana A2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo22A2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo22B2: tenuesweatcargo22A1
	{
		displayName = "Tenue Sweat Cargo Dolce et Gabbana B2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo22B2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo22A3: tenuesweatcargo22A1
	{
		displayName = "Tenue Sweat Cargo Dolce et Gabbana A3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo22A3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo22B3: tenuesweatcargo22A1
	{
		displayName = "Tenue Sweat Cargo Dolce et Gabbana B3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo22B3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo23A1: tenuesweatcargo1A1
	{
		displayName = "Tenue Sweat Cargo Lil Peep Rose A1";
		picture = "\schaun_vetement\ui\hoodie\23.paa";
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\rose\rose1.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo23A1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo23B1: tenuesweatcargo23A1
	{
		displayName = "Tenue Sweat Cargo Lil Peep Rose B1";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo23B1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo23A2: tenuesweatcargo23A1
	{
		displayName = "Tenue Sweat Cargo Lil Peep Rose A2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo23A2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo23B2: tenuesweatcargo23A1
	{
		displayName = "Tenue Sweat Cargo Lil Peep Rose B2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo23B2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo23A3: tenuesweatcargo23A1
	{
		displayName = "Tenue Sweat Cargo Lil Peep Rose A3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo23A3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo23B3: tenuesweatcargo23A1
	{
		displayName = "Tenue Sweat Cargo Lil Peep Rose B3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo23B3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo24A1: tenuesweatcargo1A1
	{
		displayName = "Tenue Sweat Cargo Anti Social Social Club Rose A1";
		picture = "\schaun_vetement\ui\hoodie\24.paa";
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\rose\rose2.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo24A1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo24B1: tenuesweatcargo24A1
	{
		displayName = "Tenue Sweat Cargo Anti Social Social Club Rose B1";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo24B1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo24A2: tenuesweatcargo24A1
	{
		displayName = "Tenue Sweat Cargo Anti Social Social Club Rose A2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo24A2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo24B2: tenuesweatcargo24A1
	{
		displayName = "Tenue Sweat Cargo Anti Social Social Club Rose B2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo24B2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo24A3: tenuesweatcargo24A1
	{
		displayName = "Tenue Sweat Cargo Anti Social Social Club Rose A3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo24A3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo24B3: tenuesweatcargo24A1
	{
		displayName = "Tenue Sweat Cargo Anti Social Social Club Rose B3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo24B3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo25A1: tenuesweatcargo1A1
	{
		displayName = "Tenue Sweat Cargo Concessionnaire Gris A1";
		picture = "\schaun_vetement\ui\hoodie\25.paa";
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\blackgris\concessgris.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo25A1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo25B1: tenuesweatcargo25A1
	{
		displayName = "Tenue Sweat Cargo Concessionnaire Gris B1";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo25B1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo25A2: tenuesweatcargo25A1
	{
		displayName = "Tenue Sweat Cargo Concessionnaire Gris A2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo25A2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo25B2: tenuesweatcargo25A1
	{
		displayName = "Tenue Sweat Cargo Concessionnaire Gris B2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo25B2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo25A3: tenuesweatcargo25A1
	{
		displayName = "Tenue Sweat Cargo Concessionnaire Gris A3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo25A3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo25B3: tenuesweatcargo25A1
	{
		displayName = "Tenue Sweat Cargo Concessionnaire Gris B3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo25B3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo26A1: tenuesweatcargo1A1
	{
		displayName = "Tenue Sweat Cargo Concessionnaire Noir A1";
		picture = "\schaun_vetement\ui\hoodie\26.paa";
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\blackgris\concessnoir.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo26A1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo26B1: tenuesweatcargo26A1
	{
		displayName = "Tenue Sweat Cargo Concessionnaire Noir B1";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo26B1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo26A2: tenuesweatcargo26A1
	{
		displayName = "Tenue Sweat Cargo Concessionnaire Noir A2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo26A2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo26B2: tenuesweatcargo26A1
	{
		displayName = "Tenue Sweat Cargo Concessionnaire Noir B2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo26B2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo26A3: tenuesweatcargo26A1
	{
		displayName = "Tenue Sweat Cargo Concessionnaire Noir A3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo26A3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo26B3: tenuesweatcargo26A1
	{
		displayName = "Tenue Sweat Cargo Concessionnaire Noir B3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo26B3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo32A1: tenuesweatcargo1A1
	{
		displayName = "Tenue Sweat Cargo Corteiz Noir A1";
		picture = "\schaun_vetement\ui\hoodie\32.paa";
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\blackgris\corteiznoir.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo32A1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo32B1: tenuesweatcargo32A1
	{
		displayName = "Tenue Sweat Cargo Corteiz Noir B1";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo32B1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo32A2: tenuesweatcargo32A1
	{
		displayName = "Tenue Sweat Cargo Corteiz Noir A2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo32A2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo32B2: tenuesweatcargo32A1
	{
		displayName = "Tenue Sweat Cargo Corteiz Noir B2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo32B2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo32A3: tenuesweatcargo32A1
	{
		displayName = "Tenue Sweat Cargo Corteiz Noir A3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo32A3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo32B3: tenuesweatcargo32A1
	{
		displayName = "Tenue Sweat Cargo Corteiz Noir B3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo32B3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo33A1: tenuesweatcargo1A1
	{
		displayName = "Tenue Sweat Cargo Corteiz Gris A1";
		picture = "\schaun_vetement\ui\hoodie\33.paa";
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\blackgris\corteizgris.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo33A1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo33B1: tenuesweatcargo33A1
	{
		displayName = "Tenue Sweat Cargo Corteiz Gris B1";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo33B1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo33A2: tenuesweatcargo33A1
	{
		displayName = "Tenue Sweat Cargo Corteiz Gris A2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo33A2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo33B2: tenuesweatcargo33A1
	{
		displayName = "Tenue Sweat Cargo Corteiz Gris B2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo33B2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo33A3: tenuesweatcargo33A1
	{
		displayName = "Tenue Sweat Cargo Corteiz Gris A3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo33A3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo33B3: tenuesweatcargo33A1
	{
		displayName = "Tenue Sweat Cargo Corteiz Gris B3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo33B3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo34A1: tenuesweatcargo1A1
	{
		displayName = "Tenue Sweat Cargo Supreme Burberry A1";
		picture = "\schaun_vetement\ui\hoodie\34.paa";
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\blackgris\supremeburberry.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo34A1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo34B1: tenuesweatcargo34A1
	{
		displayName = "Tenue Sweat Cargo Supreme Burberry B1";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo34B1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo34A2: tenuesweatcargo34A1
	{
		displayName = "Tenue Sweat Cargo Supreme Burberry A2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo34A2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo34B2: tenuesweatcargo34A1
	{
		displayName = "Tenue Sweat Cargo Supreme Burberry B2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo34B2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo34A3: tenuesweatcargo34A1
	{
		displayName = "Tenue Sweat Cargo Supreme Burberry A3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo34A3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo34B3: tenuesweatcargo34A1
	{
		displayName = "Tenue Sweat Cargo Supreme Burberry B3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo34B3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo35A1: tenuesweatcargo1A1
	{
		displayName = "Tenue Sweat Cargo Stussy Noir A1";
		picture = "\schaun_vetement\ui\hoodie\35.paa";
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\blackgris\stussynoir.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo35A1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo35B1: tenuesweatcargo35A1
	{
		displayName = "Tenue Sweat Cargo Stussy Noir B1";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo35B1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo35A2: tenuesweatcargo35A1
	{
		displayName = "Tenue Sweat Cargo Stussy Noir A2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo35A2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo35B2: tenuesweatcargo35A1
	{
		displayName = "Tenue Sweat Cargo Stussy Noir B2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo35B2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo35A3: tenuesweatcargo35A1
	{
		displayName = "Tenue Sweat Cargo Stussy Noir A3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo35A3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo35B3: tenuesweatcargo35A1
	{
		displayName = "Tenue Sweat Cargo Stussy Noir B3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo35B3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo36A1: tenuesweatcargo1A1
	{
		displayName = "Tenue Sweat Cargo Stussy Blanc A1";
		picture = "\schaun_vetement\ui\hoodie\36.paa";
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\blackgris\stussyblanc.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo36A1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo36B1: tenuesweatcargo36A1
	{
		displayName = "Tenue Sweat Cargo Stussy Blanc B1";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo36B1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo36A2: tenuesweatcargo36A1
	{
		displayName = "Tenue Sweat Cargo Stussy Blanc A2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo36A2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo36B2: tenuesweatcargo36A1
	{
		displayName = "Tenue Sweat Cargo Stussy Blanc B2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo36B2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo36A3: tenuesweatcargo36A1
	{
		displayName = "Tenue Sweat Cargo Stussy Blanc A3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo36A3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo36B3: tenuesweatcargo36A1
	{
		displayName = "Tenue Sweat Cargo Stussy Blanc B3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo36B3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo37A1: tenuesweatcargo1A1
	{
		displayName = "Tenue Sweat Cargo Noir A1";
		picture = "\schaun_vetement\ui\hoodie\37.paa";
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\tenue1\hoodie\blackgris\black.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo37A1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo37B1: tenuesweatcargo37A1
	{
		displayName = "Tenue Sweat Cargo Noir B1";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo37B1_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo37A2: tenuesweatcargo37A1
	{
		displayName = "Tenue Sweat Cargo Noir A2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo37A2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo37B2: tenuesweatcargo37A1
	{
		displayName = "Tenue Sweat Cargo Noir B2";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo37B2_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo37A3: tenuesweatcargo37A1
	{
		displayName = "Tenue Sweat Cargo Noir A3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo37A3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class tenuesweatcargo37B3: tenuesweatcargo37A1
	{
		displayName = "Tenue Sweat Cargo Noir B3";
		class ItemInfo: UniformItem
		{
			uniformClass = "tenuesweatcargo37B3_b";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class doudoune: Vest_Camo_Base
	{
		scope = 2;
		author = "schaun";
		displayName = "Doudoune The North Face";
		picture = "\schaun_vetement\ui\ui_doudouneTNF.paa";
		transportMaxMagazines = 5;
		model = "\schaun_vetement\doudoune.p3d";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\doudoune\doudouneTNF.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\schaun_vetement\doudoune.p3d";
			maximumLoad = 15;
			mass = 40;
			hiddenSelections[] = {"Camo1"};
			hiddenSelectionsTextures[] = {"\schaun_vetement\texture\doudoune\doudouneTNF.paa"};
			overlaySelectionsInfo[] = {"ghillie_hide"};
			containerClass = "Supply100";
		};
	};
	class doudounebleu: Vest_Camo_Base
	{
		scope = 2;
		author = "schaun";
		displayName = "Doudoune TNF Bleu";
		picture = "\schaun_vetement\ui\ui_doudouneTNF.paa";
		transportMaxMagazines = 5;
		model = "\schaun_vetement\doudoune.p3d";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\doudoune\doudouneTNFbleu.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\schaun_vetement\doudoune.p3d";
			maximumLoad = 15;
			mass = 40;
			hiddenSelections[] = {"Camo1"};
			hiddenSelectionsTextures[] = {"\schaun_vetement\texture\doudoune\doudouneTNFbleu.paa"};
			overlaySelectionsInfo[] = {"ghillie_hide"};
			containerClass = "Supply100";
		};
	};
	class doudounejaune: Vest_Camo_Base
	{
		scope = 2;
		author = "schaun";
		displayName = "Doudoune TNF Jaune";
		picture = "\schaun_vetement\ui\ui_doudouneTNF.paa";
		transportMaxMagazines = 5;
		model = "\schaun_vetement\doudoune.p3d";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\doudoune\doudouneTNFjaune.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\schaun_vetement\doudoune.p3d";
			maximumLoad = 15;
			mass = 40;
			hiddenSelections[] = {"Camo1"};
			hiddenSelectionsTextures[] = {"\schaun_vetement\texture\doudoune\doudouneTNFjaune.paa"};
			overlaySelectionsInfo[] = {"ghillie_hide"};
			containerClass = "Supply100";
		};
	};
	class doudounegris: Vest_Camo_Base
	{
		scope = 2;
		author = "schaun";
		displayName = "Doudoune TNF Gris";
		picture = "\schaun_vetement\ui\ui_doudouneTNF.paa";
		transportMaxMagazines = 5;
		model = "\schaun_vetement\doudoune.p3d";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\doudoune\doudouneTNFgris.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\schaun_vetement\doudoune.p3d";
			maximumLoad = 15;
			mass = 40;
			hiddenSelections[] = {"Camo1"};
			hiddenSelectionsTextures[] = {"\schaun_vetement\texture\doudoune\doudouneTNFgris.paa"};
			overlaySelectionsInfo[] = {"ghillie_hide"};
			containerClass = "Supply100";
		};
	};
	class doudouneleopard: Vest_Camo_Base
	{
		scope = 2;
		author = "schaun";
		displayName = "Doudoune TNF Leopard";
		picture = "\schaun_vetement\ui\ui_doudouneTNF.paa";
		transportMaxMagazines = 5;
		model = "\schaun_vetement\doudoune.p3d";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\doudoune\doudouneTNFleopard.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\schaun_vetement\doudoune.p3d";
			maximumLoad = 15;
			mass = 40;
			hiddenSelections[] = {"Camo1"};
			hiddenSelectionsTextures[] = {"\schaun_vetement\texture\doudoune\doudouneTNFleopard.paa"};
			overlaySelectionsInfo[] = {"ghillie_hide"};
			containerClass = "Supply100";
		};
	};
	class doudouneleopardb: Vest_Camo_Base
	{
		scope = 2;
		author = "schaun";
		displayName = "Doudoune TNF Leopard Black";
		picture = "\schaun_vetement\ui\ui_doudouneTNF.paa";
		transportMaxMagazines = 5;
		model = "\schaun_vetement\doudoune.p3d";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\doudoune\doudouneTNFleopardn.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\schaun_vetement\doudoune.p3d";
			maximumLoad = 15;
			mass = 40;
			hiddenSelections[] = {"Camo1"};
			hiddenSelectionsTextures[] = {"\schaun_vetement\texture\doudoune\doudouneTNFleopardn.paa"};
			overlaySelectionsInfo[] = {"ghillie_hide"};
			containerClass = "Supply100";
		};
	};
	class doudounemontagne: Vest_Camo_Base
	{
		scope = 2;
		author = "schaun";
		displayName = "Doudoune TNF Montagne";
		picture = "\schaun_vetement\ui\ui_doudouneTNF.paa";
		transportMaxMagazines = 5;
		model = "\schaun_vetement\doudoune.p3d";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\doudoune\doudouneTNFmontagne.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\schaun_vetement\doudoune.p3d";
			maximumLoad = 15;
			mass = 40;
			hiddenSelections[] = {"Camo1"};
			hiddenSelectionsTextures[] = {"\schaun_vetement\texture\doudoune\doudouneTNFmontagne.paa"};
			overlaySelectionsInfo[] = {"ghillie_hide"};
			containerClass = "Supply100";
		};
	};
	class doudouneorange: Vest_Camo_Base
	{
		scope = 2;
		author = "schaun";
		displayName = "Doudoune TNF Orange";
		picture = "\schaun_vetement\ui\ui_doudouneTNF.paa";
		transportMaxMagazines = 5;
		model = "\schaun_vetement\doudoune.p3d";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\doudoune\doudouneTNForange.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\schaun_vetement\doudoune.p3d";
			maximumLoad = 15;
			mass = 40;
			hiddenSelections[] = {"Camo1"};
			hiddenSelectionsTextures[] = {"\schaun_vetement\texture\doudoune\doudouneTNForange.paa"};
			overlaySelectionsInfo[] = {"ghillie_hide"};
			containerClass = "Supply100";
		};
	};
	class doudounefourrre: Vest_Camo_Base
	{
		scope = 2;
		author = "schaun";
		displayName = "Doudoune TNF Fourrure";
		picture = "\schaun_vetement\ui\ui_doudouneTNF.paa";
		transportMaxMagazines = 5;
		model = "\schaun_vetement\doudoune.p3d";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\doudoune\doudouneTNFfourure.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\schaun_vetement\doudoune.p3d";
			maximumLoad = 15;
			mass = 40;
			hiddenSelections[] = {"Camo1"};
			hiddenSelectionsTextures[] = {"\schaun_vetement\texture\doudoune\doudouneTNFfourure.paa"};
			overlaySelectionsInfo[] = {"ghillie_hide"};
			containerClass = "Supply100";
		};
	};
	class doudounerouge: Vest_Camo_Base
	{
		scope = 2;
		author = "schaun";
		displayName = "Doudoune TNF Rouge";
		picture = "\schaun_vetement\ui\ui_doudouneTNF.paa";
		transportMaxMagazines = 5;
		model = "\schaun_vetement\doudoune.p3d";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\doudoune\doudouneTNFrouge.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\schaun_vetement\doudoune.p3d";
			maximumLoad = 15;
			mass = 40;
			hiddenSelections[] = {"Camo1"};
			hiddenSelectionsTextures[] = {"\schaun_vetement\texture\doudoune\doudouneTNFrouge.paa"};
			overlaySelectionsInfo[] = {"ghillie_hide"};
			containerClass = "Supply100";
		};
	};
	class doudouneviolet: Vest_Camo_Base
	{
		scope = 2;
		author = "schaun";
		displayName = "Doudoune TNF Violet";
		picture = "\schaun_vetement\ui\ui_doudouneTNF.paa";
		transportMaxMagazines = 5;
		model = "\schaun_vetement\doudoune.p3d";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\doudoune\doudouneTNFviolet.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\schaun_vetement\doudoune.p3d";
			maximumLoad = 15;
			mass = 40;
			hiddenSelections[] = {"Camo1"};
			hiddenSelectionsTextures[] = {"\schaun_vetement\texture\doudoune\doudouneTNFviolet.paa"};
			overlaySelectionsInfo[] = {"ghillie_hide"};
			containerClass = "Supply100";
		};
	};
	class doudounesupreme: Vest_Camo_Base
	{
		scope = 2;
		author = "schaun";
		displayName = "Doudoune TNF Supreme";
		picture = "\schaun_vetement\ui\ui_doudouneTNF.paa";
		transportMaxMagazines = 5;
		model = "\schaun_vetement\doudoune.p3d";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\doudoune\doudouneTNFsupreme.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\schaun_vetement\doudoune.p3d";
			maximumLoad = 15;
			mass = 40;
			hiddenSelections[] = {"Camo1"};
			hiddenSelectionsTextures[] = {"\schaun_vetement\texture\doudoune\doudouneTNFsupreme.paa"};
			overlaySelectionsInfo[] = {"ghillie_hide"};
			containerClass = "Supply100";
		};
	};
	class bonnetLV: ItemCore
	{
		scope = 2;
		author = "schaun";
		weaponPoolAvailable = 1;
		displayName = "Bonnet LV";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\bonnet\bonnet_lv.paa"};
		model = "\schaun_vetement\bonnet_sol.p3d";
		picture = "\schaun_vetement\ui\ui_bonnetlv.paa";
		class ItemInfo: HeadgearItem
		{
			mass = 1;
			allowedSlots[] = {901,701,605};
			hiddenSelections[] = {"Camo1"};
			hiddenSelectionsTextures[] = {"\schaun_vetement\texture\bonnet\bonnet_lv.paa"};
			uniformModel = "\schaun_vetement\bonnet.p3d";
			modelSides[] = {6};
			armor = 0;
			passThrough = 2;
		};
	};
	class bonnetLVblack: ItemCore
	{
		scope = 2;
		author = "schaun";
		weaponPoolAvailable = 1;
		displayName = "Bonnet LV Black";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\bonnet\bonnet_lvblack.paa"};
		model = "\schaun_vetement\bonnet_sol.p3d";
		picture = "\schaun_vetement\ui\ui_bonnetlvblack.paa";
		class ItemInfo: HeadgearItem
		{
			mass = 1;
			allowedSlots[] = {901,701,605};
			hiddenSelections[] = {"Camo1"};
			hiddenSelectionsTextures[] = {"\schaun_vetement\texture\bonnet\bonnet_lvblack.paa"};
			uniformModel = "\schaun_vetement\bonnet.p3d";
			modelSides[] = {6};
			armor = 0;
			passThrough = 2;
		};
	};
	class bonnetLVblanc: ItemCore
	{
		scope = 2;
		author = "schaun";
		weaponPoolAvailable = 1;
		displayName = "Bonnet LV Blanc";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\bonnet\bonnet_lvblanc.paa"};
		model = "\schaun_vetement\bonnet_sol.p3d";
		picture = "\schaun_vetement\ui\ui_bonnetlvblanc.paa";
		class ItemInfo: HeadgearItem
		{
			mass = 1;
			allowedSlots[] = {901,701,605};
			hiddenSelections[] = {"Camo1"};
			hiddenSelectionsTextures[] = {"\schaun_vetement\texture\bonnet\bonnet_lvblanc.paa"};
			uniformModel = "\schaun_vetement\bonnet.p3d";
			modelSides[] = {6};
			armor = 0;
			passThrough = 2;
		};
	};
	class bonnetbleu: ItemCore
	{
		scope = 2;
		author = "schaun";
		weaponPoolAvailable = 1;
		displayName = "Bonnet Bleu";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\bonnet\bonnetbleu.paa"};
		model = "\schaun_vetement\bonnet_sol.p3d";
		picture = "\schaun_vetement\ui\ui_bonnetbleu.paa";
		class ItemInfo: HeadgearItem
		{
			mass = 1;
			allowedSlots[] = {901,701,605};
			hiddenSelections[] = {"Camo1"};
			hiddenSelectionsTextures[] = {"\schaun_vetement\texture\bonnet\bonnetbleu.paa"};
			uniformModel = "\schaun_vetement\bonnet.p3d";
			modelSides[] = {6};
			armor = 0;
			passThrough = 2;
		};
	};
	class Balenciagableu: ItemCore
	{
		scope = 2;
		author = "schaun";
		weaponPoolAvailable = 1;
		displayName = "Bonnet Balenciaga Bleu";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\bonnet\bonnetbleu_balanciaga.paa"};
		model = "\schaun_vetement\bonnet_sol.p3d";
		picture = "\schaun_vetement\ui\ui_bonnetbleu.paa";
		class ItemInfo: HeadgearItem
		{
			mass = 1;
			allowedSlots[] = {901,701,605};
			hiddenSelections[] = {"Camo1"};
			hiddenSelectionsTextures[] = {"\schaun_vetement\texture\bonnet\bonnetbleu_balanciaga.paa"};
			uniformModel = "\schaun_vetement\bonnet.p3d";
			modelSides[] = {6};
			armor = 0;
			passThrough = 2;
		};
	};
	class Balenciagaboxbleu: ItemCore
	{
		scope = 2;
		author = "schaun";
		weaponPoolAvailable = 1;
		displayName = "Bonnet Balenciaga Logo Bleu";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\bonnet\bonnetbleu_balanciagabox.paa"};
		model = "\schaun_vetement\bonnet_sol.p3d";
		picture = "\schaun_vetement\ui\ui_bonnetbleu.paa";
		class ItemInfo: HeadgearItem
		{
			mass = 1;
			allowedSlots[] = {901,701,605};
			hiddenSelections[] = {"Camo1"};
			hiddenSelectionsTextures[] = {"\schaun_vetement\texture\bonnet\bonnetbleu_balanciagabox.paa"};
			uniformModel = "\schaun_vetement\bonnet.p3d";
			modelSides[] = {6};
			armor = 0;
			passThrough = 2;
		};
	};
	class bonnetgris: ItemCore
	{
		scope = 2;
		author = "schaun";
		weaponPoolAvailable = 1;
		displayName = "Bonnet Gris";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\bonnet\bonnetgris.paa"};
		model = "\schaun_vetement\bonnet_sol.p3d";
		picture = "\schaun_vetement\ui\ui_bonnetgris.paa";
		class ItemInfo: HeadgearItem
		{
			mass = 1;
			allowedSlots[] = {901,701,605};
			hiddenSelections[] = {"Camo1"};
			hiddenSelectionsTextures[] = {"\schaun_vetement\texture\bonnet\bonnetgris.paa"};
			uniformModel = "\schaun_vetement\bonnet.p3d";
			modelSides[] = {6};
			armor = 0;
			passThrough = 2;
		};
	};
	class Balenciagagris: ItemCore
	{
		scope = 2;
		author = "schaun";
		weaponPoolAvailable = 1;
		displayName = "Bonnet Balenciaga Gris";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\bonnet\bonnetgris_balenciaga.paa"};
		model = "\schaun_vetement\bonnet_sol.p3d";
		picture = "\schaun_vetement\ui\ui_bonnetgris.paa";
		class ItemInfo: HeadgearItem
		{
			mass = 1;
			allowedSlots[] = {901,701,605};
			hiddenSelections[] = {"Camo1"};
			hiddenSelectionsTextures[] = {"\schaun_vetement\texture\bonnet\bonnetgris_balenciaga.paa"};
			uniformModel = "\schaun_vetement\bonnet.p3d";
			modelSides[] = {6};
			armor = 0;
			passThrough = 2;
		};
	};
	class Balenciagaboxgris: ItemCore
	{
		scope = 2;
		author = "schaun";
		weaponPoolAvailable = 1;
		displayName = "Bonnet Balenciaga Logo Gris";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\bonnet\bonnetgris_balenciagabox.paa"};
		model = "\schaun_vetement\bonnet_sol.p3d";
		picture = "\schaun_vetement\ui\ui_bonnetgris.paa";
		class ItemInfo: HeadgearItem
		{
			mass = 1;
			allowedSlots[] = {901,701,605};
			hiddenSelections[] = {"Camo1"};
			hiddenSelectionsTextures[] = {"\schaun_vetement\texture\bonnet\bonnetgris_balenciagabox.paa"};
			uniformModel = "\schaun_vetement\bonnet.p3d";
			modelSides[] = {6};
			armor = 0;
			passThrough = 2;
		};
	};
	class bonnetnoir: ItemCore
	{
		scope = 2;
		author = "schaun";
		weaponPoolAvailable = 1;
		displayName = "Bonnet Noir";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\bonnet\bonnetnoir.paa"};
		model = "\schaun_vetement\bonnet_sol.p3d";
		picture = "\schaun_vetement\ui\ui_bonnetnoir.paa";
		class ItemInfo: HeadgearItem
		{
			mass = 1;
			allowedSlots[] = {901,701,605};
			hiddenSelections[] = {"Camo1"};
			hiddenSelectionsTextures[] = {"\schaun_vetement\texture\bonnet\bonnetnoir.paa"};
			uniformModel = "\schaun_vetement\bonnet.p3d";
			modelSides[] = {6};
			armor = 0;
			passThrough = 2;
		};
	};
	class bonnetsupremenoir: ItemCore
	{
		scope = 2;
		author = "schaun";
		weaponPoolAvailable = 1;
		displayName = "Bonnet Supreme Noir";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\bonnet\bonnetnoir_supreme.paa"};
		model = "\schaun_vetement\bonnet_sol.p3d";
		picture = "\schaun_vetement\ui\ui_bonnetnoir.paa";
		class ItemInfo: HeadgearItem
		{
			mass = 1;
			allowedSlots[] = {901,701,605};
			hiddenSelections[] = {"Camo1"};
			hiddenSelectionsTextures[] = {"\schaun_vetement\texture\bonnet\bonnetnoir_supreme.paa"};
			uniformModel = "\schaun_vetement\bonnet.p3d";
			modelSides[] = {6};
			armor = 0;
			passThrough = 2;
		};
	};
	class Balenciaganoir: ItemCore
	{
		scope = 2;
		author = "schaun";
		weaponPoolAvailable = 1;
		displayName = "Bonnet Balenciaga Noir";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\bonnet\bonnetnoir_balenciaga.paa"};
		model = "\schaun_vetement\bonnet_sol.p3d";
		picture = "\schaun_vetement\ui\ui_bonnetnoir.paa";
		class ItemInfo: HeadgearItem
		{
			mass = 1;
			allowedSlots[] = {901,701,605};
			hiddenSelections[] = {"Camo1"};
			hiddenSelectionsTextures[] = {"\schaun_vetement\texture\bonnet\bonnetnoir_balenciaga.paa"};
			uniformModel = "\schaun_vetement\bonnet.p3d";
			modelSides[] = {6};
			armor = 0;
			passThrough = 2;
		};
	};
	class Balenciagaboxnoir: ItemCore
	{
		scope = 2;
		author = "schaun";
		weaponPoolAvailable = 1;
		displayName = "Bonnet Balenciaga Logo Noir";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\bonnet\bonnetnoir_balenciagabox.paa"};
		model = "\schaun_vetement\bonnet_sol.p3d";
		picture = "\schaun_vetement\ui\ui_bonnetnoir.paa";
		class ItemInfo: HeadgearItem
		{
			mass = 1;
			allowedSlots[] = {901,701,605};
			hiddenSelections[] = {"Camo1"};
			hiddenSelectionsTextures[] = {"\schaun_vetement\texture\bonnet\bonnetnoir_balenciagabox.paa"};
			uniformModel = "\schaun_vetement\bonnet.p3d";
			modelSides[] = {6};
			armor = 0;
			passThrough = 2;
		};
	};
	class bonnetrose: ItemCore
	{
		scope = 2;
		author = "schaun";
		weaponPoolAvailable = 1;
		displayName = "Bonnet Rose";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\bonnet\bonnetrose.paa"};
		model = "\schaun_vetement\bonnet_sol.p3d";
		picture = "\schaun_vetement\ui\ui_bonnetrose.paa";
		class ItemInfo: HeadgearItem
		{
			mass = 1;
			allowedSlots[] = {901,701,605};
			hiddenSelections[] = {"Camo1"};
			hiddenSelectionsTextures[] = {"\schaun_vetement\texture\bonnet\bonnetrose.paa"};
			uniformModel = "\schaun_vetement\bonnet.p3d";
			modelSides[] = {6};
			armor = 0;
			passThrough = 2;
		};
	};
	class Balenciagarose: ItemCore
	{
		scope = 2;
		author = "schaun";
		weaponPoolAvailable = 1;
		displayName = "Bonnet Balenciaga Rose";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\bonnet\bonnetrose_balenciaga.paa"};
		model = "\schaun_vetement\bonnet_sol.p3d";
		picture = "\schaun_vetement\ui\ui_bonnetrose.paa";
		class ItemInfo: HeadgearItem
		{
			mass = 1;
			allowedSlots[] = {901,701,605};
			hiddenSelections[] = {"Camo1"};
			hiddenSelectionsTextures[] = {"\schaun_vetement\texture\bonnet\bonnetrose_balenciaga.paa"};
			uniformModel = "\schaun_vetement\bonnet.p3d";
			modelSides[] = {6};
			armor = 0;
			passThrough = 2;
		};
	};
	class Balenciagaboxrose: ItemCore
	{
		scope = 2;
		author = "schaun";
		weaponPoolAvailable = 1;
		displayName = "Bonnet Balenciaga Logo Rose";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\bonnet\bonnetrose_balenciagabox.paa"};
		model = "\schaun_vetement\bonnet_sol.p3d";
		picture = "\schaun_vetement\ui\ui_bonnetrose.paa";
		class ItemInfo: HeadgearItem
		{
			mass = 1;
			allowedSlots[] = {901,701,605};
			hiddenSelections[] = {"Camo1"};
			hiddenSelectionsTextures[] = {"\schaun_vetement\texture\bonnet\bonnetrose_balenciagabox.paa"};
			uniformModel = "\schaun_vetement\bonnet.p3d";
			modelSides[] = {6};
			armor = 0;
			passThrough = 2;
		};
	};
	class bonnetrouge: ItemCore
	{
		scope = 2;
		author = "schaun";
		weaponPoolAvailable = 1;
		displayName = "Bonnet Rouge";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\bonnet\bonnetrouge.paa"};
		model = "\schaun_vetement\bonnet_sol.p3d";
		picture = "\schaun_vetement\ui\ui_bonnetrouge.paa";
		class ItemInfo: HeadgearItem
		{
			mass = 1;
			allowedSlots[] = {901,701,605};
			hiddenSelections[] = {"Camo1"};
			hiddenSelectionsTextures[] = {"\schaun_vetement\texture\bonnet\bonnetrouge.paa"};
			uniformModel = "\schaun_vetement\bonnet.p3d";
			modelSides[] = {6};
			armor = 0;
			passThrough = 2;
		};
	};
	class bonnetrougesupreme: ItemCore
	{
		scope = 2;
		author = "schaun";
		weaponPoolAvailable = 1;
		displayName = "Bonnet Surpreme Rouge";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\bonnet\bonnetrouge_supreme.paa"};
		model = "\schaun_vetement\bonnet_sol.p3d";
		picture = "\schaun_vetement\ui\ui_bonnetrouge.paa";
		class ItemInfo: HeadgearItem
		{
			mass = 1;
			allowedSlots[] = {901,701,605};
			hiddenSelections[] = {"Camo1"};
			hiddenSelectionsTextures[] = {"\schaun_vetement\texture\bonnet\bonnetrouge_supreme.paa"};
			uniformModel = "\schaun_vetement\bonnet.p3d";
			modelSides[] = {6};
			armor = 0;
			passThrough = 2;
		};
	};
	class Balenciagarouge: ItemCore
	{
		scope = 2;
		author = "schaun";
		weaponPoolAvailable = 1;
		displayName = "Bonnet Balenciaga Rouge";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\bonnet\bonnetrouge_balenciaga.paa"};
		model = "\schaun_vetement\bonnet_sol.p3d";
		picture = "\schaun_vetement\ui\ui_bonnetrouge.paa";
		class ItemInfo: HeadgearItem
		{
			mass = 1;
			allowedSlots[] = {901,701,605};
			hiddenSelections[] = {"Camo1"};
			hiddenSelectionsTextures[] = {"\schaun_vetement\texture\bonnet\bonnetrouge_balenciaga.paa"};
			uniformModel = "\schaun_vetement\bonnet.p3d";
			modelSides[] = {6};
			armor = 0;
			passThrough = 2;
		};
	};
	class Balenciagaboxrouge: ItemCore
	{
		scope = 2;
		author = "schaun";
		weaponPoolAvailable = 1;
		displayName = "Bonnet Balenciaga Logo Rouge";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\bonnet\bonnetrouge_balenciagabox.paa"};
		model = "\schaun_vetement\bonnet_sol.p3d";
		picture = "\schaun_vetement\ui\ui_bonnetrouge.paa";
		class ItemInfo: HeadgearItem
		{
			mass = 1;
			allowedSlots[] = {901,701,605};
			hiddenSelections[] = {"Camo1"};
			hiddenSelectionsTextures[] = {"\schaun_vetement\texture\bonnet\bonnetrouge_balenciagabox.paa"};
			uniformModel = "\schaun_vetement\bonnet.p3d";
			modelSides[] = {6};
			armor = 0;
			passThrough = 2;
		};
	};
	class bonnetvert: ItemCore
	{
		scope = 2;
		author = "schaun";
		weaponPoolAvailable = 1;
		displayName = "Bonnet Vert";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\bonnet\bonnetvert.paa"};
		model = "\schaun_vetement\bonnet_sol.p3d";
		picture = "\schaun_vetement\ui\ui_bonnetvert.paa";
		class ItemInfo: HeadgearItem
		{
			mass = 1;
			allowedSlots[] = {901,701,605};
			hiddenSelections[] = {"Camo1"};
			hiddenSelectionsTextures[] = {"\schaun_vetement\texture\bonnet\bonnetvert.paa"};
			uniformModel = "\schaun_vetement\bonnet.p3d";
			modelSides[] = {6};
			armor = 0;
			passThrough = 2;
		};
	};
	class Balenciagavert: ItemCore
	{
		scope = 2;
		author = "schaun";
		weaponPoolAvailable = 1;
		displayName = "Bonnet Balenciaga Vert";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\bonnet\bonnetvert_balenciaga.paa"};
		model = "\schaun_vetement\bonnet_sol.p3d";
		picture = "\schaun_vetement\ui\ui_bonnetvert.paa";
		class ItemInfo: HeadgearItem
		{
			mass = 1;
			allowedSlots[] = {901,701,605};
			hiddenSelections[] = {"Camo1"};
			hiddenSelectionsTextures[] = {"\schaun_vetement\texture\bonnet\bonnetvert_balenciaga.paa"};
			uniformModel = "\schaun_vetement\bonnet.p3d";
			modelSides[] = {6};
			armor = 0;
			passThrough = 2;
		};
	};
	class Balenciagaboxvert: ItemCore
	{
		scope = 2;
		author = "schaun";
		weaponPoolAvailable = 1;
		displayName = "Bonnet Balenciaga Logo Vert";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\bonnet\bonnetvert_balenciagabox.paa"};
		model = "\schaun_vetement\bonnet_sol.p3d";
		picture = "\schaun_vetement\ui\ui_bonnetvert.paa";
		class ItemInfo: HeadgearItem
		{
			mass = 1;
			allowedSlots[] = {901,701,605};
			hiddenSelections[] = {"Camo1"};
			hiddenSelectionsTextures[] = {"\schaun_vetement\texture\bonnet\bonnetvert_balenciagabox.paa"};
			uniformModel = "\schaun_vetement\bonnet.p3d";
			modelSides[] = {6};
			armor = 0;
			passThrough = 2;
		};
	};
	class casquecross_lunette_fullblack: ItemCore
	{
		scope = 2;
		author = "schaun";
		weaponPoolAvailable = 1;
		displayName = "Casque Cross Fullblack";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\casquecross\fullblack.paa","\schaun_vetement\texture\casquecross\fullblack.paa"};
		model = "\schaun_vetement\casquecross_sol.p3d";
		picture = "\schaun_vetement\ui\ui_casquecross2.paa";
		class ItemInfo: HeadgearItem
		{
			mass = 1;
			allowedSlots[] = {901,701,605};
			hiddenSelections[] = {"Camo1","Camo2"};
			hiddenSelectionsTextures[] = {"\schaun_vetement\texture\casquecross\fullblack.paa","\schaun_vetement\texture\casquecross\fullblack.paa"};
			uniformModel = "\schaun_vetement\casquecross.p3d";
			modelSides[] = {6};
			armor = 0;
			passThrough = 2;
		};
	};
	class casquecross_lunette_1: ItemCore
	{
		scope = 2;
		author = "schaun";
		weaponPoolAvailable = 1;
		displayName = "Casque Airoh Aviator Lunette 1";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\casquecross\helmet001_d.paa","\schaun_vetement\texture\casquecross\goggle001_d5.paa"};
		model = "\schaun_vetement\casquecross_sol.p3d";
		picture = "\schaun_vetement\ui\ui_casquecross2.paa";
		class ItemInfo: HeadgearItem
		{
			mass = 1;
			allowedSlots[] = {901,701,605};
			hiddenSelections[] = {"Camo1","Camo2"};
			hiddenSelectionsTextures[] = {"\schaun_vetement\texture\casquecross\helmet001_d.paa","\schaun_vetement\texture\casquecross\goggle001_d5.paa"};
			uniformModel = "\schaun_vetement\casquecross.p3d";
			modelSides[] = {6};
			armor = 0;
			passThrough = 2;
		};
	};
	class casquecross_lunette_2a: ItemCore
	{
		scope = 2;
		author = "schaun";
		weaponPoolAvailable = 1;
		displayName = "Casque Airoh Aviator Lunette 2A";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\casquecross\helmet001_d1.paa","\schaun_vetement\texture\casquecross\goggle001_d1.paa"};
		model = "\schaun_vetement\casquecross_sol.p3d";
		picture = "\schaun_vetement\ui\ui_casquecross3.paa";
		class ItemInfo: HeadgearItem
		{
			mass = 1;
			allowedSlots[] = {901,701,605};
			hiddenSelections[] = {"Camo1","Camo2"};
			hiddenSelectionsTextures[] = {"\schaun_vetement\texture\casquecross\helmet001_d1.paa","\schaun_vetement\texture\casquecross\goggle001_d1.paa"};
			uniformModel = "\schaun_vetement\casquecross.p3d";
			modelSides[] = {6};
			armor = 0;
			passThrough = 2;
		};
	};
	class casquecross_lunette_2b: ItemCore
	{
		scope = 2;
		author = "schaun";
		weaponPoolAvailable = 1;
		displayName = "Casque Airoh Aviator Lunette 2B";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\casquecross\helmet001_d1.paa","\schaun_vetement\texture\casquecross\goggle001_d4.paa"};
		model = "\schaun_vetement\casquecross_sol.p3d";
		picture = "\schaun_vetement\ui\ui_casquecross3.paa";
		class ItemInfo: HeadgearItem
		{
			mass = 1;
			allowedSlots[] = {901,701,605};
			hiddenSelections[] = {"Camo1","Camo2"};
			hiddenSelectionsTextures[] = {"\schaun_vetement\texture\casquecross\helmet001_d1.paa","\schaun_vetement\texture\casquecross\goggle001_d4.paa"};
			uniformModel = "\schaun_vetement\casquecross.p3d";
			modelSides[] = {6};
			armor = 0;
			passThrough = 2;
		};
	};
	class casquecross_lunette_2c: ItemCore
	{
		scope = 2;
		author = "schaun";
		weaponPoolAvailable = 1;
		displayName = "Casque Airoh Aviator Lunette 2C";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\casquecross\helmet001_d1.paa","\schaun_vetement\texture\casquecross\goggle001_d5.paa"};
		model = "\schaun_vetement\casquecross_sol.p3d";
		picture = "\schaun_vetement\ui\ui_casquecross3.paa";
		class ItemInfo: HeadgearItem
		{
			mass = 1;
			allowedSlots[] = {901,701,605};
			hiddenSelections[] = {"Camo1","Camo2"};
			hiddenSelectionsTextures[] = {"\schaun_vetement\texture\casquecross\helmet001_d1.paa","\schaun_vetement\texture\casquecross\goggle001_d5.paa"};
			uniformModel = "\schaun_vetement\casquecross.p3d";
			modelSides[] = {6};
			armor = 0;
			passThrough = 2;
		};
	};
	class casquecross_lunette_3a: ItemCore
	{
		scope = 2;
		author = "schaun";
		weaponPoolAvailable = 1;
		displayName = "Casque Airoh Aviator Lunette 3A";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\casquecross\helmet001_d2.paa","\schaun_vetement\texture\casquecross\goggle001_d2.paa"};
		model = "\schaun_vetement\casquecross_sol.p3d";
		picture = "\schaun_vetement\ui\ui_casquecross4.paa";
		class ItemInfo: HeadgearItem
		{
			mass = 1;
			allowedSlots[] = {901,701,605};
			hiddenSelections[] = {"Camo1","Camo2"};
			hiddenSelectionsTextures[] = {"\schaun_vetement\texture\casquecross\helmet001_d2.paa","\schaun_vetement\texture\casquecross\goggle001_d2.paa"};
			uniformModel = "\schaun_vetement\casquecross.p3d";
			modelSides[] = {6};
			armor = 0;
			passThrough = 2;
		};
	};
	class casquecross_lunette_3b: ItemCore
	{
		scope = 2;
		author = "schaun";
		weaponPoolAvailable = 1;
		displayName = "Casque Airoh Aviator Lunette 3B";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\casquecross\helmet001_d2.paa","\schaun_vetement\texture\casquecross\goggle001_d4.paa"};
		model = "\schaun_vetement\casquecross_sol.p3d";
		picture = "\schaun_vetement\ui\ui_casquecross4.paa";
		class ItemInfo: HeadgearItem
		{
			mass = 1;
			allowedSlots[] = {901,701,605};
			hiddenSelections[] = {"Camo1","Camo2"};
			hiddenSelectionsTextures[] = {"\schaun_vetement\texture\casquecross\helmet001_d2.paa","\schaun_vetement\texture\casquecross\goggle001_d4.paa"};
			uniformModel = "\schaun_vetement\casquecross.p3d";
			modelSides[] = {6};
			armor = 0;
			passThrough = 2;
		};
	};
	class casquecross_lunette_3c: ItemCore
	{
		scope = 2;
		author = "schaun";
		weaponPoolAvailable = 1;
		displayName = "Casque Airoh Aviator Lunette 3C";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\casquecross\helmet001_d2.paa","\schaun_vetement\texture\casquecross\goggle001_d5.paa"};
		model = "\schaun_vetement\casquecross_sol.p3d";
		picture = "\schaun_vetement\ui\ui_casquecross4.paa";
		class ItemInfo: HeadgearItem
		{
			mass = 1;
			allowedSlots[] = {901,701,605};
			hiddenSelections[] = {"Camo1","Camo2"};
			hiddenSelectionsTextures[] = {"\schaun_vetement\texture\casquecross\helmet001_d2.paa","\schaun_vetement\texture\casquecross\goggle001_d5.paa"};
			uniformModel = "\schaun_vetement\casquecross.p3d";
			modelSides[] = {6};
			armor = 0;
			passThrough = 2;
		};
	};
	class casquecross_lunette_4a: ItemCore
	{
		scope = 2;
		author = "schaun";
		weaponPoolAvailable = 1;
		displayName = "Casque Airoh Aviator Lunette 4A";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\casquecross\helmet001_d3.paa","\schaun_vetement\texture\casquecross\goggle001_d1.paa"};
		model = "\schaun_vetement\casquecross_sol.p3d";
		picture = "\schaun_vetement\ui\ui_casquecross5.paa";
		class ItemInfo: HeadgearItem
		{
			mass = 1;
			allowedSlots[] = {901,701,605};
			hiddenSelections[] = {"Camo1","Camo2"};
			hiddenSelectionsTextures[] = {"\schaun_vetement\texture\casquecross\helmet001_d3.paa","\schaun_vetement\texture\casquecross\goggle001_d1.paa"};
			uniformModel = "\schaun_vetement\casquecross.p3d";
			modelSides[] = {6};
			armor = 0;
			passThrough = 2;
		};
	};
	class casquecross_lunette_4b: ItemCore
	{
		scope = 2;
		author = "schaun";
		weaponPoolAvailable = 1;
		displayName = "Casque Airoh Aviator Lunette 4B";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\casquecross\helmet001_d3.paa","\schaun_vetement\texture\casquecross\goggle001_d6.paa"};
		model = "\schaun_vetement\casquecross_sol.p3d";
		picture = "\schaun_vetement\ui\ui_casquecross5.paa";
		class ItemInfo: HeadgearItem
		{
			mass = 1;
			allowedSlots[] = {901,701,605};
			hiddenSelections[] = {"Camo1","Camo2"};
			hiddenSelectionsTextures[] = {"\schaun_vetement\texture\casquecross\helmet001_d3.paa","\schaun_vetement\texture\casquecross\goggle001_d6.paa"};
			uniformModel = "\schaun_vetement\casquecross.p3d";
			modelSides[] = {6};
			armor = 0;
			passThrough = 2;
		};
	};
	class casquecross_lunette_4c: ItemCore
	{
		scope = 2;
		author = "schaun";
		weaponPoolAvailable = 1;
		displayName = "Casque Airoh Aviator Lunette 4C";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\casquecross\helmet001_d3.paa","\schaun_vetement\texture\casquecross\goggle001_d7.paa"};
		model = "\schaun_vetement\casquecross_sol.p3d";
		picture = "\schaun_vetement\ui\ui_casquecross5.paa";
		class ItemInfo: HeadgearItem
		{
			mass = 1;
			allowedSlots[] = {901,701,605};
			hiddenSelections[] = {"Camo1","Camo2"};
			hiddenSelectionsTextures[] = {"\schaun_vetement\texture\casquecross\helmet001_d3.paa","\schaun_vetement\texture\casquecross\goggle001_d7.paa"};
			uniformModel = "\schaun_vetement\casquecross.p3d";
			modelSides[] = {6};
			armor = 0;
			passThrough = 2;
		};
	};
	class casquecross_lunette_5a: ItemCore
	{
		scope = 2;
		author = "schaun";
		weaponPoolAvailable = 1;
		displayName = "Casque Airoh Aviator Lunette 5A";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\casquecross\helmet001_d4.paa","\schaun_vetement\texture\casquecross\goggle001_d7.paa"};
		model = "\schaun_vetement\casquecross_sol.p3d";
		picture = "\schaun_vetement\ui\ui_casquecross6.paa";
		class ItemInfo: HeadgearItem
		{
			mass = 1;
			allowedSlots[] = {901,701,605};
			hiddenSelections[] = {"Camo1","Camo2"};
			hiddenSelectionsTextures[] = {"\schaun_vetement\texture\casquecross\helmet001_d4.paa","\schaun_vetement\texture\casquecross\goggle001_d7.paa"};
			uniformModel = "\schaun_vetement\casquecross.p3d";
			modelSides[] = {6};
			armor = 0;
			passThrough = 2;
		};
	};
	class casquecross_lunette_5b: ItemCore
	{
		scope = 2;
		author = "schaun";
		weaponPoolAvailable = 1;
		displayName = "Casque Airoh Aviator Lunette 5B";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\casquecross\helmet001_d4.paa","\schaun_vetement\texture\casquecross\goggle001_d5.paa"};
		model = "\schaun_vetement\casquecross_sol.p3d";
		picture = "\schaun_vetement\ui\ui_casquecross6.paa";
		class ItemInfo: HeadgearItem
		{
			mass = 1;
			allowedSlots[] = {901,701,605};
			hiddenSelections[] = {"Camo1","Camo2"};
			hiddenSelectionsTextures[] = {"\schaun_vetement\texture\casquecross\helmet001_d4.paa","\schaun_vetement\texture\casquecross\goggle001_d5.paa"};
			uniformModel = "\schaun_vetement\casquecross.p3d";
			modelSides[] = {6};
			armor = 0;
			passThrough = 2;
		};
	};
	class casquecross_lunette_5c: ItemCore
	{
		scope = 2;
		author = "schaun";
		weaponPoolAvailable = 1;
		displayName = "Casque Airoh Aviator Lunette 5C";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\casquecross\helmet001_d4.paa","\schaun_vetement\texture\casquecross\goggle001_d4.paa"};
		model = "\schaun_vetement\casquecross_sol.p3d";
		picture = "\schaun_vetement\ui\ui_casquecross6.paa";
		class ItemInfo: HeadgearItem
		{
			mass = 1;
			allowedSlots[] = {901,701,605};
			hiddenSelections[] = {"Camo1","Camo2"};
			hiddenSelectionsTextures[] = {"\schaun_vetement\texture\casquecross\helmet001_d4.paa","\schaun_vetement\texture\casquecross\goggle001_d4.paa"};
			uniformModel = "\schaun_vetement\casquecross.p3d";
			modelSides[] = {6};
			armor = 0;
			passThrough = 2;
		};
	};
	class casquecross_lunette_5d: ItemCore
	{
		scope = 2;
		author = "schaun";
		weaponPoolAvailable = 1;
		displayName = "Casque Airoh Aviator Lunette 5D";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\casquecross\helmet001_d4.paa","\schaun_vetement\texture\casquecross\goggle001_d2.paa"};
		model = "\schaun_vetement\casquecross_sol.p3d";
		picture = "\schaun_vetement\ui\ui_casquecross6.paa";
		class ItemInfo: HeadgearItem
		{
			mass = 1;
			allowedSlots[] = {901,701,605};
			hiddenSelections[] = {"Camo1","Camo2"};
			hiddenSelectionsTextures[] = {"\schaun_vetement\texture\casquecross\helmet001_d4.paa","\schaun_vetement\texture\casquecross\goggle001_d2.paa"};
			uniformModel = "\schaun_vetement\casquecross.p3d";
			modelSides[] = {6};
			armor = 0;
			passThrough = 2;
		};
	};
	class casquecross_lunette_6a: ItemCore
	{
		scope = 2;
		author = "schaun";
		weaponPoolAvailable = 1;
		displayName = "Casque Airoh Aviator Lunette 6A";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\casquecross\helmet001_d5.paa","\schaun_vetement\texture\casquecross\goggle001_d7.paa"};
		model = "\schaun_vetement\casquecross_sol.p3d";
		picture = "\schaun_vetement\ui\ui_casquecross7.paa";
		class ItemInfo: HeadgearItem
		{
			mass = 1;
			allowedSlots[] = {901,701,605};
			hiddenSelections[] = {"Camo1","Camo2"};
			hiddenSelectionsTextures[] = {"\schaun_vetement\texture\casquecross\helmet001_d5.paa","\schaun_vetement\texture\casquecross\goggle001_d7.paa"};
			uniformModel = "\schaun_vetement\casquecross.p3d";
			modelSides[] = {6};
			armor = 0;
			passThrough = 2;
		};
	};
	class casquecross_lunette_6b: ItemCore
	{
		scope = 2;
		author = "schaun";
		weaponPoolAvailable = 1;
		displayName = "Casque Airoh Aviator Lunette 6B";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\casquecross\helmet001_d5.paa","\schaun_vetement\texture\casquecross\goggle001_d6.paa"};
		model = "\schaun_vetement\casquecross_sol.p3d";
		picture = "\schaun_vetement\ui\ui_casquecross7.paa";
		class ItemInfo: HeadgearItem
		{
			mass = 1;
			allowedSlots[] = {901,701,605};
			hiddenSelections[] = {"Camo1","Camo2"};
			hiddenSelectionsTextures[] = {"\schaun_vetement\texture\casquecross\helmet001_d5.paa","\schaun_vetement\texture\casquecross\goggle001_d6.paa"};
			uniformModel = "\schaun_vetement\casquecross.p3d";
			modelSides[] = {6};
			armor = 0;
			passThrough = 2;
		};
	};
	class casquecross_lunette_7a: ItemCore
	{
		scope = 2;
		author = "schaun";
		weaponPoolAvailable = 1;
		displayName = "Casque Airoh Aviator Lunette 7A";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\casquecross\helmet001_d6.paa","\schaun_vetement\texture\casquecross\goggle001_d1.paa"};
		model = "\schaun_vetement\casquecross_sol.p3d";
		picture = "\schaun_vetement\ui\ui_casquecross1.paa";
		class ItemInfo: HeadgearItem
		{
			mass = 1;
			allowedSlots[] = {901,701,605};
			hiddenSelections[] = {"Camo1","Camo2"};
			hiddenSelectionsTextures[] = {"\schaun_vetement\texture\casquecross\helmet001_d6.paa","\schaun_vetement\texture\casquecross\goggle001_d1.paa"};
			uniformModel = "\schaun_vetement\casquecross.p3d";
			modelSides[] = {6};
			armor = 0;
			passThrough = 2;
		};
	};
	class casquecross_lunette_7b: ItemCore
	{
		scope = 2;
		author = "schaun";
		weaponPoolAvailable = 1;
		displayName = "Casque Airoh Aviator Lunette 7B";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\casquecross\helmet001_d6.paa","\schaun_vetement\texture\casquecross\goggle001_d5.paa"};
		model = "\schaun_vetement\casquecross_sol.p3d";
		picture = "\schaun_vetement\ui\ui_casquecross1.paa";
		class ItemInfo: HeadgearItem
		{
			mass = 1;
			allowedSlots[] = {901,701,605};
			hiddenSelections[] = {"Camo1","Camo2"};
			hiddenSelectionsTextures[] = {"\schaun_vetement\texture\casquecross\helmet001_d6.paa","\schaun_vetement\texture\casquecross\goggle001_d5.paa"};
			uniformModel = "\schaun_vetement\casquecross.p3d";
			modelSides[] = {6};
			armor = 0;
			passThrough = 2;
		};
	};
	class casquecross_lunette_7c: ItemCore
	{
		scope = 2;
		author = "schaun";
		weaponPoolAvailable = 1;
		displayName = "Casque Airoh Aviator Lunette 7C";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\casquecross\helmet001_d6.paa","\schaun_vetement\texture\casquecross\goggle001_d4.paa"};
		model = "\schaun_vetement\casquecross_sol.p3d";
		picture = "\schaun_vetement\ui\ui_casquecross1.paa";
		class ItemInfo: HeadgearItem
		{
			mass = 1;
			allowedSlots[] = {901,701,605};
			hiddenSelections[] = {"Camo1","Camo2"};
			hiddenSelectionsTextures[] = {"\schaun_vetement\texture\casquecross\helmet001_d6.paa","\schaun_vetement\texture\casquecross\goggle001_d4.paa"};
			uniformModel = "\schaun_vetement\casquecross.p3d";
			modelSides[] = {6};
			armor = 0;
			passThrough = 2;
		};
	};
	class casquecross_lunette_7d: ItemCore
	{
		scope = 2;
		author = "schaun";
		weaponPoolAvailable = 1;
		displayName = "Casque Airoh Aviator Lunette 7D";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\casquecross\helmet001_d6.paa","\schaun_vetement\texture\casquecross\goggle001_d2.paa"};
		model = "\schaun_vetement\casquecross_sol.p3d";
		picture = "\schaun_vetement\ui\ui_casquecross1.paa";
		class ItemInfo: HeadgearItem
		{
			mass = 1;
			allowedSlots[] = {901,701,605};
			hiddenSelections[] = {"Camo1","Camo2"};
			hiddenSelectionsTextures[] = {"\schaun_vetement\texture\casquecross\helmet001_d6.paa","\schaun_vetement\texture\casquecross\goggle001_d2.paa"};
			uniformModel = "\schaun_vetement\casquecross.p3d";
			modelSides[] = {6};
			armor = 0;
			passThrough = 2;
		};
	};
	class casquecross_lunette_8a: ItemCore
	{
		scope = 2;
		author = "schaun";
		weaponPoolAvailable = 1;
		displayName = "Casque Airoh Aviator Lunette 8A";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\casquecross\helmet001_d7.paa","\schaun_vetement\texture\casquecross\goggle001_d7.paa"};
		model = "\schaun_vetement\casquecross_sol.p3d";
		picture = "\schaun_vetement\ui\ui_casquecross8.paa";
		class ItemInfo: HeadgearItem
		{
			mass = 1;
			allowedSlots[] = {901,701,605};
			hiddenSelections[] = {"Camo1","Camo2"};
			hiddenSelectionsTextures[] = {"\schaun_vetement\texture\casquecross\helmet001_d7.paa","\schaun_vetement\texture\casquecross\goggle001_d7.paa"};
			uniformModel = "\schaun_vetement\casquecross.p3d";
			modelSides[] = {6};
			armor = 0;
			passThrough = 2;
		};
	};
	class casquecross_lunette_8b: ItemCore
	{
		scope = 2;
		author = "schaun";
		weaponPoolAvailable = 1;
		displayName = "Casque Airoh Aviator Lunette 8B";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\casquecross\helmet001_d7.paa","\schaun_vetement\texture\casquecross\goggle001_d6.paa"};
		model = "\schaun_vetement\casquecross_sol.p3d";
		picture = "\schaun_vetement\ui\ui_casquecross8.paa";
		class ItemInfo: HeadgearItem
		{
			mass = 1;
			allowedSlots[] = {901,701,605};
			hiddenSelections[] = {"Camo1","Camo2"};
			hiddenSelectionsTextures[] = {"\schaun_vetement\texture\casquecross\helmet001_d7.paa","\schaun_vetement\texture\casquecross\goggle001_d6.paa"};
			uniformModel = "\schaun_vetement\casquecross.p3d";
			modelSides[] = {6};
			armor = 0;
			passThrough = 2;
		};
	};
	class casquecross_lunette_8C: ItemCore
	{
		scope = 2;
		author = "schaun";
		weaponPoolAvailable = 1;
		displayName = "Casque Airoh Aviator Lunette 8C";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\schaun_vetement\texture\casquecross\helmet001_d7.paa","\schaun_vetement\texture\casquecross\goggle001_d1.paa"};
		model = "\schaun_vetement\casquecross_sol.p3d";
		picture = "\schaun_vetement\ui\ui_casquecross8.paa";
		class ItemInfo: HeadgearItem
		{
			mass = 1;
			allowedSlots[] = {901,701,605};
			hiddenSelections[] = {"Camo1","Camo2"};
			hiddenSelectionsTextures[] = {"\schaun_vetement\texture\casquecross\helmet001_d7.paa","\schaun_vetement\texture\casquecross\goggle001_d1.paa"};
			uniformModel = "\schaun_vetement\casquecross.p3d";
			modelSides[] = {6};
			armor = 0;
			passThrough = 2;
		};
	};
};
class cfgMods
{
	author = "schaun";
};
