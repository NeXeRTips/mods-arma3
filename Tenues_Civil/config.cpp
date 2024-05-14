////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 9.44
//https://mikero.bytex.digital/Downloads
//'now' is Tue May 07 12:39:17 2024 : 'file' last modified on Tue May 07 12:39:17 2024
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Tenues_Civil_Addons
	{
		units[] = {"sac_noir","sac_vert","sac_rouge","sac_rose","sac_orange","sac_jaune","sac_gris","sac_bleu_marine","sac_bleu","sac_camo_militaire","sac_camo_rouge","sac_camo_bleu","sac_camo_vert","sac_camo_gris","sac_cooler_master","sac_noel","sac_noel_vert","sac_noel_blanc_01","sac_noel_blanc_02"};
		weapons[] = {"polomcdo","Bob_Pokemon_Bleu","Bob_Pokemon_Jaune","Bob_Pokemon_Orange","Bob_Pokemon_Vert","Bob_Pokemon_Violet","Bob_Halloween","Bob_Christmas","cap_noir","cap_blanche","cap_orange","cap_rose","cap_supreme_blanche","cap_supreme_noir","cap_nike_blanche","cap_nike_noir","cap_nike_jaune","cap_adidas_jaune","cap_adidas_noir","cap_adidas_blanche","cap_adidas_rouge","cap_adidas_bleu","cap_lacoste_blanche","cap_fila_blanche","cap_fila_bleu","cap_cooler_master","champion_bleu","champion_jaune","champion_noir","champion_rouge","champion_vert","champion_violet","costard_rouge","costard_kaki","costard_bleu","costard_violet","costard_blanc","costard_rose","costard_gucci","costard_rayures_vertes","costard_noel_01","costard_noel_02","V_TacVest_Halloween","V_TacVest_Noel","stinder_IG1","stinder_IG2","stinder_IG3","stinder_IG4","stinder_IG5","stinder_IG6","stinder_IG7","stinder_IG8","stinder_casq_ig","template_united","template_suisse","template_roma","template_rennes","template_real","template_psg","template_portugal","template_om","template_ol","template_napoli","template_nantes","template_monaco","template_losc","template_lorient","template_liverpool","template_lens","template_juve","template_italie","template_guingamp","template_france98","template_fcgb","template_espagne","template_dortmund","template_city","template_chelsea","template_bretagne","template_bresil","template_belgique","template_bayern","template_barca","template_athletico","template_asse","template_arsenal","template_angleterre","template_allemagne","template_ajax","template_","template_cote_d_ivoire","template_maroc","template_rdc","stinder_moto_monster","stinder_moto_yamaha","stinder_moto_ktm","stinder_moto_monster_gants","stinder_moto_yamaha_gants","stinder_moto_ktm_gants","stinder_casque_monster","stinder_casque_yamaha","stinder_casque_ktm","tshirt_organisation_civil_blanche","tshirt_organisation_civil_noir","adidas_bleu","adidas_jaune","adidas_noir","adidas_rouge","adidas_vert","adidas_violet","nike_bleu","nike_jaune","nike_noir","nike_rouge","nike_vert","nike_violet","tee_swoosh_rouge","tee_swoosh_noir","tee_swoosh_gris","tee_swoosh_bleu","tee_supreme_rouge","tee_supreme_noir","tee_supreme_bleu","tee_nike_rouge","tee_nike_noir","tee_nike_gris","tee_nike_bleu","tee_adidas_vert","tee_adidas_rouge","tee_adidas_gris","tee_adidas_bleu","BAC","civl1","civl2","civl3","civl4","civl5","civl6","civl7","civl8","civl9","civl10","civl11","civl12","civl13","civl14","civl15","civl16","civl17","civl18","civl19","civl20","civl21","civ22","civl23","civl24","civl25","civl26","civl27","civl28","civl29","civl30","civl31","civl32","civl33","civl34","tshirt_jean_nike_blanc","tshirt_jean_nike_noir","tshirt_jean_nike_jaune","tshirt_jean_nike_rouge","tshirt_jean_supreme_noir","tshirt_jean_supreme_blanc","tshirt_jean_adidas_blanc","tshirt_jean_adidas_noir","tshirt_jean_summer","tshirt_jean_surf","tshirt_jean_hulk","tshirt_jean_blanche","tshirt_jean_bleu","tshirt_jean_jaune","tshirt_jean_noir","tshirt_jean_orange","tshirt_jean_rose","tshirt_jean_rouge","tshirt_jean_vert","tenue_ete_nike_blanc","tenue_ete_nike_noir","tenue_ete_nike_jaune","tenue_ete_nike_rouge","tenue_ete_supreme_noir","tenue_ete_supreme_blanc","tenue_ete_adidas_blanc","tenue_ete_adidas_noir","tenue_ete_summer","tenue_ete_surf","tenue_ete_hulk","tenue_ete_blanche","tenue_ete_bleu","tenue_ete_jaune","tenue_ete_noir","tenue_ete_orange","tenue_ete_rose","tenue_ete_rouge","tenue_ete_vert","civl35","civl36","civl37","civl38","civl39","civl40","civl41","civl42","civl43","civl44","civl45","civl46","civl47","civl48","civl49","civl50","civl51","civl52","civl53","civl54","civl55","civl56","civl57","civl58","civl59","civl60","civl61","civl62","civl63","civl64","civl65","civl66","civl67","civl68","civl69"};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F","A3_Characters_F_Civil","EF_2020","A3_Weapons_F_Ammoboxes","A3_Characters_F_Common","A3_Characters_F_Kart"};
	};
};
class CfgVehicles
{
	class B_RangeMaster_F;
	class B_Soldier_base_F;
	class B_Competitor_F;
	class C_man_pilot_F;
	class C_Driver_1_white_F;
	class Bag_Base;
	class C_man_p_fugitive_F;
	class C_Man_casual_4_F;
	class I_L_Uniform_01_tshirt_skull_F;
	class polomcdo: B_RangeMaster_F
	{
		_generalMacro = "B_RangeMaster_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "polomcdo";
		model = "\A3\Characters_F\Civil\c_poloshirtpants.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Autre\polomcdo.paa"};
		displayName = "Polo McDonalds";
		author = "A3F";
	};
	class champion_bleu: B_RangeMaster_F
	{
		_generalMacro = "B_RangeMaster_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "champion_bleu";
		model = "\A3\Characters_F\Civil\c_poloshirtpants.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Champion\champion_bleu.paa"};
		displayName = "Polo Champion Bleu";
		author = "A3F";
	};
	class champion_jaune: B_RangeMaster_F
	{
		_generalMacro = "B_RangeMaster_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "champion_jaune";
		model = "\A3\Characters_F\Civil\c_poloshirtpants.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Champion\champion_jaune.paa"};
		displayName = "Polo Champion Jaune";
		author = "A3F";
	};
	class champion_noir: B_RangeMaster_F
	{
		_generalMacro = "B_RangeMaster_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "champion_noir";
		model = "\A3\Characters_F\Civil\c_poloshirtpants.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Champion\champion_noir.paa"};
		displayName = "Polo Champion Noir";
		author = "A3F";
	};
	class champion_rouge: B_RangeMaster_F
	{
		_generalMacro = "B_RangeMaster_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "champion_rouge";
		model = "\A3\Characters_F\Civil\c_poloshirtpants.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Champion\champion_rouge.paa"};
		displayName = "Polo Champion Rouge";
		author = "A3F";
	};
	class champion_vert: B_RangeMaster_F
	{
		_generalMacro = "B_RangeMaster_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "champion_vert";
		model = "\A3\Characters_F\Civil\c_poloshirtpants.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Champion\champion_vert.paa"};
		displayName = "Polo Champion Vert";
		author = "A3F";
	};
	class champion_violet: B_RangeMaster_F
	{
		_generalMacro = "B_RangeMaster_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "champion_violet";
		model = "\A3\Characters_F\Civil\c_poloshirtpants.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Champion\champion_violet.paa"};
		displayName = "Polo Champion Violet";
		author = "A3F";
	};
	class costard_rouge: B_Soldier_base_F
	{
		scope = 1;
		model = "\EF\data\EF_suit.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Costard\costard_rouge.paa"};
		hiddenSelectionsMaterials[] = {"\EF\data\functionary.rvmat"};
	};
	class costard_bleu: B_Soldier_base_F
	{
		scope = 1;
		model = "\EF\data\EF_suit.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Costard\costard_bleu.paa"};
		hiddenSelectionsMaterials[] = {"\EF\data\functionary.rvmat"};
	};
	class costard_blanc: B_Soldier_base_F
	{
		scope = 1;
		model = "\EF\data\EF_suit.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Costard\costard_blanc.paa"};
		hiddenSelectionsMaterials[] = {"\EF\data\functionary.rvmat"};
	};
	class costard_rose: B_Soldier_base_F
	{
		scope = 1;
		model = "\EF\data\EF_suit.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Costard\costard_rose.paa"};
		hiddenSelectionsMaterials[] = {"\EF\data\functionary.rvmat"};
	};
	class costard_kaki: B_Soldier_base_F
	{
		scope = 1;
		model = "\EF\data\EF_suit.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Costard\costard_kaki.paa"};
		hiddenSelectionsMaterials[] = {"\EF\data\functionary.rvmat"};
	};
	class costard_violet: B_Soldier_base_F
	{
		scope = 1;
		model = "\EF\data\EF_suit.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Costard\costard_violet.paa"};
		hiddenSelectionsMaterials[] = {"\EF\data\functionary.rvmat"};
	};
	class costard_gucci: B_Soldier_base_F
	{
		scope = 1;
		model = "\EF\data\EF_suit.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Costard\costard_gucci.paa"};
		hiddenSelectionsMaterials[] = {"\EF\data\functionary.rvmat"};
	};
	class costard_rayures_vertes: B_Soldier_base_F
	{
		scope = 1;
		model = "\EF\data\EF_suit.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Costard\costard_rayures_vertes.paa"};
		hiddenSelectionsMaterials[] = {"\EF\data\functionary.rvmat"};
	};
	class costard_noel_01: B_Soldier_base_F
	{
		scope = 1;
		model = "\EF\data\EF_suit.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Costard\costard_noel_01.paa"};
		hiddenSelectionsMaterials[] = {"\EF\data\functionary.rvmat"};
	};
	class costard_noel_02: B_Soldier_base_F
	{
		scope = 1;
		model = "\EF\data\EF_suit.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Costard\costard_noel_02.paa"};
		hiddenSelectionsMaterials[] = {"\EF\data\functionary.rvmat"};
	};
	class template_united: C_man_p_fugitive_F
	{
		author = "";
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "template_united";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Maillot_Foot\template_united.paa"};
		displayName = "Maillot United";
	};
	class template_suisse: C_man_p_fugitive_F
	{
		author = "";
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "template_suisse";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Maillot_Foot\template_suisse.paa"};
		displayName = "Maillot Suisse";
	};
	class template_roma: C_man_p_fugitive_F
	{
		author = "";
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "template_roma";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Maillot_Foot\template_roma.paa"};
		displayName = "Maillot Roma";
	};
	class template_rennes: C_man_p_fugitive_F
	{
		author = "";
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "template_rennes";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Maillot_Foot\template_rennes.paa"};
		displayName = "Maillot Rennes";
	};
	class template_real: C_man_p_fugitive_F
	{
		author = "";
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "template_real";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Maillot_Foot\template_real.paa"};
		displayName = "Maillot Real";
	};
	class template_psg: C_man_p_fugitive_F
	{
		author = "";
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "template_psg";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Maillot_Foot\template_psg.paa"};
		displayName = "Maillot PSG";
	};
	class template_portugal: C_man_p_fugitive_F
	{
		author = "";
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "template_portugal";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Maillot_Foot\template_portugal.paa"};
		displayName = "Maillot Portugal";
	};
	class template_om: C_man_p_fugitive_F
	{
		author = "";
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "template_om";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Maillot_Foot\template_om.paa"};
		displayName = "Maillot OM";
	};
	class template_ol: C_man_p_fugitive_F
	{
		author = "";
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "template_ol";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Maillot_Foot\template_ol.paa"};
		displayName = "Maillot OL";
	};
	class template_napoli: C_man_p_fugitive_F
	{
		author = "";
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "template_napoli";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Maillot_Foot\template_napoli.paa"};
		displayName = "Maillot Napoli";
	};
	class template_nantes: C_man_p_fugitive_F
	{
		author = "";
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "template_nantes";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Maillot_Foot\template_nantes.paa"};
		displayName = "Maillot Nantes";
	};
	class template_monaco: C_man_p_fugitive_F
	{
		author = "";
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "template_monaco";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Maillot_Foot\template_monaco.paa"};
		displayName = "Maillot Monaco";
	};
	class template_losc: C_man_p_fugitive_F
	{
		author = "";
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "template_losc";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Maillot_Foot\template_losc.paa"};
		displayName = "Maillot Losc";
	};
	class template_lorient: C_man_p_fugitive_F
	{
		author = "";
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "template_lorient";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Maillot_Foot\template_lorient.paa"};
		displayName = "Maillot Lorient";
	};
	class template_liverpool: C_man_p_fugitive_F
	{
		author = "";
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "template_liverpool";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Maillot_Foot\template_liverpool.paa"};
		displayName = "Maillot Liverpool";
	};
	class template_lens: C_man_p_fugitive_F
	{
		author = "";
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "template_lens";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Maillot_Foot\template_lens.paa"};
		displayName = "Maillot Lens";
	};
	class template_juve: C_man_p_fugitive_F
	{
		author = "";
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "template_juve";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Maillot_Foot\template_juve.paa"};
		displayName = "Maillot Juve";
	};
	class template_italie: C_man_p_fugitive_F
	{
		author = "";
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "template_italie";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Maillot_Foot\template_italie.paa"};
		displayName = "Maillot Italie";
	};
	class template_guingamp: C_man_p_fugitive_F
	{
		author = "";
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "template_guingamp";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Maillot_Foot\template_guingamp.paa"};
		displayName = "Maillot Guingamp";
	};
	class template_france98: C_man_p_fugitive_F
	{
		author = "";
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "template_france98";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Maillot_Foot\template_france98.paa"};
		displayName = "Maillot France 98";
	};
	class template_fcgb: C_man_p_fugitive_F
	{
		author = "";
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "template_fcgb";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Maillot_Foot\template_fcgb.paa"};
		displayName = "Maillot FCGB";
	};
	class template_espagne: C_man_p_fugitive_F
	{
		author = "";
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "template_espagne";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Maillot_Foot\template_espagne.paa"};
		displayName = "Maillot Espagne";
	};
	class template_dortmund: C_man_p_fugitive_F
	{
		author = "";
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "template_dortmund";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Maillot_Foot\template_dortmund.paa"};
		displayName = "Maillot Dortmund";
	};
	class template_city: C_man_p_fugitive_F
	{
		author = "";
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "template_city";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Maillot_Foot\template_city.paa"};
		displayName = "Maillot City";
	};
	class template_chelsea: C_man_p_fugitive_F
	{
		author = "";
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "template_chelsea";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Maillot_Foot\template_chelsea.paa"};
		displayName = "Maillot Chelsea";
	};
	class template_bretagne: C_man_p_fugitive_F
	{
		author = "";
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "template_bretagne";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Maillot_Foot\template_bretagne.paa"};
		displayName = "Maillot Bretagne";
	};
	class template_bresil: C_man_p_fugitive_F
	{
		author = "";
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "template_bresil";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Maillot_Foot\template_bresil.paa"};
		displayName = "Maillot Bresil";
	};
	class template_belgique: C_man_p_fugitive_F
	{
		author = "";
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "template_belgique";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Maillot_Foot\template_belgique.paa"};
		displayName = "Maillot Belgique";
	};
	class template_bayern: C_man_p_fugitive_F
	{
		author = "";
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "template_bayern";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Maillot_Foot\template_bayern.paa"};
		displayName = "Maillot Bayern";
	};
	class template_barca: C_man_p_fugitive_F
	{
		author = "";
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "template_barca";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Maillot_Foot\template_barca.paa"};
		displayName = "Maillot Barca";
	};
	class template_athletico: C_man_p_fugitive_F
	{
		author = "";
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "template_athletico";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Maillot_Foot\template_athletico.paa"};
		displayName = "Maillot Atlético";
	};
	class template_asse: C_man_p_fugitive_F
	{
		author = "";
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "template_asse";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Maillot_Foot\template_asse.paa"};
		displayName = "Maillot Asse";
	};
	class template_arsenal: C_man_p_fugitive_F
	{
		author = "";
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "template_arsenal";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Maillot_Foot\template_arsenal.paa"};
		displayName = "Maillot Arsenal";
	};
	class template_angleterre: C_man_p_fugitive_F
	{
		author = "";
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "template_angleterre";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Maillot_Foot\template_angleterre.paa"};
		displayName = "Maillot Angleterre";
	};
	class template_allemagne: C_man_p_fugitive_F
	{
		author = "";
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "template_allemagne";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Maillot_Foot\template_allemagne.paa"};
		displayName = "Maillot Allemagne";
	};
	class template_ajax: C_man_p_fugitive_F
	{
		author = "";
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "template_ajax";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Maillot_Foot\template_ajax.paa"};
		displayName = "Maillot Ajax";
	};
	class template_: C_man_p_fugitive_F
	{
		author = "";
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "template_";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Maillot_Foot\template_.paa"};
		displayName = "Maillot ";
	};
	class template_cote_d_ivoire: C_man_p_fugitive_F
	{
		author = "Joel Mukanga";
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "template_cote_d_ivoire";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Maillot_Foot\template_cote_d_ivoire.paa"};
		displayName = "Maillot Cote Ivoire";
	};
	class template_maroc: C_man_p_fugitive_F
	{
		author = "Joel Mukanga";
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "template_maroc";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Maillot_Foot\template_maroc.paa"};
		displayName = "Maillot Maroc";
	};
	class template_rdc: C_man_p_fugitive_F
	{
		author = "Joel Mukanga";
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "template_rdc";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Maillot_Foot\template_rdc.paa"};
		displayName = "Maillot RDC";
	};
	class stinder_moto_monster: C_man_pilot_F
	{
		author = "A3F";
		_generalMacro = "C_man_pilot_F";
		scope = 1;
		displayName = "Combinaison de moto MONSTER";
		nakedUniform = "U_BasicBody";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Moto\stinder_combi_monster.paa"};
	};
	class stinder_moto_yamaha: C_man_pilot_F
	{
		author = "A3F";
		_generalMacro = "C_man_pilot_F";
		scope = 1;
		displayName = "Combinaison de moto YAMAHA";
		nakedUniform = "U_BasicBody";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Moto\stinder_combi_yamaha.paa"};
	};
	class stinder_moto_ktm: C_man_pilot_F
	{
		author = "A3F";
		_generalMacro = "C_man_pilot_F";
		scope = 1;
		displayName = "Combinaison de moto KTM";
		nakedUniform = "U_BasicBody";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Moto\stinder_combi_ktm.paa"};
	};
	class stinder_moto_monster_gants: C_Driver_1_white_F
	{
		_generalMacro = "C_Driver_1_white_F";
		scope = 1;
		displayName = "Combinaison de moto MONSTER 2";
		nakedUniform = "U_BasicBody";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Moto\stinder_combi_monster.paa"};
	};
	class stinder_moto_yamaha_gants: C_Driver_1_white_F
	{
		_generalMacro = "C_Driver_1_white_F";
		scope = 1;
		displayName = "Combinaison de moto YAMAHA 2";
		nakedUniform = "U_BasicBody";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Moto\stinder_combi_yamaha.paa"};
	};
	class stinder_moto_ktm_gants: C_Driver_1_white_F
	{
		_generalMacro = "C_Driver_1_white_F";
		scope = 1;
		displayName = "Combinaison de moto KTM 2";
		nakedUniform = "U_BasicBody";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Moto\stinder_combi_ktm.paa"};
	};
	class tshirt_organisation_civil_blanche: B_RangeMaster_F
	{
		_generalMacro = "B_RangeMaster_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "tshirt_organisation_civil_blanche";
		model = "\A3\Characters_F\Civil\c_poloshirtpants.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Organisation\tshirt_organisation_civil_blanche.paa"};
		displayName = "Tenue Organisateur Blanche";
		author = "A3F";
	};
	class tshirt_organisation_civil_noir: B_RangeMaster_F
	{
		_generalMacro = "B_RangeMaster_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "tshirt_organisation_civil_noir";
		model = "\A3\Characters_F\Civil\c_poloshirtpants.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Organisation\tshirt_organisation_civil_noir.paa"};
		displayName = "Tenue Organisateur Noir";
		author = "A3F";
	};
	class adidas_bleu: B_RangeMaster_F
	{
		_generalMacro = "B_RangeMaster_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "adidas_bleu";
		model = "\A3\Characters_F\Civil\c_poloshirtpants.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Polo\adidas_bleu.paa"};
		displayName = "Polo Adidas Bleu";
		author = "A3F";
	};
	class adidas_jaune: B_RangeMaster_F
	{
		_generalMacro = "B_RangeMaster_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "adidas_jaune";
		model = "\A3\Characters_F\Civil\c_poloshirtpants.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Polo\adidas_jaune.paa"};
		displayName = "Polo Adidas Jaune";
		author = "A3F";
	};
	class adidas_noir: B_RangeMaster_F
	{
		_generalMacro = "B_RangeMaster_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "adidas_noir";
		model = "\A3\Characters_F\Civil\c_poloshirtpants.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Polo\adidas_noir.paa"};
		displayName = "Polo Adidas Noir";
		author = "A3F";
	};
	class adidas_rouge: B_RangeMaster_F
	{
		_generalMacro = "B_RangeMaster_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "adidas_rouge";
		model = "\A3\Characters_F\Civil\c_poloshirtpants.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Polo\adidas_rouge.paa"};
		displayName = "Polo Adidas Rouge";
		author = "A3F";
	};
	class adidas_vert: B_RangeMaster_F
	{
		_generalMacro = "B_RangeMaster_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "adidas_vert";
		model = "\A3\Characters_F\Civil\c_poloshirtpants.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Polo\adidas_vert.paa"};
		displayName = "Polo Adidas Vert";
		author = "A3F";
	};
	class adidas_violet: B_RangeMaster_F
	{
		_generalMacro = "B_RangeMaster_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "adidas_violet";
		model = "\A3\Characters_F\Civil\c_poloshirtpants.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Polo\adidas_violet.paa"};
		displayName = "Polo Adidas Violet";
		author = "A3F";
	};
	class nike_bleu: B_RangeMaster_F
	{
		_generalMacro = "B_RangeMaster_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "nike_bleu";
		model = "\A3\Characters_F\Civil\c_poloshirtpants.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Polo\nike_bleu.paa"};
		displayName = "Polo Nike Bleu";
		author = "A3F";
	};
	class nike_jaune: B_RangeMaster_F
	{
		_generalMacro = "B_RangeMaster_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "nike_jaune";
		model = "\A3\Characters_F\Civil\c_poloshirtpants.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Polo\nike_jaune.paa"};
		displayName = "Polo Nike Jaune";
		author = "A3F";
	};
	class nike_noir: B_RangeMaster_F
	{
		_generalMacro = "B_RangeMaster_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "nike_noir";
		model = "\A3\Characters_F\Civil\c_poloshirtpants.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Polo\nike_noir.paa"};
		displayName = "Polo Nike Noir";
		author = "A3F";
	};
	class nike_rouge: B_RangeMaster_F
	{
		_generalMacro = "B_RangeMaster_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "nike_rouge";
		model = "\A3\Characters_F\Civil\c_poloshirtpants.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Polo\nike_rouge.paa"};
		displayName = "Polo Nike Rouge";
		author = "A3F";
	};
	class nike_violet: B_RangeMaster_F
	{
		_generalMacro = "B_RangeMaster_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "nike_violet";
		model = "\A3\Characters_F\Civil\c_poloshirtpants.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Polo\nike_violet.paa"};
		displayName = "Polo Nike Violet";
		author = "A3F";
	};
	class nike_vert: B_RangeMaster_F
	{
		_generalMacro = "B_RangeMaster_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "nike_vert";
		model = "\A3\Characters_F\Civil\c_poloshirtpants.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Polo\nike_vert.paa"};
		displayName = "Polo Nike Vert";
		author = "A3F";
	};
	class sac_noir: Bag_Base
	{
		author = "A3F";
		scope = 2;
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		displayName = "Sac à dos (Noir)";
		picture = "\Tenues_Civil\data\icons\Sac_A_Dos\sac_noir.paa";
		hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_fast_blk_co.paa"};
		maximumLoad = 280;
		mass = 15;
	};
	class sac_vert: Bag_Base
	{
		author = "A3F";
		scope = 2;
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		displayName = "Sac à dos (Vert)";
		picture = "\Tenues_Civil\data\icons\Sac_A_Dos\sac_vert.paa";
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Sac_A_Dos\sac_vert.paa"};
		maximumLoad = 280;
		mass = 15;
	};
	class sac_rouge: Bag_Base
	{
		author = "A3F";
		scope = 2;
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		displayName = "Sac à dos (Rouge)";
		picture = "\Tenues_Civil\data\icons\Sac_A_Dos\sac_rouge.paa";
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Sac_A_Dos\sac_rouge.paa"};
		maximumLoad = 280;
		mass = 15;
	};
	class sac_rose: Bag_Base
	{
		author = "A3F";
		scope = 2;
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		displayName = "Sac à dos (Rose)";
		picture = "\Tenues_Civil\data\icons\Sac_A_Dos\sac_rose.paa";
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Sac_A_Dos\sac_rose.paa"};
		maximumLoad = 280;
		mass = 15;
	};
	class sac_orange: Bag_Base
	{
		author = "A3F";
		scope = 2;
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		displayName = "Sac à dos (Orange)";
		picture = "\Tenues_Civil\data\icons\Sac_A_Dos\sac_orange.paa";
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Sac_A_Dos\sac_orange.paa"};
		maximumLoad = 280;
		mass = 15;
	};
	class sac_jaune: Bag_Base
	{
		author = "A3F";
		scope = 2;
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		displayName = "Sac à dos (Jaune)";
		picture = "\Tenues_Civil\data\icons\Sac_A_Dos\sac_jaune.paa";
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Sac_A_Dos\sac_jaune.paa"};
		maximumLoad = 280;
		mass = 15;
	};
	class sac_gris: Bag_Base
	{
		author = "A3F";
		scope = 2;
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		displayName = "Sac à dos (Gris)";
		picture = "\Tenues_Civil\data\icons\Sac_A_Dos\sac_gris.paa";
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Sac_A_Dos\sac_gris.paa"};
		maximumLoad = 280;
		mass = 15;
	};
	class sac_bleu_marine: Bag_Base
	{
		author = "A3F";
		scope = 2;
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		displayName = "Sac à dos (Bleu-marine)";
		picture = "\Tenues_Civil\data\icons\Sac_A_Dos\sac_bleu_marine.paa";
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Sac_A_Dos\sac_bleu_marine.paa"};
		maximumLoad = 280;
		mass = 15;
	};
	class sac_bleu: Bag_Base
	{
		author = "A3F";
		scope = 2;
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		displayName = "Sac à dos (Bleu)";
		picture = "\Tenues_Civil\data\icons\Sac_A_Dos\sac_bleu.paa";
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Sac_A_Dos\sac_bleu.paa"};
		maximumLoad = 280;
		mass = 15;
	};
	class sac_camo_militaire: Bag_Base
	{
		author = "A3F";
		scope = 2;
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		displayName = "Sac à dos - Camo (Militaire)";
		picture = "\Tenues_Civil\data\icons\Sac_A_Dos\sac_camo_militaire.paa";
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Sac_A_Dos\sac_camo_militaire.paa"};
		maximumLoad = 280;
		mass = 15;
	};
	class sac_camo_rouge: Bag_Base
	{
		author = "A3F";
		scope = 2;
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		displayName = "Sac à dos - Camo (Rouge)";
		picture = "\Tenues_Civil\data\icons\Sac_A_Dos\sac_camo_rouge.paa";
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Sac_A_Dos\sac_camo_rouge.paa"};
		maximumLoad = 280;
		mass = 15;
	};
	class sac_camo_bleu: Bag_Base
	{
		author = "A3F";
		scope = 2;
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		displayName = "Sac à dos - Camo (Bleu)";
		picture = "\Tenues_Civil\data\icons\Sac_A_Dos\sac_camo_bleu.paa";
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Sac_A_Dos\sac_camo_bleu.paa"};
		maximumLoad = 280;
		mass = 15;
	};
	class sac_camo_vert: Bag_Base
	{
		author = "A3F";
		scope = 2;
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		displayName = "Sac à dos - Camo (Vert)";
		picture = "\Tenues_Civil\data\icons\Sac_A_Dos\sac_camo_vert.paa";
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Sac_A_Dos\sac_camo_vert.paa"};
		maximumLoad = 280;
		mass = 15;
	};
	class sac_camo_gris: Bag_Base
	{
		author = "A3F";
		scope = 2;
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		displayName = "Sac à dos - Camo (Gris)";
		picture = "\Tenues_Civil\data\icons\Sac_A_Dos\sac_camo_gris.paa";
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Sac_A_Dos\sac_camo_gris.paa"};
		maximumLoad = 280;
		mass = 15;
	};
	class sac_noel: Bag_Base
	{
		author = "A3F";
		scope = 2;
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		displayName = "Sac à dos - Noël (rouge)";
		picture = "\Tenues_Civil\data\icons\Sac_A_Dos\sac_noel.paa";
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Sac_A_Dos\sac_noel.paa"};
		maximumLoad = 280;
		mass = 15;
	};
	class sac_noel_vert: Bag_Base
	{
		author = "A3F";
		scope = 2;
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		displayName = "Sac à dos - Noël (vert)";
		picture = "\Tenues_Civil\data\icons\Sac_A_Dos\sac_noel_vert.paa";
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Sac_A_Dos\sac_noel_vert.paa"};
		maximumLoad = 280;
		mass = 15;
	};
	class sac_noel_blanc_01: Bag_Base
	{
		author = "A3F";
		scope = 2;
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		displayName = "Sac à dos - Noël (blanc, type 1)";
		picture = "\Tenues_Civil\data\icons\Sac_A_Dos\sac_noel_blanc_01.paa";
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Sac_A_Dos\sac_noel_blanc_01.paa"};
		maximumLoad = 280;
		mass = 15;
	};
	class sac_noel_blanc_02: Bag_Base
	{
		author = "A3F";
		scope = 2;
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		displayName = "Sac à dos - Noël (blanc, type 2)";
		picture = "\Tenues_Civil\data\icons\Sac_A_Dos\sac_noel_blanc_02.paa";
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Sac_A_Dos\sac_noel_blanc_02.paa"};
		maximumLoad = 280;
		mass = 15;
	};
	class tee_swoosh_rouge: C_man_p_fugitive_F
	{
		author = "";
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "tee_swoosh_rouge";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt\tee_swoosh_rouge.paa"};
		displayName = "T-Shirt Nike Rouge";
	};
	class tee_swoosh_noir: C_man_p_fugitive_F
	{
		author = "";
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = " tee_swoosh_noir";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt\tee_swoosh_noir.paa"};
		displayName = "T-Shirt Nike Noir";
	};
	class tee_swoosh_gris: C_man_p_fugitive_F
	{
		author = "";
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "tee_swoosh_gris";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt\tee_swoosh_gris.paa"};
		displayName = "T-Shirt Nike Gris";
	};
	class tee_swoosh_bleu: C_man_p_fugitive_F
	{
		author = "";
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "tee_swoosh_bleu";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt\tee_swoosh_bleu.paa"};
		displayName = "T-Shirt Nike Bleu";
	};
	class tee_supreme_rouge: C_man_p_fugitive_F
	{
		author = "";
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "tee_supreme_rouge";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt\tee_supreme_rouge.paa"};
		displayName = "T-Shirt Supreme Rouge";
	};
	class tee_supreme_noir: C_man_p_fugitive_F
	{
		author = "";
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "tee_supreme_noir";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt\tee_supreme_noir.paa"};
		displayName = "T-Shirt Supreme Noir";
	};
	class tee_supreme_bleu: C_man_p_fugitive_F
	{
		author = "";
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "tee_supreme_bleu";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt\tee_supreme_bleu.paa"};
		displayName = "T-Shirt Supreme Bleu";
	};
	class tee_nike_rouge: C_man_p_fugitive_F
	{
		author = "";
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "tee_nike_rouge";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt\tee_nike_rouge.paa"};
		displayName = "T-Shirt Nike Rouge";
	};
	class tee_nike_noir: C_man_p_fugitive_F
	{
		author = "";
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "tee_nike_noir";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt\tee_nike_noir.paa"};
		displayName = "T-Shirt Nike Noir";
	};
	class tee_nike_gris: C_man_p_fugitive_F
	{
		author = "";
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "tee_nike_gris";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt\tee_nike_gris.paa"};
		displayName = "T-Shirt Nike Gris";
	};
	class tee_nike_bleu: C_man_p_fugitive_F
	{
		author = "";
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "tee_nike_bleu";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt\tee_nike_bleu.paa"};
		displayName = "T-Shirt Nike Bleu";
	};
	class tee_adidas_vert: C_man_p_fugitive_F
	{
		author = "";
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "tee_adidas_vert";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt\tee_adidas_vert.paa"};
		displayName = "T-Shirt Adidas Vert";
	};
	class tee_adidas_rouge: C_man_p_fugitive_F
	{
		author = "";
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "tee_adidas_rouge";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt\tee_adidas_rouge.paa"};
		displayName = "T-Shirt Adidas Rouge";
	};
	class tee_adidas_gris: C_man_p_fugitive_F
	{
		author = "";
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "tee_adidas_gris";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt\tee_adidas_gris.paa"};
		displayName = "T-Shirt Adidas Gris";
	};
	class tee_adidas_bleu: C_man_p_fugitive_F
	{
		author = "";
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "tee_adidas_bleu";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt\tee_adidas_bleu.paa"};
		displayName = "T-Shirt Adidas Bleu";
	};
	class BAC: C_man_p_fugitive_F
	{
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		displayName = "Uniform_BAC";
		nakedUniform = "U_BasicBody";
		uniformClass = "BAC";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Futur\bac.paa"};
	};
	class always: C_man_p_fugitive_F
	{
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		displayName = "Uniform_Always";
		nakedUniform = "U_BasicBody";
		uniformClass = "civil1";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Futur\always.paa"};
	};
	class batman: C_man_p_fugitive_F
	{
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		displayName = "Uniform_Batman";
		nakedUniform = "U_BasicBody";
		uniformClass = "civil2";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Futur\batman.paa"};
	};
	class bleu: C_man_p_fugitive_F
	{
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		displayName = "Uniform_Bleu";
		nakedUniform = "U_BasicBody";
		uniformClass = "civil3";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Futur\bleu.paa"};
	};
	class breakingbad: C_man_p_fugitive_F
	{
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		displayName = "Uniform_Breakingbad";
		nakedUniform = "U_BasicBody";
		uniformClass = "civil4";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Futur\breakingbad.paa"};
	};
	class deadpool: C_man_p_fugitive_F
	{
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		displayName = "Uniform_Bleu";
		nakedUniform = "U_BasicBody";
		uniformClass = "civil5";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Futur\deadpool.paa"};
	};
	class dragon: C_man_p_fugitive_F
	{
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		displayName = "Uniform_Dragon";
		nakedUniform = "U_BasicBody";
		uniformClass = "civil6";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Futur\dragon.paa"};
	};
	class excelsior: C_man_p_fugitive_F
	{
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		displayName = "Uniform_Excelsior";
		nakedUniform = "U_BasicBody";
		uniformClass = "civil7";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Futur\excelsior.paa"};
	};
	class geek: C_man_p_fugitive_F
	{
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		displayName = "Uniform_Geek";
		nakedUniform = "U_BasicBody";
		uniformClass = "civil8";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Futur\geek.paa"};
	};
	class jaune: C_man_p_fugitive_F
	{
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		displayName = "Uniform_Jaune";
		nakedUniform = "U_BasicBody";
		uniformClass = "civil9";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Futur\jaune.paa"};
	};
	class lumiere: C_man_p_fugitive_F
	{
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		displayName = "Uniform_Lumiere";
		nakedUniform = "U_BasicBody";
		uniformClass = "civil10";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Futur\lumiere.paa"};
	};
	class manga: C_man_p_fugitive_F
	{
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		displayName = "Uniform_Manga";
		nakedUniform = "U_BasicBody";
		uniformClass = "civil11";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Futur\manga.paa"};
	};
	class mort: C_man_p_fugitive_F
	{
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		displayName = "Uniform_Mort";
		nakedUniform = "U_BasicBody";
		uniformClass = "civil12";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Futur\mort.paa"};
	};
	class rouge: C_man_p_fugitive_F
	{
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		displayName = "Uniform_Rouge";
		nakedUniform = "U_BasicBody";
		uniformClass = "civil13";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Futur\rouge.paa"};
	};
	class tokyo: C_man_p_fugitive_F
	{
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		displayName = "Uniform_Tokyo";
		nakedUniform = "U_BasicBody";
		uniformClass = "civil14";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Futur\tokyo.paa"};
	};
	class TshirtV: C_man_p_fugitive_F
	{
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		displayName = "Uniform_TshirtV";
		nakedUniform = "U_BasicBody";
		uniformClass = "civil15";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Futur\TshirtV.paa"};
	};
	class worms: C_man_p_fugitive_F
	{
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		displayName = "Uniform_Worms";
		nakedUniform = "U_BasicBody";
		uniformClass = "civil16";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Futur\worms.paa"};
	};
	class charnel: C_man_p_fugitive_F
	{
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		displayName = "Uniform_charnel";
		nakedUniform = "U_BasicBody";
		uniformClass = "civil17";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Futur\charnel.paa"};
	};
	class fruit: C_man_p_fugitive_F
	{
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		displayName = "Uniform_fruit";
		nakedUniform = "U_BasicBody";
		uniformClass = "civil18";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Futur\fruit.paa"};
	};
	class grove: C_man_p_fugitive_F
	{
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		displayName = "Uniform_grove";
		nakedUniform = "U_BasicBody";
		uniformClass = "civil19";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Futur\grove_studio.paa"};
	};
	class minions: C_man_p_fugitive_F
	{
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		displayName = "Uniform_minions";
		nakedUniform = "U_BasicBody";
		uniformClass = "civil20";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Futur\minions.paa"};
	};
	class myband: C_man_p_fugitive_F
	{
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		displayName = "Uniform_myband";
		nakedUniform = "U_BasicBody";
		uniformClass = "civil21";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Futur\my_band.paa"};
	};
	class noob: C_man_p_fugitive_F
	{
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		displayName = "Uniform_noob";
		nakedUniform = "U_BasicBody";
		uniformClass = "civil22";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Futur\noob.paa"};
	};
	class obey: C_man_p_fugitive_F
	{
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		displayName = "Uniform_obey";
		nakedUniform = "U_BasicBody";
		uniformClass = "civil23";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Futur\obey.paa"};
	};
	class performance: C_man_p_fugitive_F
	{
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		displayName = "Uniform_performance";
		nakedUniform = "U_BasicBody";
		uniformClass = "civil24";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Futur\performance.paa"};
	};
	class rocksmith: C_man_p_fugitive_F
	{
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		displayName = "Uniform_rocksmith";
		nakedUniform = "U_BasicBody";
		uniformClass = "civil25";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Futur\rocksmith.paa"};
	};
	class rubi: C_man_p_fugitive_F
	{
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		displayName = "Uniform_rubi";
		nakedUniform = "U_BasicBody";
		uniformClass = "civil26";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Futur\rubi.paa"};
	};
	class serveur: C_man_p_fugitive_F
	{
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		displayName = "Uniform_serveur";
		nakedUniform = "U_BasicBody";
		uniformClass = "civil27";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Futur\serveur.paa"};
	};
	class serveur_2: C_man_p_fugitive_F
	{
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		displayName = "Uniform_serveur_2";
		nakedUniform = "U_BasicBody";
		uniformClass = "civil28";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Futur\serveur_2.paa"};
	};
	class serveur_3: C_man_p_fugitive_F
	{
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		displayName = "Uniform_serveur_3";
		nakedUniform = "U_BasicBody";
		uniformClass = "civil29";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Futur\serveur_3.paa"};
	};
	class serveur_4: C_man_p_fugitive_F
	{
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		displayName = "Uniform_serveur_4";
		nakedUniform = "U_BasicBody";
		uniformClass = "civil30";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Futur\serveur_4.paa"};
	};
	class store: C_man_p_fugitive_F
	{
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		displayName = "Uniform_store";
		nakedUniform = "U_BasicBody";
		uniformClass = "civil31";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Futur\store.paa"};
	};
	class swg: C_man_p_fugitive_F
	{
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		displayName = "Uniform_swg";
		nakedUniform = "U_BasicBody";
		uniformClass = "civil32";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Futur\swg.paa"};
	};
	class us_army: C_man_p_fugitive_F
	{
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		displayName = "Uniform_us_army";
		nakedUniform = "U_BasicBody";
		uniformClass = "civil33";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Futur\us_army.paa"};
	};
	class z: C_man_p_fugitive_F
	{
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		displayName = "Uniform_z";
		nakedUniform = "U_BasicBody";
		uniformClass = "civil34";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Futur\z.paa"};
	};
	class tshirt_jean_nike_blanc: I_L_Uniform_01_tshirt_skull_F
	{
		author = "A3F";
		_generalMacro = "I_L_Uniform_01_tshirt_skull_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "tshirt_jean_nike_blanc";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Jean\nike_blanc.paa"};
		displayName = "T-shirt et jean - Nike (Blanc)";
	};
	class tshirt_jean_nike_noir: I_L_Uniform_01_tshirt_skull_F
	{
		author = "A3F";
		_generalMacro = "I_L_Uniform_01_tshirt_skull_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "tshirt_jean_nike_noir";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Jean\nike_noir.paa"};
		displayName = "T-shirt et jean - Nike (Noir)";
	};
	class tshirt_jean_nike_jaune: I_L_Uniform_01_tshirt_skull_F
	{
		author = "A3F";
		_generalMacro = "I_L_Uniform_01_tshirt_skull_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "tshirt_jean_nike_jaune";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Jean\nike_jaune.paa"};
		displayName = "T-shirt et jean - Nike (Jaune)";
	};
	class tshirt_jean_nike_rouge: I_L_Uniform_01_tshirt_skull_F
	{
		author = "A3F";
		_generalMacro = "I_L_Uniform_01_tshirt_skull_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "tshirt_jean_nike_rouge";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Jean\nike_rouge.paa"};
		displayName = "T-shirt et jean - Nike (Rouge)";
	};
	class tshirt_jean_supreme_blanc: I_L_Uniform_01_tshirt_skull_F
	{
		author = "A3F";
		_generalMacro = "I_L_Uniform_01_tshirt_skull_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "tshirt_jean_supreme_blanc";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Jean\supreme_blanc.paa"};
		displayName = "T-shirt et jean - Supreme (Blanc)";
	};
	class tshirt_jean_supreme_noir: I_L_Uniform_01_tshirt_skull_F
	{
		author = "A3F";
		_generalMacro = "I_L_Uniform_01_tshirt_skull_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "tshirt_jean_supreme_noir";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Jean\supreme_noir.paa"};
		displayName = "T-shirt et jean - Supreme (Noir)";
	};
	class tshirt_jean_adidas_blanc: I_L_Uniform_01_tshirt_skull_F
	{
		author = "A3F";
		_generalMacro = "I_L_Uniform_01_tshirt_skull_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "tshirt_jean_adidas_blanc";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Jean\adidas_blanc.paa"};
		displayName = "T-shirt et jean - Adidas (Blanc)";
	};
	class tshirt_jean_adidas_noir: I_L_Uniform_01_tshirt_skull_F
	{
		author = "A3F";
		_generalMacro = "I_L_Uniform_01_tshirt_skull_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "tshirt_jean_adidas_noir";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Jean\adidas_noir.paa"};
		displayName = "T-shirt et jean - Adidas (Noir)";
	};
	class tshirt_jean_summer: I_L_Uniform_01_tshirt_skull_F
	{
		author = "A3F";
		_generalMacro = "I_L_Uniform_01_tshirt_skull_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "tshirt_jean_summer";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Jean\summer.paa"};
		displayName = "T-shirt et jean - Summer";
	};
	class tshirt_jean_surf: I_L_Uniform_01_tshirt_skull_F
	{
		author = "A3F";
		_generalMacro = "I_L_Uniform_01_tshirt_skull_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "tshirt_jean_surf";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Jean\surf.paa"};
		displayName = "T-shirt et jean - Surf";
	};
	class tshirt_jean_hulk: I_L_Uniform_01_tshirt_skull_F
	{
		author = "A3F";
		_generalMacro = "I_L_Uniform_01_tshirt_skull_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "tshirt_jean_hulk";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Jean\hulk.paa"};
		displayName = "T-shirt et jean - Hulk";
	};
	class tshirt_jean_blanche: I_L_Uniform_01_tshirt_skull_F
	{
		author = "A3F";
		_generalMacro = "I_L_Uniform_01_tshirt_skull_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "tshirt_jean_blanche";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Jean\blanc.paa"};
		displayName = "T-shirt et jean (Blanche)";
	};
	class tshirt_jean_bleu: I_L_Uniform_01_tshirt_skull_F
	{
		author = "A3F";
		_generalMacro = "I_L_Uniform_01_tshirt_skull_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "tshirt_jean_bleu";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Jean\bleu.paa"};
		displayName = "T-shirt et jean (Bleu)";
	};
	class tshirt_jean_jaune: I_L_Uniform_01_tshirt_skull_F
	{
		author = "A3F";
		_generalMacro = "I_L_Uniform_01_tshirt_skull_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "tshirt_jean_jaune";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Jean\jaune.paa"};
		displayName = "T-shirt et jean (Jaune)";
	};
	class tshirt_jean_noir: I_L_Uniform_01_tshirt_skull_F
	{
		author = "A3F";
		_generalMacro = "I_L_Uniform_01_tshirt_skull_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "tshirt_jean_noir";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Jean\noir.paa"};
		displayName = "T-shirt et jean (Noir)";
	};
	class tshirt_jean_orange: I_L_Uniform_01_tshirt_skull_F
	{
		author = "A3F";
		_generalMacro = "I_L_Uniform_01_tshirt_skull_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "tshirt_jean_orange";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Jean\orange.paa"};
		displayName = "T-shirt et jean (Orange)";
	};
	class tshirt_jean_rose: I_L_Uniform_01_tshirt_skull_F
	{
		author = "A3F";
		_generalMacro = "I_L_Uniform_01_tshirt_skull_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "tshirt_jean_rose";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Jean\rose.paa"};
		displayName = "T-shirt et jean (Rose)";
	};
	class tshirt_jean_rouge: I_L_Uniform_01_tshirt_skull_F
	{
		author = "A3F";
		_generalMacro = "I_L_Uniform_01_tshirt_skull_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "tshirt_jean_rouge";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Jean\rouge.paa"};
		displayName = "T-shirt et jean (Rouge)";
	};
	class tshirt_jean_vert: I_L_Uniform_01_tshirt_skull_F
	{
		author = "A3F";
		_generalMacro = "I_L_Uniform_01_tshirt_skull_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "tshirt_jean_vert";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Jean\vert.paa"};
		displayName = "T-shirt et jean (Vert)";
	};
	class tenue_ete_nike_blanc: C_Man_casual_4_F
	{
		author = "A3F";
		_generalMacro = "C_Man_casual_4_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "tenue_ete_nike_blanc";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Jean\nike_blanc.paa"};
		displayName = "Tenue d'été - Nike (Blanc)";
	};
	class tenue_ete_nike_noir: C_Man_casual_4_F
	{
		author = "A3F";
		_generalMacro = "C_Man_casual_4_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "tenue_ete_nike_noir";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Jean\nike_noir.paa"};
		displayName = "Tenue d'été - Nike (Noir)";
	};
	class tenue_ete_nike_jaune: C_Man_casual_4_F
	{
		author = "A3F";
		_generalMacro = "C_Man_casual_4_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "tenue_ete_nike_jaune";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Jean\nike_jaune.paa"};
		displayName = "Tenue d'été - Nike (Jaune)";
	};
	class tenue_ete_nike_rouge: C_Man_casual_4_F
	{
		author = "A3F";
		_generalMacro = "C_Man_casual_4_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "tenue_ete_nike_rouge";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Jean\nike_rouge.paa"};
		displayName = "Tenue d'été - Nike (Rouge)";
	};
	class tenue_ete_supreme_blanc: C_Man_casual_4_F
	{
		author = "A3F";
		_generalMacro = "C_Man_casual_4_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "tenue_ete_supreme_blanc";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Jean\supreme_blanc.paa"};
		displayName = "Tenue d'été - Supreme (Blanc)";
	};
	class tenue_ete_supreme_noir: C_Man_casual_4_F
	{
		author = "A3F";
		_generalMacro = "C_Man_casual_4_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "tenue_ete_supreme_noir";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Jean\supreme_noir.paa"};
		displayName = "Tenue d'été - Supreme (Noir)";
	};
	class tenue_ete_adidas_blanc: C_Man_casual_4_F
	{
		author = "A3F";
		_generalMacro = "C_Man_casual_4_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "tenue_ete_adidas_blanc";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Jean\adidas_blanc.paa"};
		displayName = "Tenue d'été - Adidas (Blanc)";
	};
	class tenue_ete_adidas_noir: C_Man_casual_4_F
	{
		author = "A3F";
		_generalMacro = "C_Man_casual_4_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "tenue_ete_adidas_noir";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Jean\adidas_noir.paa"};
		displayName = "Tenue d'été - Adidas (Noir)";
	};
	class tenue_ete_summer: C_Man_casual_4_F
	{
		author = "A3F";
		_generalMacro = "C_Man_casual_4_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "tenue_ete_summer";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Jean\summer.paa"};
		displayName = "Tenue d'été - Summer";
	};
	class tenue_ete_surf: C_Man_casual_4_F
	{
		author = "A3F";
		_generalMacro = "C_Man_casual_4_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "tenue_ete_surf";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Jean\surf.paa"};
		displayName = "Tenue d'été - Surf";
	};
	class tenue_ete_hulk: C_Man_casual_4_F
	{
		author = "A3F";
		_generalMacro = "C_Man_casual_4_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "tenue_ete_hulk";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Jean\hulk.paa"};
		displayName = "Tenue d'été - Hulk";
	};
	class tenue_ete_blanche: C_Man_casual_4_F
	{
		author = "A3F";
		_generalMacro = "C_Man_casual_4_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "tenue_ete_blanche";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Jean\blanc.paa"};
		displayName = "Tenue d'été (Blanche)";
	};
	class tenue_ete_bleu: C_Man_casual_4_F
	{
		author = "A3F";
		_generalMacro = "C_Man_casual_4_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "tenue_ete_bleu";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Jean\bleu.paa"};
		displayName = "Tenue d'été (Bleu)";
	};
	class tenue_ete_jaune: C_Man_casual_4_F
	{
		author = "A3F";
		_generalMacro = "C_Man_casual_4_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "tenue_ete_jaune";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Jean\jaune.paa"};
		displayName = "Tenue d'été (Jaune)";
	};
	class tenue_ete_noir: C_Man_casual_4_F
	{
		author = "A3F";
		_generalMacro = "C_Man_casual_4_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "tenue_ete_noir";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Jean\noir.paa"};
		displayName = "Tenue d'été (Noir)";
	};
	class tenue_ete_orange: C_Man_casual_4_F
	{
		author = "A3F";
		_generalMacro = "C_Man_casual_4_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "tenue_ete_orange";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Jean\orange.paa"};
		displayName = "Tenue d'été (Orange)";
	};
	class tenue_ete_rose: C_Man_casual_4_F
	{
		author = "A3F";
		_generalMacro = "C_Man_casual_4_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "tenue_ete_rose";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Jean\rose.paa"};
		displayName = "Tenue d'été (Rose)";
	};
	class tenue_ete_rouge: C_Man_casual_4_F
	{
		author = "A3F";
		_generalMacro = "C_Man_casual_4_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "tenue_ete_rouge";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Jean\rouge.paa"};
		displayName = "Tenue d'été (Rouge)";
	};
	class tenue_ete_vert: C_Man_casual_4_F
	{
		author = "A3F";
		_generalMacro = "C_Man_casual_4_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "tenue_ete_vert";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Jean\vert.paa"};
		displayName = "Tenue d'été (Vert)";
	};
	class adams: C_man_p_fugitive_F
	{
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		displayName = "Uniform_adams";
		nakedUniform = "U_BasicBody";
		uniformClass = "civil35";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Qwertee\adams.paa"};
	};
	class bender: C_man_p_fugitive_F
	{
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		displayName = "Uniform_bender";
		nakedUniform = "U_BasicBody";
		uniformClass = "civil36";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Qwertee\bender.paa"};
	};
	class biscuit: C_man_p_fugitive_F
	{
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		displayName = "Uniform_biscuit";
		nakedUniform = "U_BasicBody";
		uniformClass = "civil37";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Qwertee\biscuit.paa"};
	};
	class box: C_man_p_fugitive_F
	{
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		displayName = "Uniform_box";
		nakedUniform = "U_BasicBody";
		uniformClass = "civil38";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Qwertee\box.paa"};
	};
	class casper: C_man_p_fugitive_F
	{
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		displayName = "Uniform_casper";
		nakedUniform = "U_BasicBody";
		uniformClass = "civil39";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Qwertee\casper.paa"};
	};
	class coffee: C_man_p_fugitive_F
	{
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		displayName = "Uniform_coffee";
		nakedUniform = "U_BasicBody";
		uniformClass = "civil40";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Qwertee\coffee.paa"};
	};
	class dead: C_man_p_fugitive_F
	{
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		displayName = "Uniform_dead";
		nakedUniform = "U_BasicBody";
		uniformClass = "civil41";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Qwertee\dead.paa"};
	};
	class delorean: C_man_p_fugitive_F
	{
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		displayName = "Uniform_delorean";
		nakedUniform = "U_BasicBody";
		uniformClass = "civil42";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Qwertee\delorean.paa"};
	};
	class dory: C_man_p_fugitive_F
	{
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		displayName = "Uniform_dory";
		nakedUniform = "U_BasicBody";
		uniformClass = "civil43";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Qwertee\dory.paa"};
	};
	class dragonball: C_man_p_fugitive_F
	{
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		displayName = "Uniform_dragonball";
		nakedUniform = "U_BasicBody";
		uniformClass = "civil44";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Qwertee\dragonball.paa"};
	};
	class eau: C_man_p_fugitive_F
	{
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		displayName = "Uniform_eau";
		nakedUniform = "U_BasicBody";
		uniformClass = "civil45";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Qwertee\eau.paa"};
	};
	class empire: C_man_p_fugitive_F
	{
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		displayName = "Uniform_empire";
		nakedUniform = "U_BasicBody";
		uniformClass = "civil46";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Qwertee\empire.paa"};
	};
	class engineer: C_man_p_fugitive_F
	{
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		displayName = "Uniform_engineer";
		nakedUniform = "U_BasicBody";
		uniformClass = "civil47";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Qwertee\engineer.paa"};
	};
	class extra: C_man_p_fugitive_F
	{
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		displayName = "Uniform_extra";
		nakedUniform = "U_BasicBody";
		uniformClass = "civil48";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Qwertee\extra.paa"};
	};
	class feu: C_man_p_fugitive_F
	{
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		displayName = "Uniform_feu";
		nakedUniform = "U_BasicBody";
		uniformClass = "civil49";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Qwertee\feu.paa"};
	};
	class heisenberg: C_man_p_fugitive_F
	{
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		displayName = "Uniform_heisenberg";
		nakedUniform = "U_BasicBody";
		uniformClass = "civil50";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Qwertee\heisenberg.paa"};
	};
	class homme: C_man_p_fugitive_F
	{
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		displayName = "Uniform_homme";
		nakedUniform = "U_BasicBody";
		uniformClass = "civil51";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Qwertee\homme.paa"};
	};
	class instinct: C_man_p_fugitive_F
	{
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		displayName = "Uniform_instinct";
		nakedUniform = "U_BasicBody";
		uniformClass = "civil52";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Qwertee\instinct.paa"};
	};
	class japan: C_man_p_fugitive_F
	{
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		displayName = "Uniform_japan";
		nakedUniform = "U_BasicBody";
		uniformClass = "civil53";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Qwertee\japan.paa"};
	};
	class mask: C_man_p_fugitive_F
	{
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		displayName = "Uniform_mask";
		nakedUniform = "U_BasicBody";
		uniformClass = "civil54";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Qwertee\mask.paa"};
	};
	class mechant: C_man_p_fugitive_F
	{
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		displayName = "Uniform_mechant";
		nakedUniform = "U_BasicBody";
		uniformClass = "civil55";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Qwertee\mechant.paa"};
	};
	class mystic: C_man_p_fugitive_F
	{
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		displayName = "Uniform_mystic";
		nakedUniform = "U_BasicBody";
		uniformClass = "civil56";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Qwertee\mystic.paa"};
	};
	class never: C_man_p_fugitive_F
	{
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		displayName = "Uniform_never";
		nakedUniform = "U_BasicBody";
		uniformClass = "civil57";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Qwertee\never.paa"};
	};
	class onepeace: C_man_p_fugitive_F
	{
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		displayName = "Uniform_onepeace";
		nakedUniform = "U_BasicBody";
		uniformClass = "civil58";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Qwertee\onepeace.paa"};
	};
	class ovni: C_man_p_fugitive_F
	{
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		displayName = "Uniform_ovni";
		nakedUniform = "U_BasicBody";
		uniformClass = "civil59";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Qwertee\ovni.paa"};
	};
	class peace: C_man_p_fugitive_F
	{
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		displayName = "Uniform_peace";
		nakedUniform = "U_BasicBody";
		uniformClass = "civil60";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Qwertee\peace.paa"};
	};
	class physic: C_man_p_fugitive_F
	{
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		displayName = "Uniform_physic";
		nakedUniform = "U_BasicBody";
		uniformClass = "civil61";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Qwertee\physic.paa"};
	};
	class qwertee: C_man_p_fugitive_F
	{
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		displayName = "Uniform_qwertee";
		nakedUniform = "U_BasicBody";
		uniformClass = "civil62";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Qwertee\qwertee.paa"};
	};
	class ray: C_man_p_fugitive_F
	{
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		displayName = "Uniform_ray";
		nakedUniform = "U_BasicBody";
		uniformClass = "civil63";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Qwertee\ray.paa"};
	};
	class robot: C_man_p_fugitive_F
	{
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		displayName = "Uniform_robot";
		nakedUniform = "U_BasicBody";
		uniformClass = "civil64";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Qwertee\robot.paa"};
	};
	class star_wars: C_man_p_fugitive_F
	{
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		displayName = "Uniform_star_wars";
		nakedUniform = "U_BasicBody";
		uniformClass = "civil65";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Qwertee\star_wars.paa"};
	};
	class three_element: C_man_p_fugitive_F
	{
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		displayName = "Uniform_three_element";
		nakedUniform = "U_BasicBody";
		uniformClass = "civil66";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Qwertee\three_element.paa"};
	};
	class valor: C_man_p_fugitive_F
	{
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		displayName = "Uniform_valor";
		nakedUniform = "U_BasicBody";
		uniformClass = "civil67";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Qwertee\valor.paa"};
	};
	class vendeta: C_man_p_fugitive_F
	{
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		displayName = "Uniform_vendeta";
		nakedUniform = "U_BasicBody";
		uniformClass = "civil68";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Qwertee\vendeta.paa"};
	};
	class yoda: C_man_p_fugitive_F
	{
		_generalMacro = "C_man_p_fugitive_F";
		scope = 1;
		displayName = "Uniform_yoda";
		nakedUniform = "U_BasicBody";
		uniformClass = "civil69";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Qwertee\yoda.paa"};
	};
};
class CfgWeapons
{
	class Uniform_Base;
	class UniformItem;
	class H_Cap_blk_ION;
	class H_Hat_checker;
	class C_man_pilot_F;
	class H_RacingHelmet_1_F;
	class C_man_p_fugitive_F;
	class H_Booniehat_khk;
	class V_TacVest_khk;
	class polomcdo: Uniform_Base
	{
		scope = 2;
		displayName = "Polo McDonalds";
		picture = "\Tenues_Civil\data\icons\Autre\polomcdo.paa";
		author = "A3F";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Autre\polomcdo.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "polomcdo";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class Bob_Pokemon_Bleu: H_Booniehat_khk
	{
		scope = 2;
		author = "A3F";
		_generalMacro = "H_Booniehat_khk";
		model = "\A3\Characters_F\Common\booniehat";
		displayName = "Bob pokemon (Bleu)";
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Bob\Bob_Pokemon_Bleu.paa"};
		picture = "\Tenues_Civil\data\icons\Bob\Bob_Pokemon_Bleu.paa";
	};
	class Bob_Pokemon_Jaune: H_Booniehat_khk
	{
		scope = 2;
		author = "A3F";
		_generalMacro = "H_Booniehat_khk";
		model = "\A3\Characters_F\Common\booniehat";
		displayName = "Bob pokemon (Jaune)";
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Bob\Bob_Pokemon_Jaune.paa"};
		picture = "\Tenues_Civil\data\icons\Bob\Bob_Pokemon_Jaune.paa";
	};
	class Bob_Pokemon_Orange: H_Booniehat_khk
	{
		scope = 2;
		author = "A3F";
		_generalMacro = "H_Booniehat_khk";
		model = "\A3\Characters_F\Common\booniehat";
		displayName = "Bob pokemon (Orange)";
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Bob\Bob_Pokemon_Orange.paa"};
		picture = "\Tenues_Civil\data\icons\Bob\Bob_Pokemon_Orange.paa";
	};
	class Bob_Pokemon_Vert: H_Booniehat_khk
	{
		scope = 2;
		author = "A3F";
		_generalMacro = "H_Booniehat_khk";
		model = "\A3\Characters_F\Common\booniehat";
		displayName = "Bob pokemon (Vert)";
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Bob\Bob_Pokemon_Vert.paa"};
		picture = "\Tenues_Civil\data\icons\Bob\Bob_Pokemon_Vert.paa";
	};
	class Bob_Pokemon_Violet: H_Booniehat_khk
	{
		scope = 2;
		author = "A3F";
		_generalMacro = "H_Booniehat_khk";
		model = "\A3\Characters_F\Common\booniehat";
		displayName = "Bob pokemon (Violet)";
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Bob\Bob_Pokemon_Violet.paa"};
		picture = "\Tenues_Civil\data\icons\Bob\Bob_Pokemon_Violet.paa";
	};
	class Bob_Halloween: H_Booniehat_khk
	{
		scope = 2;
		author = "A3F";
		_generalMacro = "H_Booniehat_khk";
		model = "\A3\Characters_F\Common\booniehat";
		displayName = "Bob Halloween";
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Bob\Bob_Halloween.paa"};
		picture = "\Tenues_Civil\data\icons\Bob\Bob_Halloween.paa";
	};
	class Bob_Christmas: H_Booniehat_khk
	{
		scope = 2;
		author = "A3F";
		_generalMacro = "H_Booniehat_khk";
		model = "\A3\Characters_F\Common\booniehat";
		displayName = "Bob Christmas";
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Bob\Bob_Christmas.paa"};
		picture = "\Tenues_Civil\data\icons\Bob\Bob_Christmas.paa";
	};
	class cap_noir: H_Cap_blk_ION
	{
		scope = 2;
		author = "A3F";
		_generalMacro = "H_Cap_blk_ION";
		model = "\A3\Characters_F\common\capb";
		displayName = "Casquette (Noir)";
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Casquette\casq_noir.paa"};
		picture = "\Tenues_Civil\data\icons\Casquette\casq_noir.paa";
	};
	class cap_blanche: H_Cap_blk_ION
	{
		scope = 2;
		author = "A3F";
		_generalMacro = "H_Cap_blk_ION";
		model = "\A3\Characters_F\common\capb";
		displayName = "Casquette (Blanche)";
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Casquette\casq_blanc.paa"};
		picture = "\Tenues_Civil\data\icons\Casquette\casq_blanc.paa";
	};
	class cap_orange: H_Cap_blk_ION
	{
		scope = 2;
		author = "A3F";
		_generalMacro = "H_Cap_blk_ION";
		model = "\A3\Characters_F\common\capb";
		displayName = "Casquette (Orange)";
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Casquette\casq_orange.paa"};
		picture = "\Tenues_Civil\data\icons\Casquette\casq_orange.paa";
	};
	class cap_rose: H_Cap_blk_ION
	{
		scope = 2;
		author = "A3F";
		_generalMacro = "H_Cap_blk_ION";
		model = "\A3\Characters_F\common\capb";
		displayName = "Casquette (Rose)";
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Casquette\casq_rose.paa"};
		picture = "\Tenues_Civil\data\icons\Casquette\casq_rose.paa";
	};
	class cap_supreme_blanche: H_Cap_blk_ION
	{
		scope = 2;
		author = "A3F";
		_generalMacro = "H_Cap_blk_ION";
		model = "\A3\Characters_F\common\capb";
		displayName = "Casquette Supreme (Blanche)";
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Casquette\casq_blanc_supreme.paa"};
		picture = "\Tenues_Civil\data\icons\Casquette\casq_supreme_blanc.paa";
	};
	class cap_supreme_noir: H_Cap_blk_ION
	{
		scope = 2;
		author = "A3F";
		_generalMacro = "H_Cap_blk_ION";
		model = "\A3\Characters_F\common\capb";
		displayName = "Casquette Supreme (Noir)";
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Casquette\casq_noir_supreme.paa"};
		picture = "\Tenues_Civil\data\icons\Casquette\casq_supreme_noir.paa";
	};
	class cap_nike_blanche: H_Cap_blk_ION
	{
		scope = 2;
		author = "A3F";
		_generalMacro = "H_Cap_blk_ION";
		model = "\A3\Characters_F\common\capb";
		displayName = "Casquette Nike (Blanche)";
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Casquette\casq_blanc_nike.paa"};
		picture = "\Tenues_Civil\data\icons\Casquette\casq_nike_blanc.paa";
	};
	class cap_nike_noir: H_Cap_blk_ION
	{
		scope = 2;
		author = "A3F";
		_generalMacro = "H_Cap_blk_ION";
		model = "\A3\Characters_F\common\capb";
		displayName = "Casquette Nike (Noir)";
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Casquette\casq_noir_nike.paa"};
		picture = "\Tenues_Civil\data\icons\Casquette\casq_nike_noir.paa";
	};
	class cap_nike_jaune: H_Cap_blk_ION
	{
		scope = 2;
		author = "A3F";
		_generalMacro = "H_Cap_blk_ION";
		model = "\A3\Characters_F\common\capb";
		displayName = "Casquette Nike (Jaune)";
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Casquette\casq_jaune_nike.paa"};
		picture = "\Tenues_Civil\data\icons\Casquette\casq_nike_jaune.paa";
	};
	class cap_adidas_jaune: H_Cap_blk_ION
	{
		scope = 2;
		author = "A3F";
		_generalMacro = "H_Cap_blk_ION";
		model = "\A3\Characters_F\common\capb";
		displayName = "Casquette Adidas (Jaune)";
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Casquette\casq_jaune_adidas.paa"};
		picture = "\Tenues_Civil\data\icons\Casquette\casq_adidas_jaune.paa";
	};
	class cap_adidas_noir: H_Cap_blk_ION
	{
		scope = 2;
		author = "A3F";
		_generalMacro = "H_Cap_blk_ION";
		model = "\A3\Characters_F\common\capb";
		displayName = "Casquette Adidas (Noir)";
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Casquette\casq_noir_adidas.paa"};
		picture = "\Tenues_Civil\data\icons\Casquette\casq_adidas_noir.paa";
	};
	class cap_adidas_blanche: H_Cap_blk_ION
	{
		scope = 2;
		author = "A3F";
		_generalMacro = "H_Cap_blk_ION";
		model = "\A3\Characters_F\common\capb";
		displayName = "Casquette Adidas (Blanche)";
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Casquette\casq_blanc_adidas.paa"};
		picture = "\Tenues_Civil\data\icons\Casquette\casq_adidas_blanc.paa";
	};
	class cap_adidas_rouge: H_Cap_blk_ION
	{
		scope = 2;
		author = "A3F";
		_generalMacro = "H_Cap_blk_ION";
		model = "\A3\Characters_F\common\capb";
		displayName = "Casquette Adidas (Rouge)";
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Casquette\casq_rouge_adidas.paa"};
		picture = "\Tenues_Civil\data\icons\Casquette\casq_adidas_rouge.paa";
	};
	class cap_adidas_bleu: H_Cap_blk_ION
	{
		scope = 2;
		author = "A3F";
		_generalMacro = "H_Cap_blk_ION";
		model = "\A3\Characters_F\common\capb";
		displayName = "Casquette Adidas (Bleu)";
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Casquette\casq_bleu_adidas.paa"};
		picture = "\Tenues_Civil\data\icons\Casquette\casq_adidas_bleu.paa";
	};
	class cap_lacoste_blanche: H_Cap_blk_ION
	{
		scope = 2;
		author = "A3F";
		_generalMacro = "H_Cap_blk_ION";
		model = "\A3\Characters_F\common\capb";
		displayName = "Casquette Lacoste (Blanche)";
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Casquette\casq_blanc_lacoste.paa"};
		picture = "\Tenues_Civil\data\icons\Casquette\casq_lacoste_blanc.paa";
	};
	class cap_fila_blanche: H_Cap_blk_ION
	{
		scope = 2;
		author = "A3F";
		_generalMacro = "H_Cap_blk_ION";
		model = "\A3\Characters_F\common\capb";
		displayName = "Casquette Fila (Blanche)";
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Casquette\casq_blanc_fila.paa"};
		picture = "\Tenues_Civil\data\icons\Casquette\casq_fila_blanc.paa";
	};
	class cap_fila_bleu: H_Cap_blk_ION
	{
		scope = 2;
		author = "A3F";
		_generalMacro = "H_Cap_blk_ION";
		model = "\A3\Characters_F\common\capb";
		displayName = "Casquette Fila (Bleu)";
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Casquette\casq_bleu_fila.paa"};
		picture = "\Tenues_Civil\data\icons\Casquette\casq_fila_bleu.paa";
	};
	class champion_bleu: Uniform_Base
	{
		scope = 2;
		displayName = "Polo Champion Bleu";
		picture = "\Tenues_Civil\data\icons\Champion\champion_bleu.paa";
		author = "A3F";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Champion\champion_bleu.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "champion_bleu";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class champion_jaune: Uniform_Base
	{
		scope = 2;
		displayName = "Polo Champion Jaune";
		picture = "\Tenues_Civil\data\icons\Champion\champion_jaune.paa";
		author = "A3F";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Champion\champion_jaune.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "champion_jaune";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class champion_noir: Uniform_Base
	{
		scope = 2;
		displayName = "Polo Champion Noir";
		picture = "\Tenues_Civil\data\icons\Champion\champion_noir.paa";
		author = "A3F";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Champion\champion_noir.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "champion_noir";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class champion_rouge: Uniform_Base
	{
		scope = 2;
		displayName = "Polo Champion Rouge";
		picture = "\Tenues_Civil\data\icons\Champion\champion_rouge.paa";
		author = "A3F";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Champion\champion_rouge.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "champion_rouge";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class champion_vert: Uniform_Base
	{
		scope = 2;
		displayName = "Polo Champion Vert";
		picture = "\Tenues_Civil\data\icons\Champion\champion_vert.paa";
		author = "A3F";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Champion\champion_vert.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "champion_vert";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class champion_violet: Uniform_Base
	{
		scope = 2;
		displayName = "Polo Champion Violet";
		picture = "\Tenues_Civil\data\icons\Champion\champion_violet.paa";
		author = "A3F";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Champion\champion_violet.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "champion_violet";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class chapeau_rouge: H_Hat_checker
	{
		_generalMacro = "H_Hat_checker";
		author = "A3F";
		descriptionShort = "Author : A3F";
		displayName = "Chapeau Rouge";
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Chapeau\chapeau_rouge.paa"};
		picture = "\Tenues_Civil\data\icons\Chapeau\icon_chapeau_rouge.paa";
	};
	class chapeau_bleu: H_Hat_checker
	{
		_generalMacro = "H_Hat_checker";
		author = "A3F";
		descriptionShort = "Author : A3F";
		displayName = "Chapeau Bleu";
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Chapeau\chapeau_bleu.paa"};
		picture = "\Tenues_Civil\data\icons\Chapeau\icon_chapeau_bleu.paa";
	};
	class chapeau_rose: H_Hat_checker
	{
		_generalMacro = "H_Hat_checker";
		author = "A3F";
		descriptionShort = "Author : A3F";
		displayName = "Chapeau Rose";
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Chapeau\chapeau_rose.paa"};
		picture = "\Tenues_Civil\data\icons\Chapeau\icon_chapeau_rose.paa";
	};
	class chapeau_kaki: H_Hat_checker
	{
		_generalMacro = "H_Hat_checker";
		author = "A3F";
		descriptionShort = "Author : A3F";
		displayName = "Chapeau Kaki";
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Chapeau\chapeau_kaki.paa"};
		picture = "\Tenues_Civil\data\icons\Chapeau\icon_chapeau_vert.paa";
	};
	class chapeau_noir: H_Hat_checker
	{
		_generalMacro = "H_Hat_checker";
		author = "A3F";
		descriptionShort = "Author : A3F";
		displayName = "Chapeau Noir";
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Chapeau\chapeau_noir.paa"};
		picture = "\Tenues_Civil\data\icons\Chapeau\icon_chapeau_noir.paa";
	};
	class chapeau_violet: H_Hat_checker
	{
		_generalMacro = "H_Hat_checker";
		author = "A3F";
		descriptionShort = "Author : A3F";
		displayName = "Chapeau Violet";
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Chapeau\chapeau_violet.paa"};
		picture = "\Tenues_Civil\data\icons\Chapeau\icon_chapeau_violet.paa";
	};
	class chapeau_blanc: H_Hat_checker
	{
		_generalMacro = "H_Hat_checker";
		author = "A3F";
		descriptionShort = "Author : A3F";
		displayName = "Chapeau Blanc";
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Chapeau\chapeau_blanc.paa"};
		picture = "\Tenues_Civil\data\icons\Chapeau\icon_chapeau_blanc.paa";
	};
	class chapeau_noel: H_Hat_checker
	{
		_generalMacro = "H_Hat_checker";
		author = "A3F";
		descriptionShort = "Author : A3F";
		displayName = "Chapeau de noël";
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Chapeau\chapeau_noel.paa"};
		picture = "\Tenues_Civil\data\icons\Chapeau\icon_chapeau_noel.paa";
	};
	class costard_rouge: Uniform_Base
	{
		author = "A3F";
		descriptionShort = "Author : A3F";
		scope = 2;
		displayName = "Costard Rouge";
		picture = "\Tenues_Civil\data\icons\Costard\icon_costard_rouge.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		class Wounds
		{
			tex[] = {};
			mat[] = {};
		};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "costard_rouge";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class costard_kaki: Uniform_Base
	{
		author = "A3F";
		descriptionShort = "Author : A3F";
		scope = 2;
		displayName = "Costard Kaki";
		picture = "\Tenues_Civil\data\icons\Costard\icon_costard_vert.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		class Wounds
		{
			tex[] = {};
			mat[] = {};
		};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "costard_kaki";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class costard_bleu: Uniform_Base
	{
		author = "A3F";
		descriptionShort = "Author : A3F";
		scope = 2;
		displayName = "Costard Bleu";
		picture = "\Tenues_Civil\data\icons\Costard\icon_costard_bleu.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		class Wounds
		{
			tex[] = {};
			mat[] = {};
		};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "costard_bleu";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class costard_violet: Uniform_Base
	{
		author = "A3F";
		descriptionShort = "Author : A3F";
		scope = 2;
		displayName = "Costard Violet";
		picture = "\Tenues_Civil\data\icons\Costard\icon_costard_violet.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		class Wounds
		{
			tex[] = {};
			mat[] = {};
		};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "costard_violet";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class costard_blanc: Uniform_Base
	{
		author = "A3F";
		descriptionShort = "Author : A3F";
		scope = 2;
		displayName = "Costard Blanc";
		picture = "\Tenues_Civil\data\icons\Costard\icon_costard_blanc.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		class Wounds
		{
			tex[] = {};
			mat[] = {};
		};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "costard_blanc";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class costard_rose: Uniform_Base
	{
		author = "A3F";
		descriptionShort = "Author : A3F";
		scope = 2;
		displayName = "Costard Rose";
		picture = "\Tenues_Civil\data\icons\Costard\icon_costard_rose.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		class Wounds
		{
			tex[] = {};
			mat[] = {};
		};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "costard_rose";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class costard_gucci: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "Costard Gucci Beige";
		picture = "\Tenues_Civil\data\icons\Costard\icon_costard_gucci.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		class Wounds
		{
			tex[] = {};
			mat[] = {};
		};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "costard_gucci";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class costard_rayures_vertes: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "Costard à rayures vertes";
		picture = "\Tenues_Civil\data\icons\Costard\icon_costard_rayures_vertes.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		class Wounds
		{
			tex[] = {};
			mat[] = {};
		};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "costard_rayures_vertes";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class costard_noel_01: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "Costard de noël (type 1)";
		picture = "\Tenues_Civil\data\icons\Costard\icon_costard_noel_01.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		class Wounds
		{
			tex[] = {};
			mat[] = {};
		};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "costard_noel_01";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class costard_noel_02: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "Costard de noël (type 2)";
		picture = "\Tenues_Civil\data\icons\Costard\icon_costard_noel_02.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		class Wounds
		{
			tex[] = {};
			mat[] = {};
		};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "costard_noel_02";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class V_TacVest_Halloween: V_TacVest_khk
	{
		author = "A3F";
		_generalMacro = "V_TacVest_Halloween";
		scope = 2;
		displayName = "Gilet Halloween";
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Gilet_PareBalle\Halloween_tacticalvest_black_co.paa"};
		picture = "\Tenues_Civil\data\icons\Gilet_PareBalle\Halloween_tacticalvest_black_co.paa";
	};
	class V_TacVest_Noel: V_TacVest_khk
	{
		author = "A3F";
		_generalMacro = "V_TacVest_Noel";
		scope = 2;
		displayName = "Gilet Noël";
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Gilet_PareBalle\Noel_tacticalvest_red_co.paa"};
		picture = "\Tenues_Civil\data\icons\Gilet_PareBalle\Noel_tacticalvest_red_co.paa";
	};
	class template_united: Uniform_Base
	{
		scope = 2;
		displayName = "Maillot United";
		picture = "\Tenues_Civil\data\icons\Maillot_Foot\shirt_foot_united.paa";
		author = "";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Maillot_Foot\template_united.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "template_united";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class template_suisse: Uniform_Base
	{
		scope = 2;
		displayName = "Maillot Suisse";
		picture = "\Tenues_Civil\data\icons\Maillot_Foot\shirt_foot_suisse.paa";
		author = "";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Maillot_Foot\template_suisse.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "template_suisse";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class template_roma: Uniform_Base
	{
		scope = 2;
		displayName = "Maillot Roma";
		picture = "\Tenues_Civil\data\icons\Maillot_Foot\shirt_foot_roma.paa";
		author = "";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Maillot_Foot\template_roma.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "template_roma";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class template_rennes: Uniform_Base
	{
		scope = 2;
		displayName = "Maillot Rennes";
		picture = "\Tenues_Civil\data\icons\Maillot_Foot\shirt_foot_rennes.paa";
		author = "";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Maillot_Foot\template_rennes.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "template_rennes";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class template_real: Uniform_Base
	{
		scope = 2;
		displayName = "Maillot Real";
		picture = "\Tenues_Civil\data\icons\Maillot_Foot\shirt_foot_real.paa";
		author = "";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Maillot_Foot\template_real.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "template_real";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class template_psg: Uniform_Base
	{
		scope = 2;
		displayName = "Maillot PSG";
		picture = "\Tenues_Civil\data\icons\Maillot_Foot\shirt_foot_psg.paa";
		author = "";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Maillot_Foot\template_psg.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "template_psg";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class template_portugal: Uniform_Base
	{
		scope = 2;
		displayName = "Maillot Portugal";
		picture = "\Tenues_Civil\data\icons\Maillot_Foot\shirt_foot_portugal.paa";
		author = "";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Maillot_Foot\template_portugal.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "template_portugal";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class template_om: Uniform_Base
	{
		scope = 2;
		displayName = "Maillot OM";
		picture = "\Tenues_Civil\data\icons\Maillot_Foot\shirt_foot_om.paa";
		author = "";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Maillot_Foot\template_om.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "template_om";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class template_ol: Uniform_Base
	{
		scope = 2;
		displayName = "Maillot OL";
		picture = "\Tenues_Civil\data\icons\Maillot_Foot\shirt_foot_ol.paa";
		author = "";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Maillot_Foot\template_ol.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "template_ol";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class template_napoli: Uniform_Base
	{
		scope = 2;
		displayName = "Maillot Napoli";
		picture = "\Tenues_Civil\data\icons\Maillot_Foot\shirt_foot_napoli.paa";
		author = "";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Maillot_Foot\template_napoli.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "template_napoli";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class template_nantes: Uniform_Base
	{
		scope = 2;
		displayName = "Maillot Nantes";
		picture = "\Tenues_Civil\data\icons\Maillot_Foot\shirt_foot_nantes.paa";
		author = "";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Maillot_Foot\template_nantes.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "template_nantes";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class template_monaco: Uniform_Base
	{
		scope = 2;
		displayName = "Maillot Monaco";
		picture = "\Tenues_Civil\data\icons\Maillot_Foot\shirt_foot_monaco.paa";
		author = "";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Maillot_Foot\template_monaco.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "template_monaco";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class template_losc: Uniform_Base
	{
		scope = 2;
		displayName = "Maillot Losc";
		picture = "\Tenues_Civil\data\icons\Maillot_Foot\shirt_foot_losc.paa";
		author = "";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Maillot_Foot\template_losc.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "template_losc";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class template_lorient: Uniform_Base
	{
		scope = 2;
		displayName = "Maillot Lorient";
		picture = "\Tenues_Civil\data\icons\Maillot_Foot\shirt_foot_lorient.paa";
		author = "";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Maillot_Foot\template_lorient.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "template_lorient";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class template_liverpool: Uniform_Base
	{
		scope = 2;
		displayName = "Maillot Liverpool";
		picture = "\Tenues_Civil\data\icons\Maillot_Foot\shirt_foot_liverpool.paa";
		author = "";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Maillot_Foot\template_liverpool.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "template_liverpool";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class template_lens: Uniform_Base
	{
		scope = 2;
		displayName = "Maillot Lens";
		picture = "\Tenues_Civil\data\icons\Maillot_Foot\shirt_foot_lens.paa";
		author = "";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Maillot_Foot\template_lens.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "template_lens";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class template_juve: Uniform_Base
	{
		scope = 2;
		displayName = "Maillot Juve";
		picture = "\Tenues_Civil\data\icons\Maillot_Foot\shirt_foot_juve.paa";
		author = "";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Maillot_Foot\template_juve.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "template_juve";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class template_italie: Uniform_Base
	{
		scope = 2;
		displayName = "Maillot Italie";
		picture = "\Tenues_Civil\data\icons\Maillot_Foot\shirt_foot_italie.paa";
		author = "";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Maillot_Foot\template_italie.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "template_italie";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class template_guingamp: Uniform_Base
	{
		scope = 2;
		displayName = "Maillot Guingamp";
		picture = "\Tenues_Civil\data\icons\Maillot_Foot\shirt_foot_guingamp.paa";
		author = "";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Maillot_Foot\template_guingamp.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "template_guingamp";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class template_france98: Uniform_Base
	{
		scope = 2;
		displayName = "Maillot France 98";
		picture = "\Tenues_Civil\data\icons\Maillot_Foot\shirt_foot_france98.paa";
		author = "";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Maillot_Foot\template_france98.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "template_france98";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class template_fcgb: Uniform_Base
	{
		scope = 2;
		displayName = "Maillot FCGB";
		picture = "\Tenues_Civil\data\icons\Maillot_Foot\shirt_foot_fcgb.paa";
		author = "";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Maillot_Foot\template_fcgb.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "template_fcgb";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class template_espagne: Uniform_Base
	{
		scope = 2;
		displayName = "Maillot Espagne";
		picture = "\Tenues_Civil\data\icons\Maillot_Foot\shirt_foot_espagne.paa";
		author = "";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Maillot_Foot\template_espagne.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "template_espagne";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class template_dortmund: Uniform_Base
	{
		scope = 2;
		displayName = "Maillot Dortmund";
		picture = "\Tenues_Civil\data\icons\Maillot_Foot\shirt_foot_dortmund.paa";
		author = "";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Maillot_Foot\template_dortmund.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "template_dortmund";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class template_city: Uniform_Base
	{
		scope = 2;
		displayName = "Maillot City";
		picture = "\Tenues_Civil\data\icons\Maillot_Foot\shirt_foot_city.paa";
		author = "";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Maillot_Foot\template_city.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "template_city";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class template_chelsea: Uniform_Base
	{
		scope = 2;
		displayName = "Maillot Chelsea";
		picture = "\Tenues_Civil\data\icons\Maillot_Foot\shirt_foot_chelsea.paa";
		author = "";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Maillot_Foot\template_chelsea.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "template_chelsea";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class template_bretagne: Uniform_Base
	{
		scope = 2;
		displayName = "Maillot Bretagne";
		picture = "\Tenues_Civil\data\icons\Maillot_Foot\shirt_foot_bretagne.paa";
		author = "";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Maillot_Foot\template_bretagne.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "template_bretagne";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class template_bresil: Uniform_Base
	{
		scope = 2;
		displayName = "Maillot Bresil";
		picture = "\Tenues_Civil\data\icons\Maillot_Foot\shirt_foot_bresil.paa";
		author = "";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Maillot_Foot\template_bresil.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "template_bresil";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class template_belgique: Uniform_Base
	{
		scope = 2;
		displayName = "Maillot Belgique";
		picture = "\Tenues_Civil\data\icons\Maillot_Foot\shirt_foot_belgique.paa";
		author = "";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Maillot_Foot\template_belgique.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "template_belgique";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class template_bayern: Uniform_Base
	{
		scope = 2;
		displayName = "Maillot Bayern";
		picture = "\Tenues_Civil\data\icons\Maillot_Foot\shirt_foot_bayern.paa";
		author = "";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Maillot_Foot\template_bayern.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "template_bayern";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class template_barca: Uniform_Base
	{
		scope = 2;
		displayName = "Maillot Barca";
		picture = "\Tenues_Civil\data\icons\Maillot_Foot\shirt_foot_barca.paa";
		author = "";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Maillot_Foot\template_barca.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "template_barca";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class template_athletico: Uniform_Base
	{
		scope = 2;
		displayName = "Maillot Atlético";
		picture = "\Tenues_Civil\data\icons\Maillot_Foot\shirt_foot_atletico.paa";
		author = "";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Maillot_Foot\template_athletico.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "template_athletico";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class template_asse: Uniform_Base
	{
		scope = 2;
		displayName = "Maillot Asse";
		picture = "\Tenues_Civil\data\icons\Maillot_Foot\shirt_foot_asse.paa";
		author = "";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Maillot_Foot\template_asse.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "template_asse";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class template_arsenal: Uniform_Base
	{
		scope = 2;
		displayName = "Maillot Arsenal";
		picture = "\Tenues_Civil\data\icons\Maillot_Foot\shirt_foot_arsenal.paa";
		author = "";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Maillot_Foot\template_arsenal.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "template_arsenal";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class template_angleterre: Uniform_Base
	{
		scope = 2;
		displayName = "Maillot Angleterre";
		picture = "\Tenues_Civil\data\icons\Maillot_Foot\shirt_foot_angleterre.paa";
		author = "";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Maillot_Foot\template_angleterre.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "template_angleterre";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class template_allemagne: Uniform_Base
	{
		scope = 2;
		displayName = "Maillot Allemagne";
		picture = "\Tenues_Civil\data\icons\Maillot_Foot\shirt_foot_allemagne.paa";
		author = "";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Maillot_Foot\template_allemagne.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "template_allemagne";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class template_ajax: Uniform_Base
	{
		scope = 2;
		displayName = "Maillot Ajax";
		picture = "\Tenues_Civil\data\icons\Maillot_Foot\shirt_foot_ajax.paa";
		author = "";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Maillot_Foot\template_ajax.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "template_ajax";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class template_: Uniform_Base
	{
		scope = 2;
		displayName = "Maillot ";
		picture = "\Tenues_Civil\data\icons\Maillot_Foot\shirt_foot_.paa";
		author = "";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Maillot_Foot\template_.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "template_";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class template_cote_d_ivoire: Uniform_Base
	{
		scope = 2;
		displayName = "Maillot Cote Ivoire";
		picture = "\Tenues_Civil\data\icons\Maillot_Foot\template_cote_d_ivoire.paa";
		author = "Joel Mukanga";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Maillot_Foot\template_cote_d_ivoire.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "template_cote_d_ivoire";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class template_maroc: Uniform_Base
	{
		scope = 2;
		displayName = "Maillot Maroc";
		picture = "\Tenues_Civil\data\icons\Maillot_Foot\template_maroc.paa";
		author = "Joel Mukanga";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Maillot_Foot\template_maroc.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "template_maroc";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class template_rdc: Uniform_Base
	{
		scope = 2;
		displayName = "Maillot RDC";
		picture = "\Tenues_Civil\data\icons\Maillot_Foot\template_rdc.paa";
		author = "Joel Mukanga";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Maillot_Foot\template_rdc.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "template_rdc";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class stinder_moto_monster: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "Combinaison de moto MONSTER";
		picture = "\Tenues_Civil\data\icons\Moto\stinder_combi1monster.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Moto\stinder_combi_monster.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "stinder_moto_monster";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class stinder_moto_yamaha: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "Combinaison de moto YAMAHA";
		picture = "\Tenues_Civil\data\icons\Moto\stinder_combi1yamaha.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Moto\stinder_combi_yamaha.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "stinder_moto_yamaha";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class stinder_moto_ktm: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "Combinaison de moto KTM";
		picture = "\Tenues_Civil\data\icons\Moto\stinder_combi1ktm.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Moto\stinder_combi_ktm.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "stinder_moto_ktm";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class stinder_moto_monster_gants: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "Combinaison de moto MONSTER 2";
		picture = "\Tenues_Civil\data\icons\Moto\stinder_combi2monster.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Moto\stinder_combi_monster.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "stinder_moto_monster_gants";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class stinder_moto_yamaha_gants: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "Combinaison de moto YAMAHA 2";
		picture = "\Tenues_Civil\data\icons\Moto\stinder_combi2yamaha.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Moto\stinder_combi_yamaha.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "stinder_moto_yamaha_gants";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class stinder_moto_ktm_gants: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "Combinaison de moto KTM 2";
		picture = "\Tenues_Civil\data\icons\Moto\stinder_combi2ktm.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Moto\stinder_combi_ktm.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "stinder_moto_ktm_gants";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class stinder_casque_monster: H_RacingHelmet_1_F
	{
		author = "A3F";
		scope = 2;
		displayName = "Casque de moto MONSTER";
		picture = "\Tenues_Civil\data\icons\Moto\stinder_casquemoto_monster.paa";
		model = "A3\characters_f_kart\Civil\C_RacingHelmet_F";
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Moto\stinder_casque_monster.paa"};
	};
	class stinder_casque_yamaha: H_RacingHelmet_1_F
	{
		author = "A3F";
		scope = 2;
		displayName = "Casque de moto YAMAHA";
		picture = "\Tenues_Civil\data\icons\Moto\stinder_casquemoto_yamaha.paa";
		model = "A3\characters_f_kart\Civil\C_RacingHelmet_F";
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Moto\stinder_casque_yamaha.paa"};
	};
	class stinder_casque_ktm: H_RacingHelmet_1_F
	{
		author = "A3F";
		scope = 2;
		displayName = "Casque de moto KTM";
		picture = "\Tenues_Civil\data\icons\Moto\stinder_casquemoto_ktm.paa";
		model = "A3\characters_f_kart\Civil\C_RacingHelmet_F";
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Moto\stinder_casque_ktm.paa"};
	};
	class tshirt_organisation_civil_blanche: Uniform_Base
	{
		scope = 2;
		displayName = "Tenue Organisateur Blanche";
		picture = "\Tenues_Civil\data\icons\Organisation\tshirt_organisation_civil_blanche.paa";
		author = "Julien Bévan";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Organisation\tshirt_organisation_civil_blanche.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "tshirt_organisation_civil_blanche";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class tshirt_organisation_civil_noir: Uniform_Base
	{
		scope = 2;
		displayName = "Tenue Organisateur Noir";
		picture = "\Tenues_Civil\data\icons\Organisation\tshirt_organisation_civil_noir.paa";
		author = "Julien Bévan";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Organisation\tshirt_organisation_civil_noir.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "tshirt_organisation_civil_noir";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class adidas_bleu: Uniform_Base
	{
		scope = 2;
		displayName = "Polo Adidas Bleu";
		picture = "\Tenues_Civil\data\icons\Polo\adidas_bleu.paa";
		author = "A3F";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Polo\adidas_bleu.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "adidas_bleu";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class adidas_jaune: Uniform_Base
	{
		scope = 2;
		displayName = "Polo Adidas Jaune";
		picture = "\Tenues_Civil\data\icons\Polo\adidas_jaune.paa";
		author = "A3F";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Polo\adidas_jaune.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "adidas_jaune";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class adidas_noir: Uniform_Base
	{
		scope = 2;
		displayName = "Polo Adidas Noir";
		picture = "\Tenues_Civil\data\icons\Polo\adidas_noir.paa";
		author = "A3F";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Polo\adidas_noir.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "adidas_noir";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class adidas_rouge: Uniform_Base
	{
		scope = 2;
		displayName = "Polo Adidas Rouge";
		picture = "\Tenues_Civil\data\icons\Polo\adidas_rouge.paa";
		author = "A3F";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Polo\adidas_rouge.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "adidas_rouge";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class adidas_vert: Uniform_Base
	{
		scope = 2;
		displayName = "Polo Adidas Vert";
		picture = "\Tenues_Civil\data\icons\Polo\adidas_vert.paa";
		author = "A3F";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Polo\adidas_vert.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "adidas_vert";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class adidas_violet: Uniform_Base
	{
		scope = 2;
		displayName = "Polo Adidas Violet";
		picture = "\Tenues_Civil\data\icons\Polo\adidas_violet.paa";
		author = "A3F";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Polo\adidas_violet.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "adidas_violet";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class nike_bleu: Uniform_Base
	{
		scope = 2;
		displayName = "Polo Nike Bleu";
		picture = "\Tenues_Civil\data\icons\Polo\nike_bleu.paa";
		author = "A3F";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Polo\nike_bleu.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "nike_bleu";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class nike_jaune: Uniform_Base
	{
		scope = 2;
		displayName = "Polo Nike Jaune";
		picture = "\Tenues_Civil\data\icons\Polo\nike_jaune.paa";
		author = "A3F";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Polo\nike_jaune.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "nike_jaune";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class nike_noir: Uniform_Base
	{
		scope = 2;
		displayName = "Polo Nike Noir";
		picture = "\Tenues_Civil\data\icons\Polo\nike_noir.paa";
		author = "A3F";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Polo\nike_noir.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "nike_noir";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class nike_rouge: Uniform_Base
	{
		scope = 2;
		displayName = "Polo Nike Rouge";
		picture = "\Tenues_Civil\data\icons\Polo\nike_rouge.paa";
		author = "A3F";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Polo\nike_rouge.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "nike_rouge";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class nike_vert: Uniform_Base
	{
		scope = 2;
		displayName = "Polo Nike Vert";
		picture = "\Tenues_Civil\data\icons\Polo\nike_vert.paa";
		author = "A3F";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Polo\nike_vert.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "nike_vert";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class nike_violet: Uniform_Base
	{
		scope = 2;
		displayName = "Polo Nike Violet";
		picture = "\Tenues_Civil\data\icons\Polo\nike_violet.paa";
		author = "A3F";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Polo\nike_violet.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "nike_violet";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class tee_swoosh_rouge: Uniform_Base
	{
		scope = 2;
		displayName = "T-Shirt Nike Rouge";
		picture = "\Tenues_Civil\data\icons\T_Shirt\shirt_nike_small_rouge.paa";
		author = "";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt\tee_swoosh_rouge.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "tee_swoosh_rouge";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class tee_swoosh_noir: Uniform_Base
	{
		scope = 2;
		displayName = "T-Shirt Nike Noir";
		picture = "\Tenues_Civil\data\icons\T_Shirt\shirt_nike_small_blanc.paa";
		author = "";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt\tee_swoosh_noir.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "tee_swoosh_noir";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class tee_swoosh_gris: Uniform_Base
	{
		scope = 2;
		displayName = "T-Shirt Nike Gris";
		picture = "\Tenues_Civil\data\icons\T_Shirt\shirt_nike_small_gris.paa";
		author = "";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt\tee_swoosh_gris.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "tee_swoosh_gris";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class tee_swoosh_bleu: Uniform_Base
	{
		scope = 2;
		displayName = "T-Shirt Nike Bleu";
		picture = "\Tenues_Civil\data\icons\T_Shirt\shirt_nike_small_bleu.paa";
		author = "";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt\tee_swoosh_bleu.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "tee_swoosh_bleu";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class tee_supreme_rouge: Uniform_Base
	{
		scope = 2;
		displayName = "T-Shirt Supreme Rouge";
		picture = "\Tenues_Civil\data\icons\T_Shirt\shirt_supreme_rouge.paa";
		author = "";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt\tee_supreme_rouge.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "tee_supreme_rouge";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class tee_supreme_noir: Uniform_Base
	{
		scope = 2;
		displayName = "T-Shirt Supreme Noir";
		picture = "\Tenues_Civil\data\icons\T_Shirt\shirt_supreme_noir.paa";
		author = "";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt\tee_supreme_noir.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "tee_supreme_noir";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class tee_supreme_bleu: Uniform_Base
	{
		scope = 2;
		displayName = "T-Shirt Supreme Bleu";
		picture = "\Tenues_Civil\data\icons\T_Shirt\shirt_supreme_bleu.paa";
		author = "";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt\tee_supreme_bleu.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "tee_supreme_bleu";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class tee_nike_rouge: Uniform_Base
	{
		scope = 2;
		displayName = "T-Shirt Nike Rouge";
		picture = "\Tenues_Civil\data\icons\T_Shirt\shirt_nike_rouge.paa";
		author = "";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt\tee_nike_rouge.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "tee_nike_rouge";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class tee_nike_noir: Uniform_Base
	{
		scope = 2;
		displayName = "T-Shirt Nike Noir";
		picture = "\Tenues_Civil\data\icons\T_Shirt\shirt_nike_blanc.paa";
		author = "";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt\tee_nike_noir.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "tee_nike_noir";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class tee_nike_gris: Uniform_Base
	{
		scope = 2;
		displayName = "T-Shirt Nike Gris";
		picture = "\Tenues_Civil\data\icons\T_Shirt\shirt_nike_gris.paa";
		author = "";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt\tee_nike_gris.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "tee_nike_gris";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class tee_nike_bleu: Uniform_Base
	{
		scope = 2;
		displayName = "T-Shirt Nike Bleu";
		picture = "\Tenues_Civil\data\icons\T_Shirt\shirt_nike_bleu.paa";
		author = "";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt\tee_nike_bleu.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "tee_nike_bleu";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class tee_adidas_vert: Uniform_Base
	{
		scope = 2;
		displayName = "T-Shirt Adidas Vert";
		picture = "\Tenues_Civil\data\icons\T_Shirt\shirt_adidas_vert.paa";
		author = "";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt\tee_adidas_vert.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "tee_adidas_vert";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class tee_adidas_rouge: Uniform_Base
	{
		scope = 2;
		displayName = "T-Shirt Adidas Rouge";
		picture = "\Tenues_Civil\data\icons\T_Shirt\shirt_adidas_rouge.paa";
		author = "";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt\tee_adidas_rouge.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "tee_adidas_rouge";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class tee_adidas_gris: Uniform_Base
	{
		scope = 2;
		displayName = "T-Shirt Adidas Gris";
		picture = "\Tenues_Civil\data\icons\T_Shirt\shirt_adidas_gris.paa";
		author = "";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt\tee_adidas_gris.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "tee_adidas_gris";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class tee_adidas_bleu: Uniform_Base
	{
		scope = 2;
		displayName = "T-Shirt Adidas Bleu";
		picture = "\Tenues_Civil\data\icons\T_Shirt\shirt_adidas_bleu.paa";
		author = "";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt\tee_adidas_bleu.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "tee_adidas_bleu";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class BAC: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "Tenue BAC";
		picture = "\Tenues_Civil\data\icons\t_shirt_futur\BAC.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Futur\bac.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "bac";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class civl1: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "T-shirt du futur Always";
		picture = "\Tenues_Civil\data\icons\t_shirt_futur\civl1.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Futur\always.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "always";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class civl2: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "T-shirt du futur Batman";
		picture = "\Tenues_Civil\data\icons\t_shirt_futur\civl2.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Futur\batman.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "batman";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class civl3: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "T-shirt du futur Bleu";
		picture = "\Tenues_Civil\data\icons\t_shirt_futur\civl3.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Futur\bleu.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "bleu";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class civl4: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "T-shirt du futur Breakingbad";
		picture = "\Tenues_Civil\data\icons\t_shirt_futur\civl4.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Futur\breakingbad.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "breakingbad";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class civl5: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "T-shirt du futur DeadPool";
		picture = "\Tenues_Civil\data\icons\t_shirt_futur\civl5.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Futur\deadpool.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "deadpool";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class civl6: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "T-shirt du futur Dragon";
		picture = "\Tenues_Civil\data\icons\t_shirt_futur\civl6.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Futur\dragon.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "dragon";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class civl7: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "T-shirt du futur Excelsior";
		picture = "\Tenues_Civil\data\icons\t_shirt_futur\civl7.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Futur\excelsior.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "excelsior";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class civl8: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "T-shirt du futur Geek";
		picture = "\Tenues_Civil\data\icons\t_shirt_futur\civl8.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Futur\geek.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "geek";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class civl9: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "T-shirt du futur Jaune";
		picture = "\Tenues_Civil\data\icons\t_shirt_futur\civl9.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Futur\jaune.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "jaune";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class civl10: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "T-shirt du futur Lumiere";
		picture = "\Tenues_Civil\data\icons\t_shirt_futur\civl10.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Futur\lumiere.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "lumiere";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class civl11: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "T-shirt du futur Manga";
		picture = "\Tenues_Civil\data\icons\t_shirt_futur\civl11.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Futur\manga.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "manga";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class civl12: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "T-shirt du futur Mort";
		picture = "\Tenues_Civil\data\icons\t_shirt_futur\civl12.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Futur\mort.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "mort";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class civl13: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "T-shirt du futur Rouge";
		picture = "\Tenues_Civil\data\icons\t_shirt_futur\civl13.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Futur\rouge.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "rouge";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class civl14: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "T-shirt du futur Tokyo";
		picture = "\Tenues_Civil\data\icons\t_shirt_futur\civl14.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Futur\tokyo.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "tokyo";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class civl15: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "T-shirt du futur TshirtV";
		picture = "\Tenues_Civil\data\icons\t_shirt_futur\civl15.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Futur\TshirtV.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "TshirtV";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class civl16: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "T-shirt du futur Worms";
		picture = "\Tenues_Civil\data\icons\t_shirt_futur\civl16.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Futur\worms.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "worms";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class civl17: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "Tenue charnel";
		picture = "\Tenues_Civil\data\icons\t_shirt_futur\civl17.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Futur\charnel.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "charnel";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class civl18: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "T-shirt du futur fruit";
		picture = "\Tenues_Civil\data\icons\t_shirt_futur\civl18.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Futur\fruit.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "fruit";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class civl19: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "T-shirt du futur Grove studio";
		picture = "\Tenues_Civil\data\icons\t_shirt_futur\civl19.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Futur\grove_studio.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "grove";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class civl20: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "T-shirt du futur minions";
		picture = "\Tenues_Civil\data\icons\t_shirt_futur\civl20.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Futur\minions.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "minions";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class civl21: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "T-shirt du futur my band";
		picture = "\Tenues_Civil\data\icons\t_shirt_futur\civl21.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Futur\my_band.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "myband";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class civ22: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "T-shirt du futur noob";
		picture = "\Tenues_Civil\data\icons\t_shirt_futur\civl22.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Futur\noob.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "noob";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class civl23: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "T-shirt du futur obey";
		picture = "\Tenues_Civil\data\icons\t_shirt_futur\civl23.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Futur\obey.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "obey";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class civl24: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "T-shirt du futur performance";
		picture = "\Tenues_Civil\data\icons\t_shirt_futur\civl24.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Futur\performance.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "performance";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class civl25: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "T-shirt du futur rocksmith";
		picture = "\Tenues_Civil\data\icons\t_shirt_futur\civl25.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Futur\rocksmith.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "rocksmith";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class civl26: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "T-shirt du futur rubi";
		picture = "\Tenues_Civil\data\icons\t_shirt_futur\civl26.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Futur\rubi.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "rubi";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class civl27: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "T-shirt du futur serveur";
		picture = "\Tenues_Civil\data\icons\t_shirt_futur\civl27.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Futur\serveur.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "serveur";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class civl28: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "T-shirt du futur serveur 2";
		picture = "\Tenues_Civil\data\icons\t_shirt_futur\civl28.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Futur\serveur_2.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "serveur_2";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class civl29: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "T-shirt du futur serveur 3";
		picture = "\Tenues_Civil\data\icons\t_shirt_futur\civl29.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Futur\serveur_3.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "serveur_3";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class civl30: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "T-shirt du futur serveur 4";
		picture = "\Tenues_Civil\data\icons\t_shirt_futur\civl30.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Futur\serveur_4.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "serveur_4";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class civl31: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "T-shirt du futur store";
		picture = "\Tenues_Civil\data\icons\t_shirt_futur\civl31.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Futur\store.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "store";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class civl32: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "T-shirt du futur swg";
		picture = "\Tenues_Civil\data\icons\t_shirt_futur\civl32.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Futur\swg.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "swg";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class civl33: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "T-shirt du futur us army";
		picture = "\Tenues_Civil\data\icons\t_shirt_futur\civl33.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Futur\us_army.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "us_army";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class civl34: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "T-shirt du futur z";
		picture = "\Tenues_Civil\data\icons\t_shirt_futur\civl34.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Futur\z.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "z";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class tshirt_jean_nike_blanc: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "T-shirt et jean - Nike (Blanc)";
		picture = "\Tenues_Civil\data\icons\T_Shirt_Jean\nike_blanc.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Jean\nike_blanc.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "tshirt_jean_nike_blanc";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class tshirt_jean_nike_noir: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "T-shirt et jean - Nike (Noir)";
		picture = "\Tenues_Civil\data\icons\T_Shirt_Jean\nike_noir.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Jean\nike_noir.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "tshirt_jean_nike_noir";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class tshirt_jean_nike_jaune: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "T-shirt et jean - Nike (Jaune)";
		picture = "\Tenues_Civil\data\icons\T_Shirt_Jean\nike_jaune.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Jean\nike_jaune.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "tshirt_jean_nike_jaune";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class tshirt_jean_nike_rouge: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "T-shirt et jean - Nike (Rouge)";
		picture = "\Tenues_Civil\data\icons\T_Shirt_Jean\nike_rouge.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Jean\nike_rouge.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "tshirt_jean_nike_rouge";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class tshirt_jean_supreme_noir: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "T-shirt et jean - Supreme (Noir)";
		picture = "\Tenues_Civil\data\icons\T_Shirt_Jean\supreme_noir.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Jean\supreme_noir.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "tshirt_jean_supreme_noir";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class tshirt_jean_supreme_blanc: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "T-shirt et jean - Supreme (Blanc)";
		picture = "\Tenues_Civil\data\icons\T_Shirt_Jean\supreme_blanc.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Jean\supreme_blanc.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "tshirt_jean_supreme_blanc";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class tshirt_jean_adidas_blanc: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "T-shirt et jean - Adidas (Blanc)";
		picture = "\Tenues_Civil\data\icons\T_Shirt_Jean\adidas_blanc.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Jean\adidas_blanc.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "tshirt_jean_adidas_blanc";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class tshirt_jean_adidas_noir: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "T-shirt et jean - Adidas (Noir)";
		picture = "\Tenues_Civil\data\icons\T_Shirt_Jean\adidas_noir.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Jean\adidas_noir.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "tshirt_jean_adidas_noir";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class tshirt_jean_summer: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "T-shirt et jean - Summer";
		picture = "\Tenues_Civil\data\icons\T_Shirt_Jean\summer.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Jean\summer.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "tshirt_jean_summer";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class tshirt_jean_surf: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "T-shirt et jean - Surf";
		picture = "\Tenues_Civil\data\icons\T_Shirt_Jean\surf.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Jean\surf.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "tshirt_jean_surf";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class tshirt_jean_hulk: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "T-shirt et jean - Hulk";
		picture = "\Tenues_Civil\data\icons\T_Shirt_Jean\hulk.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Jean\hulk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "tshirt_jean_hulk";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class tshirt_jean_blanche: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "T-shirt et jean (Blanche)";
		picture = "\Tenues_Civil\data\icons\T_Shirt_Jean\uni_blanc.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Jean\blanc.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "tshirt_jean_blanche";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class tshirt_jean_bleu: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "T-shirt et jean (Bleu)";
		picture = "\Tenues_Civil\data\icons\T_Shirt_Jean\uni_bleu.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Jean\bleu.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "tshirt_jean_bleu";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class tshirt_jean_jaune: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "T-shirt et jean (Jaune)";
		picture = "\Tenues_Civil\data\icons\T_Shirt_Jean\uni_jaune.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Jean\jaune.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "tshirt_jean_jaune";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class tshirt_jean_noir: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "T-shirt et jean (Noir)";
		picture = "\Tenues_Civil\data\icons\T_Shirt_Jean\uni_noir.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Jean\noir.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "tshirt_jean_noir";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class tshirt_jean_orange: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "T-shirt et jean (Orange)";
		picture = "\Tenues_Civil\data\icons\T_Shirt_Jean\uni_orange.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Jean\orange.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "tshirt_jean_orange";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class tshirt_jean_rose: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "T-shirt et jean (Rose)";
		picture = "\Tenues_Civil\data\icons\T_Shirt_Jean\uni_rose.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Jean\rose.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "tshirt_jean_rose";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class tshirt_jean_rouge: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "T-shirt et jean (Rouge)";
		picture = "\Tenues_Civil\data\icons\T_Shirt_Jean\uni_rouge.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Jean\rouge.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "tshirt_jean_rouge";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class tshirt_jean_vert: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "T-shirt et jean (Vert)";
		picture = "\Tenues_Civil\data\icons\T_Shirt_Jean\uni_vert.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Jean\vert.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "tshirt_jean_vert";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class tenue_ete_nike_blanc: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "Tenue d'été - Nike (Blanc)";
		picture = "\Tenues_Civil\data\icons\T_Shirt_Jean\nike_blanc.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Jean\nike_blanc.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "tenue_ete_nike_blanc";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class tenue_ete_nike_noir: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "Tenue d'été - Nike (Noir)";
		picture = "\Tenues_Civil\data\icons\T_Shirt_Jean\nike_noir.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Jean\nike_noir.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "tenue_ete_nike_noir";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class tenue_ete_nike_jaune: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "Tenue d'été - Nike (Jaune)";
		picture = "\Tenues_Civil\data\icons\T_Shirt_Jean\nike_jaune.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Jean\nike_jaune.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "tenue_ete_nike_jaune";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class tenue_ete_nike_rouge: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "Tenue d'été - Nike (Rouge)";
		picture = "\Tenues_Civil\data\icons\T_Shirt_Jean\nike_rouge.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Jean\nike_rouge.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "tenue_ete_nike_rouge";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class tenue_ete_supreme_noir: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "Tenue d'été - Supreme (Noir)";
		picture = "\Tenues_Civil\data\icons\T_Shirt_Jean\supreme_noir.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Jean\supreme_noir.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "tenue_ete_supreme_noir";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class tenue_ete_supreme_blanc: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "Tenue d'été - Supreme (Blanc)";
		picture = "\Tenues_Civil\data\icons\T_Shirt_Jean\supreme_blanc.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Jean\supreme_blanc.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "tenue_ete_supreme_blanc";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class tenue_ete_adidas_blanc: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "Tenue d'été - Adidas (Blanc)";
		picture = "\Tenues_Civil\data\icons\T_Shirt_Jean\adidas_blanc.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Jean\adidas_blanc.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "tenue_ete_adidas_blanc";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class tenue_ete_adidas_noir: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "Tenue d'été - Adidas (Noir)";
		picture = "\Tenues_Civil\data\icons\T_Shirt_Jean\adidas_noir.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Jean\adidas_noir.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "tenue_ete_adidas_noir";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class tenue_ete_summer: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "Tenue d'été - Summer";
		picture = "\Tenues_Civil\data\icons\T_Shirt_Jean\summer.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Jean\summer.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "tenue_ete_summer";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class tenue_ete_surf: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "Tenue d'été - Surf";
		picture = "\Tenues_Civil\data\icons\T_Shirt_Jean\surf.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Jean\surf.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "tenue_ete_surf";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class tenue_ete_hulk: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "Tenue d'été - Hulk";
		picture = "\Tenues_Civil\data\icons\T_Shirt_Jean\hulk.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Jean\hulk.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "tenue_ete_hulk";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class tenue_ete_blanche: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "Tenue d'été (Blanche)";
		picture = "\Tenues_Civil\data\icons\T_Shirt_Jean\uni_blanc.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Jean\blanc.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "tenue_ete_blanche";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class tenue_ete_bleu: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "Tenue d'été (Bleu)";
		picture = "\Tenues_Civil\data\icons\T_Shirt_Jean\uni_bleu.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Jean\bleu.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "tenue_ete_bleu";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class tenue_ete_jaune: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "Tenue d'été (Jaune)";
		picture = "\Tenues_Civil\data\icons\T_Shirt_Jean\uni_jaune.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Jean\jaune.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "tenue_ete_jaune";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class tenue_ete_noir: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "Tenue d'été (Noir)";
		picture = "\Tenues_Civil\data\icons\T_Shirt_Jean\uni_noir.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Jean\noir.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "tenue_ete_noir";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class tenue_ete_orange: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "Tenue d'été (Orange)";
		picture = "\Tenues_Civil\data\icons\T_Shirt_Jean\uni_orange.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Jean\orange.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "tenue_ete_orange";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class tenue_ete_rose: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "Tenue d'été (Rose)";
		picture = "\Tenues_Civil\data\icons\T_Shirt_Jean\uni_rose.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Jean\rose.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "tenue_ete_rose";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class tenue_ete_rouge: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "Tenue d'été (Rouge)";
		picture = "\Tenues_Civil\data\icons\T_Shirt_Jean\uni_rouge.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Jean\rouge.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "tenue_ete_rouge";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class tenue_ete_vert: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "Tenue d'été (Vert)";
		picture = "\Tenues_Civil\data\icons\T_Shirt_Jean\uni_vert.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\T_Shirt_Jean\vert.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "tenue_ete_vert";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class civl35: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "T-shirt qwertee adams";
		picture = "\Tenues_Civil\data\icons\Qwertee\civl35.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Qwertee\adams.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "adams";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class civl36: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "T-shirt qwertee bender";
		picture = "\Tenues_Civil\data\icons\Qwertee\civl36.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Qwertee\bender.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "bender";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class civl37: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "T-shirt qwertee biscuit";
		picture = "\Tenues_Civil\data\icons\Qwertee\civl37.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Qwertee\biscuit.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "biscuit";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class civl38: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "T-shirt qwertee box";
		picture = "\Tenues_Civil\data\icons\Qwertee\civl38.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Qwertee\box.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "box";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class civl39: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "T-shirt qwertee casper";
		picture = "\Tenues_Civil\data\icons\Qwertee\civl39.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Qwertee\casper.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "casper";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class civl40: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "T-shirt qwertee coffee";
		picture = "\Tenues_Civil\data\icons\Qwertee\civl40.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Qwertee\coffee.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "coffee";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class civl41: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "T-shirt qwertee dead";
		picture = "\Tenues_Civil\data\icons\Qwertee\civl41.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Qwertee\dead.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "dead";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class civl42: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "T-shirt qwertee delorean";
		picture = "\Tenues_Civil\data\icons\Qwertee\civl42.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Qwertee\delorean.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "delorean";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class civl43: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "T-shirt qwertee dory";
		picture = "\Tenues_Civil\data\icons\Qwertee\civl43.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Qwertee\dory.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "dory";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class civl44: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "T-shirt qwertee dragonball";
		picture = "\Tenues_Civil\data\icons\Qwertee\civl44.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Qwertee\dragonball.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "dragonball";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class civl45: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "T-shirt qwertee eau";
		picture = "\Tenues_Civil\data\icons\Qwertee\civl45.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Qwertee\eau.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "eau";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class civl46: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "T-shirt qwertee empire";
		picture = "\Tenues_Civil\data\icons\Qwertee\civl46.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Qwertee\empire.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "empire";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class civl47: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "T-shirt qwertee engineer";
		picture = "\Tenues_Civil\data\icons\Qwertee\civl47.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Qwertee\engineer.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "engineer";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class civl48: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "T-shirt qwertee extra";
		picture = "\Tenues_Civil\data\icons\Qwertee\civl48.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Qwertee\extra.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "extra";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class civl49: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "T-shirt qwertee feu";
		picture = "\Tenues_Civil\data\icons\Qwertee\civl49.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Qwertee\feu.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "feu";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class civl50: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "T-shirt qwertee heisenberg";
		picture = "\Tenues_Civil\data\icons\Qwertee\civl50.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Qwertee\heisenberg.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "heisenberg";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class civl51: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "T-shirt qwertee homme";
		picture = "\Tenues_Civil\data\icons\Qwertee\civl51.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Qwertee\homme.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "homme";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class civl52: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "T-shirt qwertee instinct";
		picture = "\Tenues_Civil\data\icons\Qwertee\civl52.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Qwertee\instinct.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "instinct";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class civl53: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "T-shirt qwertee japan";
		picture = "\Tenues_Civil\data\icons\Qwertee\civl53.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Qwertee\japan.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "japan";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class civl54: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "T-shirt qwertee mask";
		picture = "\Tenues_Civil\data\icons\Qwertee\civl54.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Qwertee\mask.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "mask";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class civl55: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "T-shirt qwertee mechant";
		picture = "\Tenues_Civil\data\icons\Qwertee\civl55.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Qwertee\mechant.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "mechant";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class civl56: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "T-shirt qwertee mystic";
		picture = "\Tenues_Civil\data\icons\Qwertee\civl56.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Qwertee\mystic.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "mystic";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class civl57: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "T-shirt qwertee never";
		picture = "\Tenues_Civil\data\icons\Qwertee\civl57.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Qwertee\never.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "never";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class civl58: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "T-shirt qwertee onepeace";
		picture = "\Tenues_Civil\data\icons\Qwertee\civl58.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Qwertee\onepeace.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "onepeace";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class civl59: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "T-shirt qwertee ovni";
		picture = "\Tenues_Civil\data\icons\Qwertee\civl59.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Qwertee\ovni.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "ovni";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class civl60: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "T-shirt qwertee peace";
		picture = "\Tenues_Civil\data\icons\Qwertee\civl60.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Qwertee\peace.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "peace";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class civl61: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "T-shirt qwertee physic";
		picture = "\Tenues_Civil\data\icons\Qwertee\civl61.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Qwertee\physic.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "physic";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class civl62: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "T-shirt qwertee qwertee";
		picture = "\Tenues_Civil\data\icons\Qwertee\civl62.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Qwertee\qwertee.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "qwertee";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class civl63: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "T-shirt qwertee ray";
		picture = "\Tenues_Civil\data\icons\Qwertee\civl63.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Qwertee\ray.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "ray";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class civl64: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "T-shirt qwertee robot";
		picture = "\Tenues_Civil\data\icons\Qwertee\civl64.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Qwertee\robot.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "robot";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class civl65: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "T-shirt qwertee star wars";
		picture = "\Tenues_Civil\data\icons\Qwertee\civl65.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Qwertee\star_wars.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "star_wars";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class civl66: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "T-shirt qwertee three element";
		picture = "\Tenues_Civil\data\icons\Qwertee\civl66.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Qwertee\three_element.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "three_element";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class civl67: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "T-shirt qwertee valor";
		picture = "\Tenues_Civil\data\icons\Qwertee\civl67.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Qwertee\valor.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "valor";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class civl68: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "T-shirt qwertee vendeta";
		picture = "\Tenues_Civil\data\icons\Qwertee\civl68.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Qwertee\vendeta.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "vendeta";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class civl69: Uniform_Base
	{
		author = "A3F";
		scope = 2;
		displayName = "T-shirt qwertee yoda";
		picture = "\Tenues_Civil\data\icons\Qwertee\civl69.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Qwertee\yoda.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "yoda";
			containerClass = "Supply20";
			mass = 20;
		};
	};
};
class CfgGlasses
{
	class G_Balaclava_blk;
	class G_Balaclava_TI_Halloween_1_F: G_Balaclava_blk
	{
		author = "A3F";
		_generalMacro = "G_Balaclava_TI_Halloween_1_F";
		displayName = "Cagoule Halloween (type 1)";
		DLC = "";
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Cagoule\g_balaclava_ti_halloween_1_f_co.paa"};
		picture = "\Tenues_Civil\data\icons\Cagoule\g_balaclava_ti_halloween_1_f_co.paa";
	};
	class G_Balaclava_TI_Halloween_2_F: G_Balaclava_blk
	{
		author = "A3F";
		_generalMacro = "G_Balaclava_TI_Halloween_2_F";
		displayName = "Cagoule Halloween (type 2)";
		DLC = "";
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Cagoule\g_balaclava_ti_halloween_2_f_co.paa"};
		picture = "\Tenues_Civil\data\icons\Cagoule\g_balaclava_ti_halloween_2_f_co.paa";
	};
	class G_Balaclava_TI_Halloween_3_F: G_Balaclava_blk
	{
		author = "A3F";
		_generalMacro = "G_Balaclava_TI_Halloween_3_F";
		displayName = "Cagoule Halloween (type 3)";
		DLC = "";
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Cagoule\g_balaclava_ti_halloween_3_f_co.paa"};
		picture = "\Tenues_Civil\data\icons\Cagoule\g_balaclava_ti_halloween_3_f_co.paa";
	};
	class G_Balaclava_TI_Christmas_F: G_Balaclava_blk
	{
		author = "A3F";
		_generalMacro = "G_Balaclava_TI_Christmas_F";
		displayName = "Cagoule Christmas";
		DLC = "";
		hiddenSelectionsTextures[] = {"\Tenues_Civil\data\textures\Cagoule\g_balaclava_ti_christmas_f_co.paa"};
		picture = "\Tenues_Civil\data\icons\Cagoule\g_balaclava_ti_christmas_f_co.paa";
	};
};
