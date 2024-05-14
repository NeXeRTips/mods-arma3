////////////////////////////////////////////////////////////////////
//DeRap: Alpha_masque_payday\config.bin
//Produced from mikero's Dos Tools Dll version 9.44
//https://mikero.bytex.digital/Downloads
//'now' is Tue May 07 12:38:59 2024 : 'file' last modified on Mon Dec 12 17:59:27 2022
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Alpha_masque_payday
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class CfgGlasses
{
	class None;
	class Alpha_masque_payday: None
	{
		scope = 2;
		displayName = "Masque Payday";
		picture = "\Alpha_clothes_civ\Alpha_masque_payday\data\sans_titre.paa";
		model = "\Alpha_clothes_civ\Alpha_masque_payday\Alpha_masque_payday.p3d";
		author = "Alpha'";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Alpha_clothes_civ\Alpha_masque_payday\data\p_head_diff_002_a.paa"};
		hiddenSelectionsMaterials[] = {};
		identityTypes[] = {"NoGlasses",0,"G_NATO_default",0,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",0,"G_NATO_SF",0,"G_NATO_sniper",0,"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",0,"G_HAF_default",0,"G_CIVIL_female",0,"G_CIVIL_male",0};
	};
};
class cfgMods
{
	author = "Alpha";
	timepacked = "1670867967";
};
