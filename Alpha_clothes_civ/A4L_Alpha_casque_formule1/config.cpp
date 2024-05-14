////////////////////////////////////////////////////////////////////
//DeRap: Alpha_casque_formule1\config.bin
//Produced from mikero's Dos Tools Dll version 9.44
//https://mikero.bytex.digital/Downloads
//'now' is Tue May 07 12:38:59 2024 : 'file' last modified on Mon Dec 12 17:59:27 2022
////////////////////////////////////////////////////////////////////

#define _ARMA_

class DefaultEventhandlers;
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class CfgPatches
{
	class Alpha_casque_f1_F
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F"};
	};
};
class cfgWeapons
{
	class HelmetBase;
	class HeadgearItem;
	class Alpha_casquef1_44: HelmetBase
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "Casque F1 44";
		picture = "\Alpha_clothes_civ\Alpha_casque_formule1\data\sans_titre.paa";
		model = "\Alpha_clothes_civ\Alpha_casque_formule1\Alpha_casque_formule.p3d";
		author = "Alpha'";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Alpha_clothes_civ\Alpha_casque_formule1\data\casque_formule_co.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			picture = "\Alpha_clothes_civ\Alpha_casque_formule1\data\sans_titre.paa";
			uniformModel = "\Alpha_clothes_civ\Alpha_casque_formule1\Alpha_casque_formule.p3d";
			hiddenSelections[] = {"camo"};
			modelSides[] = {3,1};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 1;
					passThrough = 0.5;
				};
			};
		};
	};
	class Alpha_casquef1_noir: Alpha_casquef1_44
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Alpha'";
		displayName = "Casque F1 Noir";
		model = "\Alpha_clothes_civ\Alpha_casque_formule1\Alpha_casque_formule.p3d";
		hiddenSelectionsTextures[] = {"\Alpha_clothes_civ\Alpha_casque_formule1\data\p_head_diff_006_a.paa"};
	};
	class Alpha_casquef1_20: Alpha_casquef1_44
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Alpha'";
		displayName = "Casque F1 20";
		model = "\Alpha_clothes_civ\Alpha_casque_formule1\Alpha_casque_formule.p3d";
		hiddenSelectionsTextures[] = {"\Alpha_clothes_civ\Alpha_casque_formule1\data\p_head_diff_006_b.paa"};
	};
	class Alpha_casquef1_28: Alpha_casquef1_44
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Alpha'";
		displayName = "Casque F1 Redbull 28";
		model = "\Alpha_clothes_civ\Alpha_casque_formule1\Alpha_casque_formule.p3d";
		hiddenSelectionsTextures[] = {"\Alpha_clothes_civ\Alpha_casque_formule1\data\p_head_diff_006_c.paa"};
	};
	class Alpha_casquef1_53: Alpha_casquef1_44
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Alpha'";
		displayName = "Casque F1 53";
		model = "\Alpha_clothes_civ\Alpha_casque_formule1\Alpha_casque_formule.p3d";
		hiddenSelectionsTextures[] = {"\Alpha_clothes_civ\Alpha_casque_formule1\data\p_head_diff_006_d.paa"};
	};
	class Alpha_casquef1_2: Alpha_casquef1_44
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Alpha'";
		displayName = "Casque F1 2";
		model = "\Alpha_clothes_civ\Alpha_casque_formule1\Alpha_casque_formule.p3d";
		hiddenSelectionsTextures[] = {"\Alpha_clothes_civ\Alpha_casque_formule1\data\p_head_diff_006_f.paa"};
	};
	class Alpha_casquef1_ferrari: Alpha_casquef1_44
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Alpha'";
		displayName = "Casque F1 Ferrari";
		model = "\Alpha_clothes_civ\Alpha_casque_formule1\Alpha_casque_formule.p3d";
		hiddenSelectionsTextures[] = {"\Alpha_clothes_civ\Alpha_casque_formule1\data\p_head_diff_006_g.paa"};
	};
	class Alpha_casquef1_16: Alpha_casquef1_44
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Alpha'";
		displayName = "Casque F1 16";
		model = "\Alpha_clothes_civ\Alpha_casque_formule1\Alpha_casque_formule.p3d";
		hiddenSelectionsTextures[] = {"\Alpha_clothes_civ\Alpha_casque_formule1\data\p_head_diff_006_h.paa"};
	};
	class Alpha_casquef1_redbull: Alpha_casquef1_44
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Alpha'";
		displayName = "Casque F1 Redbull";
		model = "\Alpha_clothes_civ\Alpha_casque_formule1\Alpha_casque_formule.p3d";
		hiddenSelectionsTextures[] = {"\Alpha_clothes_civ\Alpha_casque_formule1\data\p_head_diff_006_i.paa"};
	};
};
class cfgMods
{
	author = "Alpha";
	timepacked = "1670867967";
};
