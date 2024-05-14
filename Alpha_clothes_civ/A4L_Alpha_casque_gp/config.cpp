////////////////////////////////////////////////////////////////////
//DeRap: Alpha_casque_gp\config.bin
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
	class Alpha_casque_gp_F
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
	class Alpha_casque_gp: HelmetBase
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "Casque GP";
		picture = "\Alpha_clothes_civ\Alpha_casque_gp\data\sans_titre.paa";
		model = "\Alpha_clothes_civ\Alpha_casque_gp\Alpha_casque_gp.p3d";
		author = "Alpha'";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Alpha_clothes_civ\Alpha_casque_gp\data\casque1_co.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			picture = "\Alpha_clothes_civ\Alpha_casque_gp\data\sans_titre.paa";
			uniformModel = "\Alpha_clothes_civ\Alpha_casque_gp\Alpha_casque_gp.p3d";
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
	class Alpha_casque_gp2: Alpha_casque_gp
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Alpha'";
		displayName = "Casque GP 2";
		model = "\Alpha_clothes_civ\Alpha_casque_gp\Alpha_casque_gp.p3d";
		picture = "\Alpha_clothes_civ\Alpha_casque_gp\data\sans_titre.paa";
		hiddenSelectionsTextures[] = {"\Alpha_clothes_civ\Alpha_casque_gp\data\casque2_co.paa"};
	};
	class Alpha_casque_gp3: Alpha_casque_gp
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Alpha'";
		displayName = "Casque GP 3";
		model = "\Alpha_clothes_civ\Alpha_casque_gp\Alpha_casque_gp.p3d";
		picture = "\Alpha_clothes_civ\Alpha_casque_gp\data\sans_titre.paa";
		hiddenSelectionsTextures[] = {"\Alpha_clothes_civ\Alpha_casque_gp\data\casque3_co.paa"};
	};
	class Alpha_casque_gp4: Alpha_casque_gp
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Alpha'";
		displayName = "Casque GP 4";
		model = "\Alpha_clothes_civ\Alpha_casque_gp\Alpha_casque_gp.p3d";
		picture = "\Alpha_clothes_civ\Alpha_casque_gp\data\sans_titre.paa";
		hiddenSelectionsTextures[] = {"\Alpha_clothes_civ\Alpha_casque_gp\data\casque4_co.paa"};
	};
	class Alpha_casque_gp5: Alpha_casque_gp
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Alpha'";
		displayName = "Casque GP 5";
		model = "\Alpha_clothes_civ\Alpha_casque_gp\Alpha_casque_gp.p3d";
		picture = "\Alpha_clothes_civ\Alpha_casque_gp\data\sans_titre.paa";
		hiddenSelectionsTextures[] = {"\Alpha_clothes_civ\Alpha_casque_gp\data\casque5_co.paa"};
	};
	class Alpha_casque_gp6: Alpha_casque_gp
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Alpha'";
		displayName = "Casque GP 6";
		model = "\Alpha_clothes_civ\Alpha_casque_gp\Alpha_casque_gp.p3d";
		picture = "\Alpha_clothes_civ\Alpha_casque_gp\data\sans_titre.paa";
		hiddenSelectionsTextures[] = {"\Alpha_clothes_civ\Alpha_casque_gp\data\casque6_co.paa"};
	};
	class Alpha_casque_gp7: Alpha_casque_gp
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Alpha'";
		displayName = "Casque GP 7";
		model = "\Alpha_clothes_civ\Alpha_casque_gp\Alpha_casque_gp.p3d";
		picture = "\Alpha_clothes_civ\Alpha_casque_gp\data\sans_titre.paa";
		hiddenSelectionsTextures[] = {"\Alpha_clothes_civ\Alpha_casque_gp\data\casque7_co.paa"};
	};
	class Alpha_casque_gp8: Alpha_casque_gp
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Alpha'";
		displayName = "Casque GP 8";
		model = "\Alpha_clothes_civ\Alpha_casque_gp\Alpha_casque_gp.p3d";
		picture = "\Alpha_clothes_civ\Alpha_casque_gp\data\sans_titre.paa";
		hiddenSelectionsTextures[] = {"\Alpha_clothes_civ\Alpha_casque_gp\data\casque8_co.paa"};
	};
	class Alpha_casque_gp9: Alpha_casque_gp
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Alpha'";
		displayName = "Casque GP 9";
		model = "\Alpha_clothes_civ\Alpha_casque_gp\Alpha_casque_gp.p3d";
		picture = "\Alpha_clothes_civ\Alpha_casque_gp\data\sans_titre.paa";
		hiddenSelectionsTextures[] = {"\Alpha_clothes_civ\Alpha_casque_gp\data\casque9_co.paa"};
	};
};
class cfgMods
{
	author = "Alpha";
	timepacked = "1670867967";
};
