////////////////////////////////////////////////////////////////////
//DeRap: Alpha_casque_motocross\config.bin
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
	class Alpha_casque_cr_F
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
	class Alpha_casque_cr: HelmetBase
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "Casque Moto Cross 1";
		picture = "\Alpha_clothes_civ\Alpha_casque_motocross\data\sans_titre.paa";
		model = "\Alpha_clothes_civ\Alpha_casque_motocross\Alpha_casque_cross.p3d";
		author = "Alpha'";
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {"\Alpha_clothes_civ\Alpha_casque_motocross\data\casque_016_a_co.paa","Alpha_clothes_civ\Alpha_casque_motocross\data\lunette_015_a_co.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			picture = "\Alpha_clothes_civ\Alpha_casque_motocross\data\sans_titre.paa";
			uniformModel = "\Alpha_clothes_civ\Alpha_casque_motocross\Alpha_casque_cross.p3d";
			hiddenSelections[] = {"camo","camo1"};
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
	class Alpha_casque_cr2: Alpha_casque_cr
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Alpha'";
		displayName = "Casque Moto Cross 2";
		picture = "\Alpha_clothes_civ\Alpha_casque_motocross\data\sans_titre.paa";
		hiddenSelectionsTextures[] = {"\Alpha_clothes_civ\Alpha_casque_motocross\data\casque_016_b_co.paa","Alpha_clothes_civ\Alpha_casque_motocross\data\lunette_015_b_co.paa"};
	};
	class Alpha_casque_cr3: Alpha_casque_cr
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Alpha'";
		displayName = "Casque Moto Cross 3";
		picture = "\Alpha_clothes_civ\Alpha_casque_motocross\data\sans_titre.paa";
		hiddenSelectionsTextures[] = {"\Alpha_clothes_civ\Alpha_casque_motocross\data\casque_016_c_co.paa","Alpha_clothes_civ\Alpha_casque_motocross\data\lunette_015_c_co.paa"};
	};
	class Alpha_casque_cr4: Alpha_casque_cr
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Alpha'";
		displayName = "Casque Moto Cross 4";
		picture = "\Alpha_clothes_civ\Alpha_casque_motocross\data\sans_titre.paa";
		hiddenSelectionsTextures[] = {"\Alpha_clothes_civ\Alpha_casque_motocross\data\casque_016_d_co.paa","Alpha_clothes_civ\Alpha_casque_motocross\data\lunette_015_d_co.paa"};
	};
	class Alpha_casque_cr5: Alpha_casque_cr
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Alpha'";
		displayName = "Casque Moto Cross 5";
		picture = "\Alpha_clothes_civ\Alpha_casque_motocross\data\sans_titre.paa";
		hiddenSelectionsTextures[] = {"\Alpha_clothes_civ\Alpha_casque_motocross\data\casque_016_e_co.paa","Alpha_clothes_civ\Alpha_casque_motocross\data\lunette_015_e_co.paa"};
	};
	class Alpha_casque_cr6: Alpha_casque_cr
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Alpha'";
		displayName = "Casque Moto Cross 6";
		picture = "\Alpha_clothes_civ\Alpha_casque_motocross\data\sans_titre.paa";
		hiddenSelectionsTextures[] = {"\Alpha_clothes_civ\Alpha_casque_motocross\data\casque_016_f_co.paa","Alpha_clothes_civ\Alpha_casque_motocross\data\lunette_015_f_co.paa"};
	};
	class Alpha_casque_cr7: Alpha_casque_cr
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Alpha'";
		displayName = "Casque Moto Cross 7";
		picture = "\Alpha_clothes_civ\Alpha_casque_motocross\data\sans_titre.paa";
		hiddenSelectionsTextures[] = {"\Alpha_clothes_civ\Alpha_casque_motocross\data\casque_016_g_co.paa","Alpha_clothes_civ\Alpha_casque_motocross\data\lunette_015_g_co.paa"};
	};
	class Alpha_casque_cr8: Alpha_casque_cr
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Alpha'";
		displayName = "Casque Moto Cross 8";
		picture = "\Alpha_clothes_civ\Alpha_casque_motocross\data\sans_titre.paa";
		hiddenSelectionsTextures[] = {"\Alpha_clothes_civ\Alpha_casque_motocross\data\casque_016_h_co.paa","Alpha_clothes_civ\Alpha_casque_motocross\data\lunette_015_h_co.paa"};
	};
};
class cfgMods
{
	author = "Alpha";
	timepacked = "1670867967";
};
