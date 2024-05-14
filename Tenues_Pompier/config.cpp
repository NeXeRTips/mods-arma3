////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 9.44
//https://mikero.bytex.digital/Downloads
//'now' is Tue May 07 12:39:22 2024 : 'file' last modified on Tue May 07 12:39:22 2024
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Tenues_Pompier
	{
		units[] = {"sac_cyno","sac_grimp","stinder_plongeur_sp","Tenue_Plongeur_SP","Tenue_Plongeur_SP_2","sac_samu"};
		weapons[] = {"tenu_sport","tenu_recruteur","tenu_formateur","Tenue_Formation_SP","Tenue_Instructeur_SP","polaire_instructeur_moto","kepi_cln","kepi_com","kepi_cpt","kepi_adj","kepi_sch","kepi_sgt","kepi_cplc","kepi_cpl","kepi_1er","kepi_2sd","polaire_cln_sp","polaire_com_sp","polaire_cpt_sp","polaire_lieutenant_sp","polaire_adj_sp","polaire_sch_sp","polaire_sgt_sp","polaire_cplc_sp","polaire_cpl_sp","polaire_1er_sp","polaire_2sd_sp","polo_colonel","polo_commandant","polo_capitaine","polo_lieutenant","polo_adjudant","polo_sergent_chef","polo_sergent","polo_caporal_chef","polo_caporal","polo_sapeur_1er_classe","polo_sapeur_2nd_classe","sp_sweater_8","polaire_cyno","t_shirt_cyno","polaire_veto","tenu_pilote","tenu_copilote","tenu_formateur_pilote","tenue_pilote_sp","tenue_co_pilote_sp","tenue_formateur_sp","tenu_pilote_samu","tenu_copilote_samu","tenu_formateur_pilote_samu","tenue_pilote_samu","tenue_co_pilote_samu","tenue_formateur_samu","Polaire_GRIMP_Formateur","1Polaire_GRIMP","t_shirt_grimp","tenu_feu","tenu_formateur_incendie","Tenue_Formateur_Incendie","sp_uniform_f12_8","Coke_Tenues_SP_Polaire_Nautique","polaire_nrbc","polaire_ambu_samu","polaire_infirmier","polaire_medecin","polaire_medecinreg","polaire_motard","Polaire_Motard_SAMU","Polaire_SC","Gilet_Tactique_SC","Gilet_Tactique_SC_Equipe_Medicale","tenu_balisage","tenu_formateur_balisage","sp_uniform_f1_8","polaire_sssm_ambulancier","polaire_sssm_auxmedical","polaire_sssm_infirmier","polaire_sssm_medecin","polaire_sssm_pharmacien","polaire_sssm_psychologue","polaire_motard_SSSM","polaire_MSM","t_shirt_2sd","t_shirt_1er","t_shirt_cpl","t_shirt_cplc","t_shirt_sgt","t_shirt_sch","t_shirt_adj","t_shirt_lieutenant","t_shirt_cpt","t_shirt_com","t_shirt_cln","vareuse_cln","vareuse_com","vareuse_cpt","vareuse_adj","vareuse_sch","vareuse_sgt","vareuse_cplc","vareuse_cpl","vareuse_1er","vareuse_2sd","Tenue_ceremonie_colonel","Tenue_ceremonie_commandant","Tenue_ceremonie_capitaine","Tenue_ceremonie_lieutenant","Tenue_ceremonie_adjudant","Tenue_ceremonie_sergent_chef","Tenue_ceremonie_sergent","Tenue_ceremonie_caporal_chef","Tenue_ceremonie_caporal","Tenue_ceremonie_1er_classe","Tenue_ceremonie_2nd_classe"};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F","A3_Characters_F_BLUFOR","A3_Characters_F_Civil","A3_Characters_F_Bootcamp","A3_Weapons_F_Ammoboxes","A3_Characters_F_Common","A3_Characters_F_EPB","A3_Characters_F_AoW_Uniforms"};
	};
};
class CfgVehicles
{
	class B_Soldier_F;
	class B_Soldier_04_f;
	class B_RangeMaster_F;
	class O_officer_F;
	class I_diver_F;
	class I_Soldier_base_F;
	class Bag_Base;
	class C_Uniform_ParadeUniform_01_belt_base_F;
	class C_Uniform_ParadeUniform_01_base_F;
	class tenu_sport: B_Soldier_F
	{
		
		scope = 1;
		uniformClass = "tenu_sport";
		model = "\A3\Characters_F\BLUFOR\b_soldier_02.p3d";
		modelSides[] = {3,2,1};
		hiddenSelections[] = {"Camo","camo2","insignia"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Autre\tenue_sport_bas.paa","\Tenues_Pompier\data\textures\Autre\tenue_sport_haut.paa"};
	};
	class tenu_recruteur: B_Soldier_F
	{
		
		scope = 1;
		uniformClass = "tenu_recruteur";
		model = "\A3\Characters_F\BLUFOR\b_soldier_02.p3d";
		modelSides[] = {3,2,1};
		hiddenSelections[] = {"Camo","camo2","insignia"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Autre\tenue_recruteur_bas.paa","\Tenues_Pompier\data\textures\Autre\tenue_recruteur.paa"};
	};
	class tenu_formateur: B_Soldier_F
	{
		
		scope = 1;
		uniformClass = "tenu_formateur";
		model = "\A3\Characters_F\BLUFOR\b_soldier_02.p3d";
		modelSides[] = {3,2,1};
		hiddenSelections[] = {"Camo","camo2","insignia"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Autre\tenue_sport_bas.paa","\Tenues_Pompier\data\textures\Autre\tenue_formateur.paa"};
	};
	class Tenue_Formation_SP: B_Soldier_F
	{
		
		scope = 1;
		uniformClass = "Tenue_Formation_SP";
		model = "\A3\Characters_F\BLUFOR\b_soldier_02.p3d";
		modelSides[] = {3,2,1};
		hiddenSelections[] = {"Camo","camo2","insignia"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Autre\tenue_sport_bas.paa","\Tenues_Pompier\data\textures\Autre\Tenue_Formation_SP.paa"};
	};
	class Tenue_Instructeur_SP: B_Soldier_F
	{
		
		scope = 1;
		uniformClass = "Tenue_Instructeur_SP";
		model = "\A3\Characters_F\BLUFOR\b_soldier_02.p3d";
		modelSides[] = {3,2,1};
		hiddenSelections[] = {"Camo","camo2","insignia"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Autre\tenue_sport_bas.paa","\Tenues_Pompier\data\textures\Autre\Tenue_Instructeur_SP.paa"};
	};
	class polaire_instructeur_moto: B_Soldier_F
	{
		_generalMacro = "B_Soldier_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "polaire_instructeur_moto";
		model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
		modelSides[] = {3,2,1};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Polaire\polaire_instructeur_moto.paa"};
		displayName = "SP - Polaire Motard Instructeur";
		
	};
	class polaire_cln_sp: B_Soldier_F
	{
		_generalMacro = "B_Soldier_F";
		scope = 1;
		displayName = "SP - Polaire Colonel";
		nakedUniform = "U_BasicBody";
		uniformClass = "polaire_cln_sp";
		modelSides[] = {3,1,2};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Polaire\polaire_cln.paa"};
	};
	class polaire_com_sp: B_Soldier_F
	{
		_generalMacro = "B_Soldier_F";
		scope = 1;
		displayName = "SP - Polaire Commandant";
		nakedUniform = "U_BasicBody";
		uniformClass = "polaire_com_sp";
		modelSides[] = {3,1,2};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Polaire\polaire_com.paa"};
	};
	class polaire_cpt_sp: B_Soldier_F
	{
		_generalMacro = "B_Soldier_F";
		scope = 1;
		displayName = "SP - Polaire Capitaine";
		nakedUniform = "U_BasicBody";
		uniformClass = "polaire_cpt_sp";
		modelSides[] = {3,1,2};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Polaire\polaire_cpt.paa"};
	};
	class polaire_lieutenant_sp: B_Soldier_F
	{
		_generalMacro = "B_Soldier_F";
		scope = 1;
		displayName = "SP - Polaire Lieutenant";
		nakedUniform = "U_BasicBody";
		uniformClass = "polaire_lieutenant_sp";
		modelSides[] = {3,1,2};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Polaire\polaire_lieutenant.paa"};
	};
	class polaire_adj_sp: B_Soldier_F
	{
		_generalMacro = "B_Soldier_F";
		scope = 1;
		displayName = "SP - Polaire Adjudant";
		nakedUniform = "U_BasicBody";
		uniformClass = "polaire_adj_sp";
		modelSides[] = {3,1,2};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Polaire\polaire_adj.paa"};
	};
	class polaire_sch_sp: B_Soldier_F
	{
		_generalMacro = "B_Soldier_F";
		scope = 1;
		displayName = "SP - Polaire Sergent Chef";
		nakedUniform = "U_BasicBody";
		uniformClass = "polaire_sch_sp";
		modelSides[] = {3,1,2};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Polaire\polaire_sch.paa"};
	};
	class polaire_sgt_sp: B_Soldier_F
	{
		_generalMacro = "B_Soldier_F";
		scope = 1;
		displayName = "SP - Polaire Sergent";
		nakedUniform = "U_BasicBody";
		uniformClass = "polaire_sgt_sp";
		modelSides[] = {3,1,2};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Polaire\polaire_sgt.paa"};
	};
	class polaire_cplc_sp: B_Soldier_F
	{
		_generalMacro = "B_Soldier_F";
		scope = 1;
		displayName = "SP - Polaire Caporal Chef";
		nakedUniform = "U_BasicBody";
		uniformClass = "polaire_cplc_sp";
		modelSides[] = {3,1,2};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Polaire\polaire_cplc.paa"};
	};
	class polaire_cpl_sp: B_Soldier_F
	{
		_generalMacro = "B_Soldier_F";
		scope = 1;
		displayName = "SP - Polaire Caporal";
		nakedUniform = "U_BasicBody";
		uniformClass = "polaire_cpl_sp";
		modelSides[] = {3,1,2};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Polaire\polaire_cpl.paa"};
	};
	class polaire_1er_sp: B_Soldier_F
	{
		_generalMacro = "B_Soldier_F";
		scope = 1;
		displayName = "SP - Polaire Premiere Classe";
		nakedUniform = "U_BasicBody";
		uniformClass = "polaire_1er_sp";
		modelSides[] = {3,1,2};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Polaire\polaire_1classe.paa"};
	};
	class polaire_2sd_sp: B_Soldier_F
	{
		_generalMacro = "B_Soldier_F";
		scope = 1;
		displayName = "SP - Polaire Seconde Classe";
		nakedUniform = "U_BasicBody";
		uniformClass = "polaire_2sd_sp";
		modelSides[] = {3,1,2};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Polaire\polaire_2classe.paa"};
	};
	class polo_colonel: B_RangeMaster_F
	{
		_generalMacro = "B_RangeMaster_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "polo_colonel";
		model = "\A3\Characters_F\Civil\c_poloshirtpants.p3d";
		modelSides[] = {3,2,1};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Polo\polo_colonel.paa"};
		displayName = "SP - Polo Colonel";
		
	};
	class polo_commandant: B_RangeMaster_F
	{
		_generalMacro = "B_RangeMaster_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "polo_commandant";
		model = "\A3\Characters_F\Civil\c_poloshirtpants.p3d";
		modelSides[] = {3,2,1};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Polo\polo_commandant.paa"};
		displayName = "SP - Polo Commandant";
		
	};
	class polo_capitaine: B_RangeMaster_F
	{
		_generalMacro = "B_RangeMaster_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "polo_capitaine";
		model = "\A3\Characters_F\Civil\c_poloshirtpants.p3d";
		modelSides[] = {3,2,1};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Polo\polo_capitaine.paa"};
		displayName = "SP - Polo Capitaine";
		
	};
	class polo_lieutenant: B_RangeMaster_F
	{
		_generalMacro = "B_RangeMaster_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "polo_lieutenant";
		model = "\A3\Characters_F\Civil\c_poloshirtpants.p3d";
		modelSides[] = {3,2,1};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Polo\polo_lieutenant.paa"};
		displayName = "SP - Polo Lieutenant";
		
	};
	class polo_adjudant: B_RangeMaster_F
	{
		_generalMacro = "B_RangeMaster_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "polo_adjudant";
		model = "\A3\Characters_F\Civil\c_poloshirtpants.p3d";
		modelSides[] = {3,2,1};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Polo\polo_adjudant.paa"};
		displayName = "SP - Polo Adjudant";
		
	};
	class polo_sergent_chef: B_RangeMaster_F
	{
		_generalMacro = "B_RangeMaster_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "polo_sergent_chef";
		model = "\A3\Characters_F\Civil\c_poloshirtpants.p3d";
		modelSides[] = {3,2,1};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Polo\polo_sergent_chef.paa"};
		displayName = "SP - Polo Sergent Chef";
		
	};
	class polo_sergent: B_RangeMaster_F
	{
		_generalMacro = "B_RangeMaster_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "polo_sergent";
		model = "\A3\Characters_F\Civil\c_poloshirtpants.p3d";
		modelSides[] = {3,2,1};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Polo\polo_sergent.paa"};
		displayName = "SP - Polo Sergent";
		
	};
	class polo_caporal_chef: B_RangeMaster_F
	{
		_generalMacro = "B_RangeMaster_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "polo_caporal_chef";
		model = "\A3\Characters_F\Civil\c_poloshirtpants.p3d";
		modelSides[] = {3,2,1};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Polo\polo_caporal_chef.paa"};
		displayName = "SP - Polo Caporal Chef";
		
	};
	class polo_caporal: B_RangeMaster_F
	{
		_generalMacro = "B_RangeMaster_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "polo_caporal";
		model = "\A3\Characters_F\Civil\c_poloshirtpants.p3d";
		modelSides[] = {3,2,1};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Polo\polo_caporal.paa"};
		displayName = "SP - Polo Caporal";
		
	};
	class polo_sapeur_1er_classe: B_RangeMaster_F
	{
		_generalMacro = "B_RangeMaster_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "polo_sapeur_1er_classe";
		model = "\A3\Characters_F\Civil\c_poloshirtpants.p3d";
		modelSides[] = {3,2,1};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Polo\polo_sapeur_1er_classe.paa"};
		displayName = "SP - Polo Premiere Classe";
		
	};
	class polo_sapeur_2nd_classe: B_RangeMaster_F
	{
		_generalMacro = "B_RangeMaster_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "polo_sapeur_2nd_classe";
		model = "\A3\Characters_F\Civil\c_poloshirtpants.p3d";
		modelSides[] = {3,2,1};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Polo\polo_sapeur_2nd_classe.paa"};
		displayName = "SP - Polo Seconde Classe";
		
	};
	class sp47: I_Soldier_base_F
	{
		scope = 1;
		model = "\A3\Characters_F_Bootcamp\Guerrilla\ig_guerrilla_6_1";
		displayName = "SP - Pull (Lieutenant)";
		uniformClass = "sp47";
		author = "sundae";
		modelSides[] = {3,2,1,0};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Pull\sp47.paa"};
	};
	class polaire_cyno: B_Soldier_F
	{
		_generalMacro = "B_Soldier_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "polaire_cyno";
		model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
		modelSides[] = {3,2,1};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Polaire\polaire_cyno.paa"};
		displayName = "SP - Polaire CYNO";
		
	};
	class t_shirt_cyno: B_Soldier_F
	{
		
		scope = 1;
		uniformClass = "t_shirt_cyno";
		model = "\A3\Characters_F\BLUFOR\b_soldier_02.p3d";
		modelSides[] = {3,2,1};
		hiddenSelections[] = {"Camo","camo2","insignia"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Autre\tenue_sport_bas.paa","\Tenues_Pompier\data\textures\T_Shirt\t_shirt_cyno.paa"};
	};
	class polaire_veto: B_Soldier_F
	{
		_generalMacro = "B_Soldier_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "polaire_veto";
		model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
		modelSides[] = {3,2,1};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Polaire\polaire_veto.paa"};
		displayName = "SP - Polaire Vétérinaire";
		
	};
	class sac_cyno: Bag_Base
	{
		scope = 2;
		
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		modelSides[] = {3,2,1};
		displayName = "SP - Sac CYNO";
		picture = "\Tenues_Pompier\data\icons\Specialites\CYNO\sac_cyno.paa";
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Specialites\CYNO\sac_cyno.paa"};
		maximumLoad = 240;
		mass = 15;
	};
	class tenu_pilote: O_officer_F
	{
		_generalMacro = "O_officer_F";
		scope = 1;
		displayName = "SP - Tenue Pilote 1";
		nakedUniform = "U_BasicBody";
		uniformClass = "tenu_pilote";
		modelSides[] = {3,1,2};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Specialites\DRAGON_ELISA\tenu_pilote.paa"};
	};
	class tenu_copilote: O_officer_F
	{
		_generalMacro = "O_officer_F";
		scope = 1;
		displayName = "SP - Tenue Co-Pilote 1";
		nakedUniform = "U_BasicBody";
		uniformClass = "tenu_copilote";
		modelSides[] = {3,1,2};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Specialites\DRAGON_ELISA\tenu_copilote.paa"};
	};
	class tenu_formateur_pilote: O_officer_F
	{
		_generalMacro = "O_officer_F";
		scope = 1;
		displayName = "SP - Formateur Pilote 1";
		nakedUniform = "U_BasicBody";
		uniformClass = "tenu_formateur_pilote";
		modelSides[] = {3,1,2};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Specialites\DRAGON_ELISA\tenu_formateur_pilote.paa"};
	};
	class tenue_pilote_sp: B_Soldier_04_f
	{
		_generalMacro = "B_Soldier_04_f";
		scope = 1;
		displayName = "SP - Tenue Pilote 2";
		nakedUniform = "U_BasicBody";
		uniformClass = "tenue_pilote_sp";
		modelSides[] = {3,1,2};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Specialites\DRAGON_ELISA\tenue_pilote_sp.paa"};
	};
	class tenue_co_pilote_sp: B_Soldier_04_f
	{
		_generalMacro = "B_Soldier_04_f";
		scope = 1;
		displayName = "SP - Tenue CO-Pilote 2";
		nakedUniform = "U_BasicBody";
		uniformClass = "tenue_co_pilote_sp";
		modelSides[] = {3,1,2};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Specialites\DRAGON_ELISA\tenue_co_pilote_sp.paa"};
	};
	class tenue_formateur_sp: B_Soldier_04_f
	{
		_generalMacro = "B_Soldier_04_f";
		scope = 1;
		displayName = "SP - Tenue Formateur 2";
		nakedUniform = "U_BasicBody";
		uniformClass = "tenue_formateur_sp";
		modelSides[] = {3,1,2};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Specialites\DRAGON_ELISA\tenue_formateur_sp.paa"};
	};
	class tenu_pilote_samu: O_officer_F
	{
		_generalMacro = "O_officer_F";
		scope = 1;
		displayName = "SAMU - Tenue Pilote 1";
		nakedUniform = "U_BasicBody";
		uniformClass = "tenu_pilote_samu";
		modelSides[] = {3,1,2};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Specialites\DRAGON_ELISA\tenu_pilote_samu.paa"};
	};
	class tenu_copilote_samu: O_officer_F
	{
		_generalMacro = "O_officer_F";
		scope = 1;
		displayName = "SAMU - Tenue Co-Pilote 1";
		nakedUniform = "U_BasicBody";
		uniformClass = "tenu_copilote_samu";
		modelSides[] = {3,1,2};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Specialites\DRAGON_ELISA\tenu_copilote_samu.paa"};
	};
	class tenu_formateur_pilote_samu: O_officer_F
	{
		_generalMacro = "O_officer_F";
		scope = 1;
		displayName = "SAMU - Formateur Pilote 1";
		nakedUniform = "U_BasicBody";
		uniformClass = "tenu_formateur_pilote_samu";
		modelSides[] = {3,1,2};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Specialites\DRAGON_ELISA\tenu_formateur_pilote_samu.paa"};
	};
	class tenue_pilote_samu: B_Soldier_04_f
	{
		_generalMacro = "B_Soldier_04_f";
		scope = 1;
		displayName = "SAMU - Tenue Pilote 2";
		nakedUniform = "U_BasicBody";
		uniformClass = "tenue_pilote_samu";
		modelSides[] = {3,1,2};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Specialites\DRAGON_ELISA\tenue_pilote_samu.paa"};
	};
	class tenue_co_pilote_samu: B_Soldier_04_f
	{
		_generalMacro = "B_Soldier_04_f";
		scope = 1;
		displayName = "SAMU - Tenue Co-Pilote 2";
		nakedUniform = "U_BasicBody";
		uniformClass = "tenue_co-pilote_samu";
		modelSides[] = {3,1,2};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Specialites\DRAGON_ELISA\tenue_co_pilote_samu.paa"};
	};
	class tenue_formateur_samu: B_Soldier_04_f
	{
		_generalMacro = "B_Soldier_04_f";
		scope = 1;
		displayName = "SAMU - Tenue Formateur 2";
		nakedUniform = "U_BasicBody";
		uniformClass = "tenue_pilote_sp";
		modelSides[] = {3,1,2};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Specialites\DRAGON_ELISA\tenue_formateur_samu.paa"};
	};
	class Polaire_GRIMP_Formateur: B_Soldier_F
	{
		_generalMacro = "B_Soldier_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "Polaire_GRIMP_Formateur";
		model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
		modelSides[] = {3,1,2};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Polaire\Polaire_GRIMP_Formateur.paa"};
		displayName = "SP - Polaire GRIMP Formateur";
		
	};
	class Polaire_GRIMP: B_Soldier_F
	{
		_generalMacro = "B_Soldier_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "Polaire_GRIMP";
		model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
		modelSides[] = {3,1,2};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Polaire\Polaire_GRIMP.paa"};
		displayName = "SP - Polaire GRIMP";
		
	};
	class t_shirt_grimp: B_Soldier_F
	{
		
		scope = 1;
		uniformClass = "t_shirt_grimp";
		model = "\A3\Characters_F\BLUFOR\b_soldier_02.p3d";
		modelSides[] = {3,2,1};
		hiddenSelections[] = {"Camo","camo2","insignia"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Autre\tenue_sport_bas.paa","\Tenues_Pompier\data\textures\T_Shirt\t_shirt_grimp.paa"};
	};
	class sac_grimp: Bag_Base
	{
		scope = 2;
		
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		modelSides[] = {3,2,1};
		displayName = "SP - Sac GRIMP";
		picture = "\Tenues_Pompier\data\icons\Specialites\GRIMP\sac_grimp.paa";
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Specialites\GRIMP\sac_grimp.paa"};
		maximumLoad = 420;
		mass = 15;
	};
	class tenu_feu: O_officer_F
	{
		_generalMacro = "O_officer_F";
		scope = 1;
		displayName = "SP - Tenue Feu Rouge";
		nakedUniform = "U_BasicBody";
		uniformClass = "tenu_feu";
		modelSides[] = {3,1,2};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Specialites\Incendie\tenue_feu.paa"};
	};
	class tenu_formateur_incendie: O_officer_F
	{
		_generalMacro = "O_officer_F";
		scope = 1;
		displayName = "SP - Formateur Incendie";
		nakedUniform = "U_BasicBody";
		uniformClass = "tenu_formateur_incendie";
		modelSides[] = {3,1,2};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Specialites\Incendie\tenue_formateur_incendie.paa"};
	};
	class Tenue_Formateur_Incendie: O_officer_F
	{
		_generalMacro = "O_officer_F";
		scope = 1;
		displayName = "SP - Formateur Incendie 2";
		nakedUniform = "U_BasicBody";
		uniformClass = "Tenue_Formateur_Incendie";
		modelSides[] = {3,1,2};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Specialites\Incendie\Tenue_Formateur_Incendie.paa"};
	};
	class sp180: O_officer_F
	{
		_generalMacro = "O_officer_F";
		scope = 1;
		displayName = "SP - Uniforme F1 (Lieutenant)";
		nakedUniform = "U_BasicBody";
		uniformClass = "sp180";
		author = "sundae";
		modelSides[] = {3,2,1,0};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Specialites\Incendie\sp180.paa"};
	};
	class stinder_plongeur_sp: I_diver_F
	{
		
		scope = 2;
		displayName = "SP - Tenue de plongeur";
		uniformClass = "stinder_plongeur_sp";
		picture = "\Tenues_Pompier\data\icons\Specialites\Nautique\stinder_plongeur_sp.paa";
		model = "\A3\characters_F\Common\diver_slotable";
		modelSides[] = {3,2,1,0};
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Specialites\Nautique\plongeur_sp.paa"};
	};
	class Tenue_Plongeur_SP: I_diver_F
	{
		
		scope = 2;
		displayName = "SP - Tenue de plongeur";
		uniformClass = "Tenue_Plongeur_SP";
		picture = "\Tenues_Pompier\data\icons\Specialites\Nautique\Tenue_Plongeur_SP.paa";
		model = "\A3\characters_F\Common\diver_slotable";
		modelSides[] = {3,2,1,0};
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Specialites\Nautique\Tenue_Plongeur_SP.paa"};
	};
	class Tenue_Plongeur_SP_2: I_diver_F
	{
		
		scope = 2;
		displayName = "SP - Tenue de plongeur 2";
		uniformClass = "Tenue_Plongeur_SP_2";
		picture = "\Tenues_Pompier\data\icons\Specialites\Nautique\Tenue_Plongeur_SP_2.paa";
		model = "\A3\characters_F\Common\diver_slotable";
		modelSides[] = {3,2,1,0};
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Specialites\Nautique\Tenue_Plongeur_SP_2.paa"};
	};
	class Coke_Tenues_SP_Polaire_Nautique: B_Soldier_F
	{
		_generalMacro = "B_Soldier_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "Coke_Tenues_SP_Polaire_Nautique";
		model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
		modelSides[] = {3,2,1};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Polaire\Coke_Tenues_SP_Polaire_Nautique.paa"};
		displayName = "SP - Polaire Nautique";
		
	};
	class polaire_nrbc: B_Soldier_F
	{
		_generalMacro = "B_Soldier_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "polaire_nrbc";
		model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
		modelSides[] = {3,2,1};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Polaire\polaire_nrbc.paa"};
		displayName = "SP - Polaire NRBC";
		
	};
	class polaire_ambu_samu: B_Soldier_F
	{
		_generalMacro = "B_Soldier_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "polaire_ambu_samu";
		model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
		modelSides[] = {3,2,1};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Polaire\polaire_ambu_samu.paa"};
		displayName = "SAMU - Polaire Ambulancier";
		
	};
	class polaire_infirmier: B_Soldier_F
	{
		_generalMacro = "B_Soldier_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "polaire_infirmier";
		model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
		modelSides[] = {3,2,1};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Polaire\polaire_infirmier.paa"};
		displayName = "SP - Polaire Infirmier";
		
	};
	class polaire_medecin: B_Soldier_F
	{
		_generalMacro = "B_Soldier_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "polaire_medecin";
		model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
		modelSides[] = {3,2,1};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Polaire\polaire_medecin.paa"};
		displayName = "SAMU - Polaire Medecin";
		
	};
	class polaire_medecinreg: B_Soldier_F
	{
		_generalMacro = "B_Soldier_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "polaire_medecinreg";
		model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
		modelSides[] = {3,2,1};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Polaire\polaire_medecinreg.paa"};
		displayName = "SAMU - Polaire Medecin Regulateur";
		
	};
	class polaire_motard: B_Soldier_F
	{
		_generalMacro = "B_Soldier_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "polaire_motard";
		model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
		modelSides[] = {3,2,1};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Polaire\polaire_motard.paa"};
		displayName = "SAMU - Polaire Motard";
		
	};
	class Polaire_Motard_SAMU: B_Soldier_F
	{
		_generalMacro = "B_Soldier_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "Polaire_Motard_SAMU";
		model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
		modelSides[] = {3,2,1};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Polaire\Polaire_Motard_SAMU.paa"};
		displayName = "SAMU - Polaire Motard 2";
		
	};
	class sac_samu: Bag_Base
	{
		scope = 2;
		
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		modelSides[] = {3,2,1};
		displayName = "SAMU - Sac Secours";
		picture = "\Tenues_Pompier\data\icons\Specialites\SAMU\sac_samu.paa";
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Specialites\SAMU\sac_samu.paa"};
		maximumLoad = 420;
		mass = 15;
	};
	class Tenue_SC_Incendie: O_officer_F
	{
		_generalMacro = "O_officer_F";
		scope = 1;
		displayName = "SC - Tenue Incendie";
		nakedUniform = "U_BasicBody";
		uniformClass = "Tenue_SC_Incendie";
		
		picture = "\Tenues_Pompier\data\icons\Specialites\SC\Tenue_SC_Incendie.paa";
		modelSides[] = {3,1,2};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Specialites\SC\Tenue_SC_Incendie.paa"};
	};
	class Polaire_SC: B_Soldier_F
	{
		_generalMacro = "B_Soldier_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "Polaire_SC";
		model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
		modelSides[] = {3,2,1};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Specialites\SC\Polaire_SC.paa"};
		displayName = "SC - Polaire";
		
	};
	class tenu_balisage: O_officer_F
	{
		_generalMacro = "O_officer_F";
		scope = 1;
		displayName = "SP - Tenue Balisage";
		nakedUniform = "U_BasicBody";
		uniformClass = "tenu_balisage";
		modelSides[] = {3,1,2};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Specialites\Secours_Routier\tenue_balisage.paa"};
	};
	class tenu_formateur_balisage: O_officer_F
	{
		_generalMacro = "O_officer_F";
		scope = 1;
		displayName = "SP - Formateur Balisage";
		nakedUniform = "U_BasicBody";
		uniformClass = "tenu_formateur_balisage";
		modelSides[] = {3,1,2};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Specialites\Secours_Routier\tenue_formateur_balisage.paa"};
	};
	class sp162: O_officer_F
	{
		_generalMacro = "O_officer_F";
		scope = 1;
		displayName = "SP - Uniforme de balisage (Lieutenant)";
		nakedUniform = "U_BasicBody";
		uniformClass = "sp162";
		author = "sundae";
		modelSides[] = {3,2,1,0};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Specialites\Secours_Routier\sp162.paa"};
	};
	class polaire_motard_SSSM: B_Soldier_F
	{
		_generalMacro = "B_Soldier_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "polaire_motard_SSSM";
		model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
		modelSides[] = {3,2,1};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Polaire\polaire_motard_sssm.paa"};
		displayName = "SSSM - Polaire Motard";
		author = "Pompiers";
	};
	class polaire_MSM: B_Soldier_F
	{
		_generalMacro = "B_Soldier_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "polaire_MSM";
		model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
		modelSides[] = {3,2,1};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Polaire\polaire_MSM.paa"};
		displayName = "SP - Polaire Motard MSM";
		
	};
	class polaire_sssm_ambulancier: B_Soldier_F
	{
		_generalMacro = "B_Soldier_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "polaire_sssm_ambulancier";
		model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
		modelSides[] = {3,2,1};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Specialites\SSSM\polaire_sssm_ambulancier.paa"};
		displayName = "SSSM - Polaire Ambulancier";
		
	};
	class polaire_sssm_auxmedical: B_Soldier_F
	{
		_generalMacro = "B_Soldier_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "polaire_sssm_auxmedical";
		model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
		modelSides[] = {3,2,1};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Specialites\SSSM\polaire_sssm_auxmedical.paa"};
		displayName = "SSSM - Polaire Ambulancier";
		
	};
	class polaire_sssm_infirmier: B_Soldier_F
	{
		_generalMacro = "B_Soldier_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "polaire_sssm_infirmier";
		model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
		modelSides[] = {3,2,1};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Specialites\SSSM\polaire_sssm_infirmier.paa"};
		displayName = "SSSM - Polaire Infirmier";
		
	};
	class polaire_sssm_medecin: B_Soldier_F
	{
		_generalMacro = "B_Soldier_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "polaire_sssm_medecin";
		model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
		modelSides[] = {3,2,1};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Specialites\SSSM\polaire_sssm_medecin.paa"};
		displayName = "SSSM - Polaire Medecin";
		
	};
	class polaire_sssm_pharmacien: B_Soldier_F
	{
		_generalMacro = "B_Soldier_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "polaire_sssm_pharmacien";
		model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
		modelSides[] = {3,2,1};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Specialites\SSSM\polaire_sssm_pharmacien.paa"};
		displayName = "SSSM - Polaire Pharmacien";
		
	};
	class polaire_sssm_psychologue: B_Soldier_F
	{
		_generalMacro = "B_Soldier_F";
		scope = 1;
		nakedUniform = "U_BasicBody";
		uniformClass = "polaire_sssm_psychologue";
		model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
		modelSides[] = {3,2,1};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Specialites\SSSM\polaire_sssm_psychologue.paa"};
		displayName = "SSSM - Polaire Psychologue";
		
	};
	class t_shirt_2sd: B_Soldier_F
	{
		
		scope = 1;
		uniformClass = "t_shirt_2sd";
		model = "\A3\Characters_F\BLUFOR\b_soldier_02.p3d";
		modelSides[] = {3,2,1};
		hiddenSelections[] = {"Camo","camo2","insignia"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Polaire\polaire_1classe.paa","\Tenues_Pompier\data\textures\T_Shirt\t_shirt_2classe.paa"};
	};
	class t_shirt_1er: B_Soldier_F
	{
		
		scope = 1;
		uniformClass = "t_shirt_1er";
		model = "\A3\Characters_F\BLUFOR\b_soldier_02.p3d";
		modelSides[] = {3,2,1};
		hiddenSelections[] = {"Camo","camo2","insignia"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Polaire\polaire_1classe.paa","\Tenues_Pompier\data\textures\T_Shirt\t_shirt_1classe.paa"};
	};
	class t_shirt_cpl: B_Soldier_F
	{
		
		scope = 1;
		uniformClass = "t_shirt_cpl";
		model = "\A3\Characters_F\BLUFOR\b_soldier_02.p3d";
		modelSides[] = {3,2,1};
		hiddenSelections[] = {"Camo","camo2","insignia"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Polaire\polaire_1classe.paa","\Tenues_Pompier\data\textures\T_Shirt\t_shirt_cpl.paa"};
	};
	class t_shirt_cplc: B_Soldier_F
	{
		
		scope = 1;
		uniformClass = "t_shirt_cplc";
		model = "\A3\Characters_F\BLUFOR\b_soldier_02.p3d";
		modelSides[] = {3,2,1};
		hiddenSelections[] = {"Camo","camo2","insignia"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Polaire\polaire_1classe.paa","\Tenues_Pompier\data\textures\T_Shirt\t_shirt_cplc.paa"};
	};
	class t_shirt_sgt: B_Soldier_F
	{
		
		scope = 1;
		uniformClass = "t_shirt_sgt";
		model = "\A3\Characters_F\BLUFOR\b_soldier_02.p3d";
		modelSides[] = {3,2,1};
		hiddenSelections[] = {"Camo","camo2","insignia"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Polaire\polaire_1classe.paa","\Tenues_Pompier\data\textures\T_Shirt\t_shirt_sgt.paa"};
	};
	class t_shirt_sch: B_Soldier_F
	{
		
		scope = 1;
		uniformClass = "t_shirt_sch";
		model = "\A3\Characters_F\BLUFOR\b_soldier_02.p3d";
		modelSides[] = {3,2,1};
		hiddenSelections[] = {"Camo","camo2","insignia"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Polaire\polaire_1classe.paa","\Tenues_Pompier\data\textures\T_Shirt\t_shirt_sch.paa"};
	};
	class t_shirt_adj: B_Soldier_F
	{
		
		scope = 1;
		uniformClass = "t_shirt_adj";
		model = "\A3\Characters_F\BLUFOR\b_soldier_02.p3d";
		modelSides[] = {3,2,1};
		hiddenSelections[] = {"Camo","camo2","insignia"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Polaire\polaire_1classe.paa","\Tenues_Pompier\data\textures\T_Shirt\t_shirt_adj.paa"};
	};
	class t_shirt_lieutenant: B_Soldier_F
	{
		
		scope = 1;
		uniformClass = "t_shirt_lieutenant";
		model = "\A3\Characters_F\BLUFOR\b_soldier_02.p3d";
		modelSides[] = {3,2,1};
		hiddenSelections[] = {"Camo","camo2","insignia"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Polaire\polaire_1classe.paa","\Tenues_Pompier\data\textures\T_Shirt\t_shirt_lieutenant.paa"};
	};
	class t_shirt_cpt: B_Soldier_F
	{
		
		scope = 1;
		uniformClass = "t_shirt_cpt";
		model = "\A3\Characters_F\BLUFOR\b_soldier_02.p3d";
		modelSides[] = {3,2,1};
		hiddenSelections[] = {"Camo","camo2","insignia"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Polaire\polaire_1classe.paa","\Tenues_Pompier\data\textures\T_Shirt\t_shirt_cpt.paa"};
	};
	class t_shirt_com: B_Soldier_F
	{
		
		scope = 1;
		uniformClass = "t_shirt_com";
		model = "\A3\Characters_F\BLUFOR\b_soldier_02.p3d";
		modelSides[] = {3,2,1};
		hiddenSelections[] = {"Camo","camo2","insignia"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Polaire\polaire_1classe.paa","\Tenues_Pompier\data\textures\T_Shirt\t_shirt_com.paa"};
	};
	class t_shirt_cln: B_Soldier_F
	{
		
		scope = 1;
		uniformClass = "t_shirt_cln";
		model = "\A3\Characters_F\BLUFOR\b_soldier_02.p3d";
		modelSides[] = {3,2,1};
		hiddenSelections[] = {"Camo","camo2","insignia"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Polaire\polaire_1classe.paa","\Tenues_Pompier\data\textures\T_Shirt\t_shirt_cln.paa"};
	};
	class vareuse_cln: O_officer_F
	{
		_generalMacro = "O_officer_F";
		scope = 1;
		displayName = "SP - Vareuse Colonel";
		nakedUniform = "U_BasicBody";
		uniformClass = "vareuse_cln";
		modelSides[] = {3,1,2};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Vareuse\vareuse_cln.paa"};
	};
	class vareuse_com: O_officer_F
	{
		_generalMacro = "O_officer_F";
		scope = 1;
		displayName = "SP - Vareuse Commandant";
		nakedUniform = "U_BasicBody";
		uniformClass = "vareuse_com";
		modelSides[] = {3,1,2};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Vareuse\vareuse_com.paa"};
	};
	class vareuse_cpt: O_officer_F
	{
		_generalMacro = "O_officer_F";
		scope = 1;
		displayName = "SP - Vareuse Capitaine";
		nakedUniform = "U_BasicBody";
		uniformClass = "vareuse_cpt";
		modelSides[] = {3,1,2};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Vareuse\vareuse_cpt.paa"};
	};
	class vareuse_adj: O_officer_F
	{
		_generalMacro = "O_officer_F";
		scope = 1;
		displayName = "SP - Vareuse Adjudant";
		nakedUniform = "U_BasicBody";
		uniformClass = "vareuse_adj";
		modelSides[] = {3,1,2};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Vareuse\vareuse_adj.paa"};
	};
	class vareuse_sch: O_officer_F
	{
		_generalMacro = "O_officer_F";
		scope = 1;
		displayName = "SP - Vareuse Sergent Chef";
		nakedUniform = "U_BasicBody";
		uniformClass = "vareuse_sch";
		modelSides[] = {3,1,2};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Vareuse\vareuse_sch.paa"};
	};
	class vareuse_sgt: O_officer_F
	{
		_generalMacro = "O_officer_F";
		scope = 1;
		displayName = "SP - Vareuse Sergent";
		nakedUniform = "U_BasicBody";
		uniformClass = "vareuse_sgt";
		modelSides[] = {3,1,2};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Vareuse\vareuse_sgt.paa"};
	};
	class vareuse_cplc: O_officer_F
	{
		_generalMacro = "O_officer_F";
		scope = 1;
		displayName = "SP - Vareuse Caporal Chef";
		nakedUniform = "U_BasicBody";
		uniformClass = "vareuse_cplc";
		modelSides[] = {3,1,2};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Vareuse\vareuse_cplc.paa"};
	};
	class vareuse_cpl: O_officer_F
	{
		_generalMacro = "O_officer_F";
		scope = 1;
		displayName = "SP - Vareuse Caporal";
		nakedUniform = "U_BasicBody";
		uniformClass = "vareuse_cpl";
		modelSides[] = {3,1,2};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Vareuse\vareuse_cpl.paa"};
	};
	class vareuse_1er: O_officer_F
	{
		_generalMacro = "O_officer_F";
		scope = 1;
		displayName = "SP - Vareuse Premiere Classe";
		nakedUniform = "U_BasicBody";
		uniformClass = "vareuse_1er";
		modelSides[] = {3,1,2};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Vareuse\vareuse_1classe.paa"};
	};
	class vareuse_2sd: O_officer_F
	{
		_generalMacro = "O_officer_F";
		scope = 1;
		displayName = "SP - Vareuse Seconde Classe";
		nakedUniform = "U_BasicBody";
		uniformClass = "vareuse_2sd";
		modelSides[] = {3,1,2};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Vareuse\vareuse_2classe.paa"};
	};
	class Tenue_ceremonie_colonel: C_Uniform_ParadeUniform_01_belt_base_F
	{
		
		_generalMacro = "Tenue_ceremonie_colonel";
		scope = 1;
		displayName = "SP Tenue Ceremonie Colonel";
		picture = "\Tenues_Pompier\data\icons\Vareuse\tenue_colonel.paa";
		uniformClass = "Tenue_ceremonie_colonel";
		modelSides[] = {3,1,2};
		hiddenSelections[] = {"camo1","camo2","camo3","ribbon","nametag"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Vareuse\tenue_colonel.paa","\Tenues_Pompier\data\textures\Vareuse\complement_tenue\epaule_jaune.paa","\Tenues_Pompier\data\textures\Vareuse\complement_tenue\ceinture_off.paa","\Tenues_Pompier\data\textures\Vareuse\complement_tenue\barettes_off_1.paa",""};
	};
	class Tenue_ceremonie_commandant: C_Uniform_ParadeUniform_01_belt_base_F
	{
		
		_generalMacro = "Tenue_ceremonie_commandant";
		scope = 1;
		displayName = "SP Tenue Ceremonie Commandant";
		picture = "\Tenues_Pompier\data\icons\Vareuse\tenue_commandant.paa";
		uniformClass = "Tenue_ceremonie_commandant";
		modelSides[] = {3,1,2};
		hiddenSelections[] = {"camo1","camo2","camo3","ribbon","nametag"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Vareuse\tenue_commandant.paa","\Tenues_Pompier\data\textures\Vareuse\complement_tenue\epaule_jaune.paa","\Tenues_Pompier\data\textures\Vareuse\complement_tenue\ceinture_off.paa","\Tenues_Pompier\data\textures\Vareuse\complement_tenue\barettes_off_2.paa",""};
	};
	class Tenue_ceremonie_capitaine: C_Uniform_ParadeUniform_01_belt_base_F
	{
		
		_generalMacro = "Tenue_ceremonie_capitaine";
		scope = 1;
		displayName = "SP Tenue Ceremonie Capitaine";
		picture = "\Tenues_Pompier\data\icons\Vareuse\tenue_capitaine.paa";
		uniformClass = "Tenue_ceremonie_capitaine";
		modelSides[] = {3,1,2};
		hiddenSelections[] = {"camo1","camo2","camo3","ribbon","nametag"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Vareuse\tenue_capitaine.paa","\Tenues_Pompier\data\textures\Vareuse\complement_tenue\epaule_jaune.paa","\Tenues_Pompier\data\textures\Vareuse\complement_tenue\ceinture_off.paa","\Tenues_Pompier\data\textures\Vareuse\complement_tenue\barettes_off_3.paa",""};
	};
	class Tenue_ceremonie_lieutenant: C_Uniform_ParadeUniform_01_belt_base_F
	{
		
		_generalMacro = "Tenue_ceremonie_lieutenant";
		scope = 1;
		displayName = "SP Tenue Ceremonie Lieutenant";
		picture = "\Tenues_Pompier\data\icons\Vareuse\tenue_lieutenant.paa";
		uniformClass = "Tenue_ceremonie_lieutenant";
		modelSides[] = {3,1,2};
		hiddenSelections[] = {"camo1","camo2","camo3","ribbon","nametag"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Vareuse\tenue_lieutenant.paa","\Tenues_Pompier\data\textures\Vareuse\complement_tenue\epaule_jaune.paa","\Tenues_Pompier\data\textures\Vareuse\complement_tenue\ceinture_off_white.paa",""};
	};
	class Tenue_ceremonie_adjudant: C_Uniform_ParadeUniform_01_base_F
	{
		
		_generalMacro = "Tenue_ceremonie_adjudant";
		scope = 1;
		displayName = "SP Tenue Ceremonie Adjudant";
		picture = "\Tenues_Pompier\data\icons\Vareuse\tenue_adjudant.paa";
		uniformClass = "Tenue_ceremonie_adjudant";
		modelSides[] = {3,1,2};
		hiddenSelections[] = {"camo1","camo2","camo3","ribbon","nametag"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Vareuse\tenue_adjudant.paa","\Tenues_Pompier\data\textures\Vareuse\complement_tenue\epaule_rouge.paa","","",""};
	};
	class Tenue_ceremonie_sergent_chef: C_Uniform_ParadeUniform_01_base_F
	{
		
		_generalMacro = "Tenue_ceremonie_sergent_chef";
		scope = 1;
		displayName = "SP Tenue Ceremonie Sergent Chef";
		picture = "\Tenues_Pompier\data\icons\Vareuse\tenue_sergent_chef.paa";
		uniformClass = "Tenue_ceremonie_sergent_chef";
		modelSides[] = {3,1,2};
		hiddenSelections[] = {"camo1","camo2","camo3","ribbon","nametag"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Vareuse\tenue_sergent_chef.paa","\Tenues_Pompier\data\textures\Vareuse\complement_tenue\epaule_rouge.paa","","",""};
	};
	class Tenue_ceremonie_sergent: C_Uniform_ParadeUniform_01_base_F
	{
		
		_generalMacro = "Tenue_ceremonie_sergent";
		scope = 1;
		displayName = "SP Tenue Ceremonie Sergent";
		picture = "\Tenues_Pompier\data\icons\Vareuse\tenue_sergent.paa";
		uniformClass = "Tenue_ceremonie_sergent";
		modelSides[] = {3,1,2};
		hiddenSelections[] = {"camo1","camo2","camo3","ribbon","nametag"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Vareuse\tenue_sergent.paa","\Tenues_Pompier\data\textures\Vareuse\complement_tenue\epaule_rouge.paa","","",""};
	};
	class Tenue_ceremonie_caporal_chef: C_Uniform_ParadeUniform_01_base_F
	{
		
		_generalMacro = "Tenue_ceremonie_caporal_chef";
		scope = 1;
		displayName = "SP Tenue Ceremonie Caporal Chef";
		picture = "\Tenues_Pompier\data\icons\Vareuse\tenue_caporal_chef.paa";
		uniformClass = "Tenue_ceremonie_caporal_chef";
		modelSides[] = {3,1,2};
		hiddenSelections[] = {"camo1","camo2","camo3","ribbon","nametag"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Vareuse\tenue_caporal_chef.paa","","","",""};
	};
	class Tenue_ceremonie_caporal: C_Uniform_ParadeUniform_01_base_F
	{
		
		_generalMacro = "Tenue_ceremonie_caporal";
		scope = 1;
		displayName = "SP Tenue Ceremonie Caporal";
		picture = "\Tenues_Pompier\data\icons\Vareuse\tenue_caporal.paa";
		uniformClass = "Tenue_ceremonie_caporal";
		modelSides[] = {3,1,2};
		hiddenSelections[] = {"camo1","camo2","camo3","ribbon","nametag"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Vareuse\tenue_caporal.paa","","","",""};
	};
	class Tenue_ceremonie_1er_classe: C_Uniform_ParadeUniform_01_base_F
	{
		
		_generalMacro = "Tenue_ceremonie_1er_classe";
		scope = 1;
		displayName = "SP Tenue Ceremonie 1er Classe";
		picture = "\Tenues_Pompier\data\icons\Vareuse\tenue_1er_classe.paa";
		uniformClass = "Tenue_ceremonie_1er_classe";
		modelSides[] = {3,1,2};
		hiddenSelections[] = {"camo1","camo2","camo3","ribbon","nametag"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Vareuse\tenue_1er_classe.paa","","","",""};
	};
	class Tenue_ceremonie_2nd_classe: C_Uniform_ParadeUniform_01_base_F
	{
		
		_generalMacro = "Tenue_ceremonie_2nd_classe";
		scope = 1;
		displayName = "SP Tenue Ceremonie 2nd Classe";
		picture = "\Tenues_Pompier\data\icons\Vareuse\tenue_2nd_classe.paa";
		uniformClass = "Tenue_ceremonie_2nd_classe";
		modelSides[] = {3,1,2};
		hiddenSelections[] = {"camo1","camo2","camo3","ribbon","nametag"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Vareuse\tenue_2nd_classe.paa","","","",""};
	};
};
class CfgWeapons
{
	class H_Beret_02;
	class H_Cap_blk_ION;
	class H_Watchcap_blk;
	class Uniform_Base;
	class UniformItem;
	class VestItem;
	class B_RangeMaster_F;
	class U_I_Wetsuit;
	class V_RebreatherB;
	class V_TacVest_blk;
	class Tenues_Kepi_Ceremonie_SP_Officier;
	class Tenues_Kepi_Ceremonie_SP_Sous_Officier;
	class Tenues_Kepi_Ceremonie_SP_HDR;
	class kepi;
	class H_PilotHelmetHeli_B;
	class tenu_sport: Uniform_Base
	{
		
		scope = 2;
		displayName = "SP - Tenue de Sport";
		picture = "\Tenues_Pompier\data\icons\Autre\tenu_sport.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Autre\tenue_sport_bas.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "tenu_sport";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class tenu_recruteur: Uniform_Base
	{
		
		scope = 2;
		displayName = "SP - Tenu Recruteur";
		picture = "\Tenues_Pompier\data\icons\Autre\tenu_recruteur.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Autre\tenue_recruteur_bas.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "tenu_recruteur";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class tenu_formateur: Uniform_Base
	{
		
		scope = 2;
		displayName = "SP - Tenu Formateur";
		picture = "\Tenues_Pompier\data\icons\Autre\tenu_formateur.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Autre\tenue_sport_bas.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "tenu_formateur";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class Tenue_Formation_SP: Uniform_Base
	{
		
		scope = 2;
		displayName = "SP - Tenu Formation";
		picture = "\Tenues_Pompier\data\icons\Autre\Tenue_Formation_SP.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Autre\tenue_sport_bas.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "Tenue_Formation_SP";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class Tenue_Instructeur_SP: Uniform_Base
	{
		
		scope = 2;
		displayName = "SP - Tenu Instructeur";
		picture = "\Tenues_Pompier\data\icons\Autre\Tenue_Instructeur_SP.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Autre\tenue_sport_bas.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "Tenue_Instructeur_SP";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class Bonnet_Pompiers: H_Watchcap_blk
	{
		_generalMacro = "H_Watchcap_blk";
		author = "$STR_A3_Bohemia_Interactive";
		model = "\A3\Characters_F\Civil\headgear_beaniehat01";
		displayName = "Bonnet Pompiers";
		picture = "\Tenues_Pompier\data\icons\Autre\Bonnet_Pompiers.paa";
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Autre\Bonnet_Pompiers.paa"};
	};
	class polaire_instructeur_moto: Uniform_Base
	{
		scope = 2;
		
		displayName = "SP - Polaire Motard Instructeur";
		picture = "\Tenues_Pompier\data\icons\Polaire\polaire_instructeur_moto.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Polaire\polaire_instructeur_moto.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "polaire_instructeur_moto";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class beret_colonel: H_Beret_02
	{
		_generalMacro = "H_Beret_02";
		
		displayName = "SP - Beret Colonel";
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Beret\beret_colonel.paa"};
		model = "\A3\Characters_F_EPB\BLUFOR\headgear_beret02";
		picture = "\Tenues_Pompier\data\icons\Beret\beret_colonel.paa";
	};
	class beret_commandant: H_Beret_02
	{
		_generalMacro = "H_Beret_02";
		
		displayName = "SP - Beret Commandant";
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Beret\beret_commandant.paa"};
		model = "\A3\Characters_F_EPB\BLUFOR\headgear_beret02";
		picture = "\Tenues_Pompier\data\icons\Beret\beret_commandant.paa";
	};
	class beret_capitaine: H_Beret_02
	{
		_generalMacro = "H_Beret_02";
		
		displayName = "SP - Beret Capitaine";
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Beret\beret_capitaine.paa"};
		model = "\A3\Characters_F_EPB\BLUFOR\headgear_beret02";
		picture = "\Tenues_Pompier\data\icons\Beret\beret_capitaine.paa";
	};
	class beret_lieutenant: H_Beret_02
	{
		_generalMacro = "H_Beret_02";
		
		displayName = "SP - Beret Lieutenant";
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Beret\beret_lieutenant.paa"};
		model = "\A3\Characters_F_EPB\BLUFOR\headgear_beret02";
		picture = "\Tenues_Pompier\data\icons\Beret\beret_lieutenant.paa";
	};
	class beret_adjudant: H_Beret_02
	{
		_generalMacro = "H_Beret_02";
		
		displayName = "SP - Beret Adjudant";
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Beret\beret_adjudant.paa"};
		model = "\A3\Characters_F_EPB\BLUFOR\headgear_beret02";
		picture = "\Tenues_Pompier\data\icons\Beret\beret_adjudant.paa";
	};
	class beret_sergent_chef: H_Beret_02
	{
		_generalMacro = "H_Beret_02";
		
		displayName = "SP - Beret Sergent Chef";
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Beret\beret_sergent_chef.paa"};
		model = "\A3\Characters_F_EPB\BLUFOR\headgear_beret02";
		picture = "\Tenues_Pompier\data\icons\Beret\beret_sergent_chef.paa";
	};
	class beret_sergent: H_Beret_02
	{
		_generalMacro = "H_Beret_02";
		
		displayName = "SP - Beret Sergent";
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Beret\beret_sergent.paa"};
		model = "\A3\Characters_F_EPB\BLUFOR\headgear_beret02";
		picture = "\Tenues_Pompier\data\icons\Beret\beret_sergent.paa";
	};
	class beret_caporal_chef: H_Beret_02
	{
		_generalMacro = "H_Beret_02";
		
		displayName = "SP - Beret Caporal Chef";
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Beret\beret_caporal_chef.paa"};
		model = "\A3\Characters_F_EPB\BLUFOR\headgear_beret02";
		picture = "\Tenues_Pompier\data\icons\Beret\beret_caporal_chef.paa";
	};
	class beret_caporal: H_Beret_02
	{
		_generalMacro = "H_Beret_02";
		
		displayName = "SP - Beret Caporal";
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Beret\beret_caporal.paa"};
		model = "\A3\Characters_F_EPB\BLUFOR\headgear_beret02";
		picture = "\Tenues_Pompier\data\icons\Beret\beret_caporal.paa";
	};
	class beret_1er_classe: H_Beret_02
	{
		_generalMacro = "H_Beret_02";
		
		displayName = "SP - Beret Premiere Classe";
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Beret\beret_1er_classe.paa"};
		model = "\A3\Characters_F_EPB\BLUFOR\headgear_beret02";
		picture = "\Tenues_Pompier\data\icons\Beret\beret_1er_classe.paa";
	};
	class beret_2nd_classe: H_Beret_02
	{
		_generalMacro = "H_Beret_02";
		
		displayName = "SP - Beret Seconde Classe";
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Beret\beret_2nd_classe.paa"};
		model = "\A3\Characters_F_EPB\BLUFOR\headgear_beret02";
		picture = "\Tenues_Pompier\data\icons\Beret\beret_2nd_classe.paa";
	};
	class casquette_sp: H_Cap_blk_ION
	{
		_generalMacro = "H_Cap_blk_ION";
		
		model = "\A3\Characters_F\common\capb";
		displayName = "SP - Casquette";
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Casquette\casquette_sp.paa"};
		picture = "\Tenues_Pompier\data\icons\Casquette\casquette_sp.paa";
	};
	class casquette_samu: H_Cap_blk_ION
	{
		_generalMacro = "H_Cap_blk_ION";
		
		model = "\A3\Characters_F\common\capb";
		displayName = "SAMU - Casquette";
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Casquette\casquette_samu.paa"};
		picture = "\Tenues_Pompier\data\icons\Casquette\casquette_samu.paa";
	};
	class casquette_grimp: H_Cap_blk_ION
	{
		_generalMacro = "H_Cap_blk_ION";
		
		model = "\A3\Characters_F\common\capb";
		displayName = "SP - Casquette GRIMP";
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Casquette\casquette_grimp.paa"};
		picture = "\Tenues_Pompier\data\icons\Casquette\casquette_grimp.paa";
	};
	class casquette_cyno: H_Cap_blk_ION
	{
		_generalMacro = "H_Cap_blk_ION";
		
		model = "\A3\Characters_F\common\capb";
		displayName = "SP - Casquette CYNO";
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Casquette\casquette _cyno.paa"};
		picture = "\Tenues_Pompier\data\icons\Casquette\casquette_cyno.paa";
	};
	class kepi_cln: Tenues_Kepi_Ceremonie_SP_Officier
	{
		_generalMacro = "Tenues_Kepi_Ceremonie_SP_Officier";
		
		model = "\A3\Characters_F\common\capb";
		scope = 2;
		displayName = "SP - Kepi Colonel";
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Kepi\kepi_cln.paa"};
	};
	class kepi_com: Tenues_Kepi_Ceremonie_SP_Officier
	{
		_generalMacro = "Tenues_Kepi_Ceremonie_SP_Officier";
		
		model = "\A3\Characters_F\common\capb";
		scope = 2;
		displayName = "SP - Kepi Commandant";
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Kepi\kepi_com.paa"};
	};
	class kepi_cpt: Tenues_Kepi_Ceremonie_SP_Officier
	{
		_generalMacro = "Tenues_Kepi_Ceremonie_SP_Officier";
		
		model = "\A3\Characters_F\common\capb";
		scope = 2;
		displayName = "SP - Kepi Capitaine";
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Kepi\kepi_cpt.paa"};
	};
	class kepi_adj: Tenues_Kepi_Ceremonie_SP_Sous_Officier
	{
		_generalMacro = "Tenues_Kepi_Ceremonie_SP_Sous_Officier";
		
		model = "\A3\Characters_F\common\capb";
		scope = 2;
		displayName = "SP - Kepi Adjudant";
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Kepi\kepi_adj.paa"};
	};
	class kepi_sch: Tenues_Kepi_Ceremonie_SP_Sous_Officier
	{
		_generalMacro = "Tenues_Kepi_Ceremonie_SP_Sous_Officier";
		
		model = "\A3\Characters_F\common\capb";
		scope = 2;
		displayName = "SP - Kepi Sergent Chef";
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Kepi\kepi_sch.paa"};
	};
	class kepi_sgt: Tenues_Kepi_Ceremonie_SP_Sous_Officier
	{
		_generalMacro = "Tenues_Kepi_Ceremonie_SP_Sous_Officier";
		
		model = "\A3\Characters_F\common\capb";
		scope = 2;
		displayName = "SP - Kepi Sergent";
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Kepi\kepi_sgt.paa"};
	};
	class kepi_cplc: Tenues_Kepi_Ceremonie_SP_HDR
	{
		_generalMacro = "Tenues_Kepi_Ceremonie_SP_HDR";
		
		model = "\A3\Characters_F\common\capb";
		scope = 2;
		displayName = "SP - Kepi Caporal Chef";
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Kepi\kepi_cplc.paa"};
	};
	class kepi_cpl: Tenues_Kepi_Ceremonie_SP_HDR
	{
		_generalMacro = "Tenues_Kepi_Ceremonie_SP_HDR";
		
		model = "\A3\Characters_F\common\capb";
		scope = 2;
		displayName = "SP - Kepi Caporal";
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Kepi\kepi_cpl.paa"};
	};
	class kepi_1er: Tenues_Kepi_Ceremonie_SP_HDR
	{
		_generalMacro = "Tenues_Kepi_Ceremonie_SP_HDR";
		
		model = "\A3\Characters_F\common\capb";
		scope = 2;
		displayName = "SP - Kepi Premiere Classe";
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Kepi\kepi_1classe.paa"};
	};
	class kepi_2sd: Tenues_Kepi_Ceremonie_SP_HDR
	{
		_generalMacro = "Tenues_Kepi_Ceremonie_SP_HDR";
		
		model = "\A3\Characters_F\common\capb";
		scope = 2;
		displayName = "SP - Kepi Seconde Classe";
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Kepi\kepi_2classe.paa"};
	};
	class kepi_sp_8: kepi
	{
		author = "sundae";
		displayName = "SP - Képi (Lieutenant)";
		picture = "\Tenues_Pompier\data\icons\Kepi\kepi_sp_8.paa";
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Kepi\kepi_sp_8.paa"};
	};
	class polaire_cln_sp: Uniform_Base
	{
		
		scope = 2;
		displayName = "SP - Polaire Colonel";
		picture = "\Tenues_Pompier\data\icons\Polaire\polaire_pompiers.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Polaire\polaire_cln.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "polaire_cln_sp";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class polaire_com_sp: Uniform_Base
	{
		
		scope = 2;
		displayName = "SP - Polaire Commandant";
		picture = "\Tenues_Pompier\data\icons\Polaire\polaire_pompiers.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Polaire\polaire_com.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "polaire_com_sp";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class polaire_cpt_sp: Uniform_Base
	{
		
		scope = 2;
		displayName = "SP - Polaire Capitaine";
		picture = "\Tenues_Pompier\data\icons\Polaire\polaire_pompiers.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Polaire\polaire_cpt.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "polaire_cpt_sp";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class polaire_lieutenant_sp: Uniform_Base
	{
		
		scope = 2;
		displayName = "SP - Polaire Lieutenant";
		picture = "\Tenues_Pompier\data\icons\Polaire\polaire_pompiers.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Polaire\polaire_lieutenant.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "polaire_lieutenant_sp";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class polaire_adj_sp: Uniform_Base
	{
		
		scope = 2;
		displayName = "SP - Polaire Adjudant";
		picture = "\Tenues_Pompier\data\icons\Polaire\polaire_pompiers.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Polaire\polaire_adj.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "polaire_adj_sp";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class polaire_sch_sp: Uniform_Base
	{
		
		scope = 2;
		displayName = "SP - Polaire Sergent Chef";
		picture = "\Tenues_Pompier\data\icons\Polaire\polaire_pompiers.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Polaire\polaire_sch.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "polaire_sch_sp";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class polaire_sgt_sp: Uniform_Base
	{
		
		scope = 2;
		displayName = "SP - Polaire Sergent";
		picture = "\Tenues_Pompier\data\icons\Polaire\polaire_pompiers.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Polaire\polaire_sgt.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "polaire_sgt_sp";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class polaire_cplc_sp: Uniform_Base
	{
		
		scope = 2;
		displayName = "SP - Polaire Caporal Chef";
		picture = "\Tenues_Pompier\data\icons\Polaire\polaire_pompiers.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Polaire\polaire_cplc.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "polaire_cplc_sp";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class polaire_cpl_sp: Uniform_Base
	{
		
		scope = 2;
		displayName = "SP - Polaire Caporal";
		picture = "\Tenues_Pompier\data\icons\Polaire\polaire_pompiers.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Polaire\polaire_cpl.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "polaire_cpl_sp";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class polaire_1er_sp: Uniform_Base
	{
		
		scope = 2;
		displayName = "SP - Polaire Premiere Classe";
		picture = "\Tenues_Pompier\data\icons\Polaire\polaire_pompiers.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Polaire\polaire_1classe.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "polaire_1er_sp";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class polaire_2sd_sp: Uniform_Base
	{
		
		scope = 2;
		displayName = "SP - Polaire Seconde Classe";
		picture = "\Tenues_Pompier\data\icons\Polaire\polaire_pompiers.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Polaire\polaire_2classe.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "polaire_2sd_sp";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class polo_colonel: Uniform_Base
	{
		scope = 2;
		displayName = "SP - Polo Colonel";
		picture = "\Tenues_Pompier\data\icons\Polo\polo_pompiers.paa";
		
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Polo\polo_colonel.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "polo_colonel";
			containerClass = "Supply20";
			mass = 10;
		};
	};
	class polo_commandant: Uniform_Base
	{
		scope = 2;
		displayName = "SP - Polo Commandant";
		picture = "\Tenues_Pompier\data\icons\Polo\polo_pompiers.paa";
		
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Polo\polo_commandant.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "polo_commandant";
			containerClass = "Supply20";
			mass = 10;
		};
	};
	class polo_capitaine: Uniform_Base
	{
		scope = 2;
		displayName = "SP - Polo Capitaine";
		picture = "\Tenues_Pompier\data\icons\Polo\polo_pompiers.paa";
		
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Polo\polo_capitaine.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "polo_capitaine";
			containerClass = "Supply20";
			mass = 10;
		};
	};
	class polo_lieutenant: Uniform_Base
	{
		scope = 2;
		displayName = "SP - Polo Lieutenant";
		picture = "\Tenues_Pompier\data\icons\Polo\polo_pompiers.paa";
		
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Polo\polo_lieutenant.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "polo_lieutenant";
			containerClass = "Supply20";
			mass = 10;
		};
	};
	class polo_adjudant: Uniform_Base
	{
		scope = 2;
		displayName = "SP - Polo Adjudant";
		picture = "\Tenues_Pompier\data\icons\Polo\polo_pompiers.paa";
		
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Polo\polo_adjudant.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "polo_adjudant";
			containerClass = "Supply20";
			mass = 10;
		};
	};
	class polo_sergent_chef: Uniform_Base
	{
		scope = 2;
		displayName = "SP - Polo Sergent Chef";
		picture = "\Tenues_Pompier\data\icons\Polo\polo_pompiers.paa";
		
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Polo\polo_sergent_chef.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "polo_sergent_chef";
			containerClass = "Supply20";
			mass = 10;
		};
	};
	class polo_sergent: Uniform_Base
	{
		scope = 2;
		displayName = "SP - Polo Sergent";
		picture = "\Tenues_Pompier\data\icons\Polo\polo_pompiers.paa";
		
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Polo\polo_sergent.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "polo_sergent";
			containerClass = "Supply20";
			mass = 10;
		};
	};
	class polo_caporal_chef: Uniform_Base
	{
		scope = 2;
		displayName = "SP - Polo Caporal Chef";
		picture = "\Tenues_Pompier\data\icons\Polo\polo_pompiers.paa";
		
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Polo\polo_caporal_chef.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "polo_caporal_chef";
			containerClass = "Supply20";
			mass = 10;
		};
	};
	class polo_caporal: Uniform_Base
	{
		scope = 2;
		displayName = "SP - Polo Caporal";
		picture = "\Tenues_Pompier\data\icons\Polo\polo_pompiers.paa";
		
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Polo\polo_caporal.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "polo_caporal";
			containerClass = "Supply20";
			mass = 10;
		};
	};
	class polo_sapeur_1er_classe: Uniform_Base
	{
		scope = 2;
		displayName = "SP - Polo Premiere Classe";
		picture = "\Tenues_Pompier\data\icons\Polo\polo_pompiers.paa";
		
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Polo\polo_sapeur_1er_classe.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "polo_sapeur_1er_classe";
			containerClass = "Supply20";
			mass = 10;
		};
	};
	class polo_sapeur_2nd_classe: Uniform_Base
	{
		scope = 2;
		displayName = "SP - Polo Seconde Classe";
		picture = "\Tenues_Pompier\data\icons\Polo\polo_pompiers.paa";
		
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Polo\polo_sapeur_2nd_classe.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "polo_sapeur_2nd_classe";
			containerClass = "Supply20";
			mass = 10;
		};
	};
	class sp_sweater_8: Uniform_Base
	{
		author = "sundae";
		scope = 2;
		displayName = "SP - Pull (Lieutenant)";
		picture = "\Tenues_Pompier\data\icons\Pull\sp_sweater_8.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Pull\sp47.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "sp47";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class polaire_cyno: Uniform_Base
	{
		
		scope = 2;
		displayName = "SP - Polaire CYNO";
		picture = "\Tenues_Pompier\data\icons\Polaire\polaire_cyno.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Polaire\polaire_cyno.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "polaire_cyno";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class t_shirt_cyno: Uniform_Base
	{
		
		scope = 2;
		displayName = "SP - T-Shirt CYNO";
		picture = "\Tenues_Pompier\data\icons\T_Shirt\t_shirt_cyno.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Autre\tenue_sport_bas.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "t_shirt_cyno";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class polaire_veto: Uniform_Base
	{
		
		scope = 2;
		displayName = "SP - Polaire Vétérinaire";
		picture = "\Tenues_Pompier\data\icons\Polaire\polaire_veto.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Polaire\polaire_veto.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "polaire_veto";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class casque_pilote_samu: H_PilotHelmetHeli_B
	{
		_generalMacro = "H_PilotHelmetHeli_B";
		
		displayName = "SAMU - Casque Pilote 1";
		picture = "\Tenues_Pompier\data\icons\Specialites\DRAGON_ELISA\casque_pilote_samu.paa";
		model = "\A3\Characters_F\common\helmet_heli.p3d";
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Specialites\DRAGON_ELISA\casque_pilote\casque_pilote_samu.paa"};
	};
	class casque_co_pilote_sp: H_PilotHelmetHeli_B
	{
		_generalMacro = "H_PilotHelmetHeli_B";
		
		displayName = "SP - Casque CO-Pilote 1";
		picture = "\Tenues_Pompier\data\icons\Specialites\DRAGON_ELISA\casque_co_pilote_sp.paa";
		model = "\A3\Characters_F\common\helmet_heli.p3d";
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Specialites\DRAGON_ELISA\casque_pilote\casque_co_pilote_sp.paa"};
	};
	class casque_pilote_sp: H_PilotHelmetHeli_B
	{
		_generalMacro = "H_PilotHelmetHeli_B";
		
		displayName = "SP - Casque Pilote 1";
		picture = "\Tenues_Pompier\data\icons\Specialites\DRAGON_ELISA\casque_pilote_sp.paa";
		model = "\A3\Characters_F\common\helmet_heli.p3d";
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Specialites\DRAGON_ELISA\casque_pilote\casque_pilote_sp.paa"};
	};
	class tenu_pilote: Uniform_Base
	{
		author = "2";
		scope = 2;
		displayName = "SP - Tenue Pilote 1";
		picture = "\Tenues_Pompier\data\icons\Specialites\DRAGON_ELISA\tenu_pilote.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Specialites\DRAGON_ELISA\tenu_pilote.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "tenu_pilote";
			containerClass = "Supply350";
			mass = 15;
		};
	};
	class tenu_copilote: Uniform_Base
	{
		author = "2";
		scope = 2;
		displayName = "SP - Tenue Co-Pilote 1";
		picture = "\Tenues_Pompier\data\icons\Specialites\DRAGON_ELISA\tenu_pilote.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Specialites\DRAGON_ELISA\tenu_copilote.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "tenu_copilote";
			containerClass = "Supply350";
			mass = 15;
		};
	};
	class tenu_formateur_pilote: Uniform_Base
	{
		
		scope = 2;
		displayName = "SP - Formateur Pilote 1";
		picture = "\Tenues_Pompier\data\icons\Specialites\DRAGON_ELISA\tenu_pilote.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Specialites\DRAGON_ELISA\tenu_formateur_pilote.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "tenu_formateur_pilote";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class tenue_pilote_sp: Uniform_Base
	{
		
		scope = 2;
		displayName = "SP - Tenue Pilote 2";
		picture = "\Tenues_Pompier\data\icons\Specialites\DRAGON_ELISA\tenue_pilote_sp.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Specialites\DRAGON_ELISA\tenue_pilote_sp.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "tenue_pilote_sp";
			containerClass = "Supply350";
			mass = 15;
		};
	};
	class tenue_co_pilote_sp: Uniform_Base
	{
		
		scope = 2;
		displayName = "SP - Tenue Co-Pilote 2";
		picture = "\Tenues_Pompier\data\icons\Specialites\DRAGON_ELISA\tenue_pilote_sp.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Specialites\DRAGON_ELISA\tenue_co_pilote_sp.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "tenue_co_pilote_sp";
			containerClass = "Supply350";
			mass = 15;
		};
	};
	class tenue_formateur_sp: Uniform_Base
	{
		
		scope = 2;
		displayName = "SP - Tenue Formateur 2";
		picture = "\Tenues_Pompier\data\icons\Specialites\DRAGON_ELISA\tenue_pilote_sp.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Specialites\DRAGON_ELISA\tenue_formateur_sp.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "tenue_formateur_sp";
			containerClass = "Supply350";
			mass = 15;
		};
	};
	class tenu_pilote_samu: Uniform_Base
	{
		author = "2";
		scope = 2;
		displayName = "SAMU - Tenue Pilote 1";
		picture = "\Tenues_Pompier\data\icons\Specialites\DRAGON_ELISA\tenu_pilote_samu.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Specialites\DRAGON_ELISA\tenu_pilote_samu.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "tenu_pilote_samu";
			containerClass = "Supply350";
			mass = 15;
		};
	};
	class tenu_copilote_samu: Uniform_Base
	{
		author = "2";
		scope = 2;
		displayName = "SAMU - Tenue Co-Pilote 1";
		picture = "\Tenues_Pompier\data\icons\Specialites\DRAGON_ELISA\tenu_pilote_samu.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Specialites\DRAGON_ELISA\tenu_copilote_samu.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "tenu_copilote_samu";
			containerClass = "Supply350";
			mass = 15;
		};
	};
	class tenu_formateur_pilote_samu: Uniform_Base
	{
		
		scope = 2;
		displayName = "SAMU - Formateur Pilote 1";
		picture = "\Tenues_Pompier\data\icons\Specialites\DRAGON_ELISA\tenu_pilote_samu.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Specialites\DRAGON_ELISA\tenu_formateur_pilote_samu.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "tenu_formateur_pilote_samu";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class tenue_pilote_samu: Uniform_Base
	{
		
		scope = 2;
		displayName = "SAMU - Tenue Pilote 2";
		picture = "\Tenues_Pompier\data\icons\Specialites\DRAGON_ELISA\tenue_pilote_samu.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Specialites\DRAGON_ELISA\tenue_pilote_samu.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "tenue_pilote_samu";
			containerClass = "Supply350";
			mass = 15;
		};
	};
	class tenue_co_pilote_samu: Uniform_Base
	{
		
		scope = 2;
		displayName = "SAMU - Tenue Co-Pilote 2";
		picture = "\Tenues_Pompier\data\icons\Specialites\DRAGON_ELISA\tenue_pilote_samu.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Specialites\DRAGON_ELISA\tenue_co_pilote_samu.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "tenue_co_pilote_samu";
			containerClass = "Supply350";
			mass = 15;
		};
	};
	class tenue_formateur_samu: Uniform_Base
	{
		
		scope = 2;
		displayName = "SAMU - Tenue Formateur 2";
		picture = "\Tenues_Pompier\data\icons\Specialites\DRAGON_ELISA\tenue_pilote_samu.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Specialites\DRAGON_ELISA\tenue_formateur_samu.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "tenue_formateur_samu";
			containerClass = "Supply350";
			mass = 15;
		};
	};
	class polaire_grimp: Uniform_Base
	{
		
		scope = 0;
		displayName = "SP - Polaire GRIMP";
		picture = "\Tenues_Pompier\data\icons\Polaire\polaire_grimp.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Polaire\polaire_grimp.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "polaire_grimp";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class Polaire_GRIMP_Formateur: Uniform_Base
	{
		
		scope = 2;
		displayName = "SP - Polaire GRIMP Formateur";
		picture = "\Tenues_Pompier\data\icons\Polaire\Polaire_GRIMP_Formateur.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Polaire\Polaire_GRIMP_Formateur.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "Polaire_GRIMP_Formateur";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class 1Polaire_GRIMP: Uniform_Base
	{
		
		scope = 2;
		displayName = "SP - Polaire GRIMP";
		picture = "\Tenues_Pompier\data\icons\Polaire\Polaire_GRIMP.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Polaire\Polaire_GRIMP.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "Polaire_GRIMP";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class t_shirt_grimp: Uniform_Base
	{
		
		scope = 2;
		displayName = "SP - T-Shirt GRIMP";
		picture = "\Tenues_Pompier\data\icons\T_Shirt\t_shirt_grimp.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Autre\tenue_sport_bas.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "t_shirt_grimp";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class tenu_feu: Uniform_Base
	{
		author = "2";
		scope = 2;
		displayName = "SP - Tenue Feu";
		picture = "\Tenues_Pompier\data\icons\Specialites\Incendie\tenu_feu.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Specialites\Incendie\tenue_feu.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "tenu_feu";
			containerClass = "Supply350";
			mass = 15;
		};
	};
	class tenu_formateur_incendie: Uniform_Base
	{
		
		scope = 2;
		displayName = "SP - Formateur Incendie";
		picture = "\Tenues_Pompier\data\icons\Specialites\Incendie\tenu_feu.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Specialites\Incendie\tenue_formateur_incendie.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "tenu_formateur_incendie";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class Tenue_Formateur_Incendie: Uniform_Base
	{
		
		scope = 2;
		displayName = "SP - Formateur Incendie 2";
		picture = "\Tenues_Pompier\data\icons\Specialites\Incendie\tenu_feu.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Specialites\Incendie\Tenue_Formateur_Incendie.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "Tenue_Formateur_Incendie";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class sp_uniform_f12_8: Uniform_Base
	{
		author = "sundae";
		scope = 2;
		displayName = "SP - Uniforme F1 (Lieutenant)";
		picture = "\Tenues_Pompier\data\icons\Specialites\Incendie\sp_uniform_f12_8.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Specialites\Incendie\sp180.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "sp180";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class stinder_plongeur_sp: Uniform_Base
	{
		
		scope = 1;
		displayName = "SP - Tenue de plongeur";
		picture = "\Tenues_Pompier\data\icons\Specialites\Nautique\stinder_plongeur_sp.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Specialites\Nautique\plongeur_sp.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "stinder_plongeur_sp";
			containerClass = "Supply20";
			uniformType = "Neopren";
			mass = 0;
		};
	};
	class Tenue_Plongeur_SP: Uniform_Base
	{
		
		scope = 1;
		displayName = "SP - Tenue de plongeur";
		picture = "\Tenues_Pompier\data\icons\Specialites\Nautique\Tenue_Plongeur_SP.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Specialites\Nautique\Tenue_Plongeur_SP.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "Tenue_Plongeur_SP";
			containerClass = "Supply20";
			uniformType = "Neopren";
			mass = 0;
		};
	};
	class Tenue_Plongeur_SP_2: Uniform_Base
	{
		
		scope = 1;
		displayName = "SP - Tenue de plongeur 2";
		picture = "\Tenues_Pompier\data\icons\Specialites\Nautique\Tenue_Plongeur_SP_2.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Specialites\Nautique\Tenue_Plongeur_SP_2.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "Tenue_Plongeur_SP_2";
			containerClass = "Supply20";
			uniformType = "Neopren";
			mass = 0;
		};
	};
	class Coke_Tenues_SP_Polaire_Nautique: Uniform_Base
	{
		
		scope = 2;
		displayName = "SP - Polaire Nautique";
		picture = "\Tenues_Pompier\data\icons\Polaire\Coke_Tenues_SP_Polaire_Nautique.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Polaire\Coke_Tenues_SP_Polaire_Nautique.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "Coke_Tenues_SP_Polaire_Nautique";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class tuic242_sp_recycleur: V_RebreatherB
	{
		author = "Tuic242 / Jeremy Barcy";
		displayName = "Recycleur Sapeur Pompier";
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Specialites\Nautique\tuic242_sp_recycleur.paa"};
		picture = "\Tenues_Pompier\data\icons\Specialites\Nautique\tuic242_sp_recycleur.paa";
		modelSides[] = {3,2,1,0};
	};
	class polaire_nrbc: Uniform_Base
	{
		
		scope = 2;
		displayName = "SP - Polaire NRBC";
		picture = "\Tenues_Pompier\data\icons\Polaire\polaire_nrbc.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Polaire\polaire_nrbc.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "polaire_nrbc";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class polaire_ambu_samu: Uniform_Base
	{
		
		scope = 2;
		displayName = "SAMU - Polaire Ambulancier";
		picture = "\Tenues_Pompier\data\icons\Polaire\polaire_ambu_samu.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Polaire\polaire_ambu_samu.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "polaire_ambu_samu";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class polaire_infirmier: Uniform_Base
	{
		
		scope = 2;
		displayName = "SAMU - Polaire Infirmier";
		picture = "\Tenues_Pompier\data\icons\Polaire\polaire_infirmier.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Polaire\polaire_infirmier.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "polaire_infirmier";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class polaire_medecin: Uniform_Base
	{
		
		scope = 2;
		displayName = "SAMU - Polaire Medecin";
		picture = "\Tenues_Pompier\data\icons\Polaire\polaire_medecin.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Polaire\polaire_medecin.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "polaire_medecin";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class polaire_medecinreg: Uniform_Base
	{
		
		scope = 2;
		displayName = "SAMU - Polaire Medecin Regulateur";
		picture = "\Tenues_Pompier\data\icons\Polaire\polaire_medecinreg.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Polaire\polaire_medecinreg.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "polaire_medecinreg";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class polaire_motard: Uniform_Base
	{
		
		scope = 2;
		displayName = "SAMU - Polaire Motard";
		picture = "\Tenues_Pompier\data\icons\Polaire\polaire_motard.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Polaire\polaire_motard.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "polaire_motard";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class Polaire_Motard_SAMU: Uniform_Base
	{
		
		scope = 2;
		displayName = "SAMU - Polaire Motard 2";
		picture = "\Tenues_Pompier\data\icons\Polaire\Polaire_Motard_SAMU.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Polaire\Polaire_Motard_SAMU.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "Polaire_Motard_SAMU";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class Tenue_SC_Incendie: Uniform_Base
	{
		
		scope = 1;
		displayName = "SC - Tenue Incendie";
		picture = "\Tenues_Pompier\data\icons\Specialites\SC\Tenue_SC_Incendie.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Specialites\SC\Tenue_SC_Incendie.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "Tenue_SC_Incendie";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class Polaire_SC: Uniform_Base
	{
		
		scope = 2;
		displayName = "SC - Polaire";
		picture = "\Tenues_Pompier\data\icons\Specialites\SC\Polaire_SC.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Specialites\SC\Polaire_SC.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "Polaire_SC";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class Gilet_Tactique_SC: V_TacVest_blk
	{
		scope = 2;
		displayName = "SC - Gilet pare-balle";
		picture = "\Tenues_Pompier\data\icons\Specialites\SC\Gilet_Tactique_SC.paa";
		
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Specialites\SC\Gilet_Tactique_SC.paa"};
	};
	class Gilet_Tactique_SC_Equipe_Medicale: V_TacVest_blk
	{
		scope = 2;
		displayName = "SC - Gilet pare-balle E.Medical";
		picture = "\Tenues_Pompier\data\icons\Specialites\SC\Gilet_Tactique_SC_Equipe_Medicale.paa";
		
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Specialites\SC\Gilet_Tactique_SC_Equipe_Medicale.paa"};
	};
	class tenu_balisage: Uniform_Base
	{
		
		scope = 2;
		displayName = "SP - Tenue Balisage";
		picture = "\Tenues_Pompier\data\icons\Specialites\Secours_Routier\tenu_balisage.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Specialites\Secours_Routier\tenue_balisage.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "tenu_balisage";
			containerClass = "Supply350";
			mass = 15;
		};
	};
	class tenu_formateur_balisage: Uniform_Base
	{
		
		scope = 2;
		displayName = "SP - Formateur Balisage";
		picture = "\Tenues_Pompier\data\icons\Specialites\Secours_Routier\tenu_balisage.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Specialites\Secours_Routier\tenue_formateur_balisage.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "tenu_formateur_balisage";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class sp_uniform_f1_8: Uniform_Base
	{
		author = "sundae";
		scope = 2;
		displayName = "SP - Uniforme de balisage (Lieutenant)";
		picture = "\Tenues_Pompier\data\icons\Specialites\Secours_Routier\sp_uniform_f1_8.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Specialites\Secours_Routier\sp162.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "sp162";
			containerClass = "Supply40";
			mass = 10;
		};
	};
	class polaire_sssm_ambulancier: Uniform_Base
	{
		
		scope = 2;
		displayName = "SSSM - Polaire Ambulancier";
		picture = "\Tenues_Pompier\data\icons\Specialites\SSSM\icone_polaire_sssm.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Specialites\SSSM\polaire_sssm_ambulancier.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "polaire_sssm_ambulancier";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class polaire_sssm_auxmedical: Uniform_Base
	{
		
		scope = 2;
		displayName = "SSSM - Polaire Aux.Medical";
		picture = "\Tenues_Pompier\data\icons\Specialites\SSSM\icone_polaire_sssm.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Specialites\SSSM\polaire_sssm_auxmedical.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "polaire_sssm_auxmedical";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class polaire_sssm_infirmier: Uniform_Base
	{
		
		scope = 2;
		displayName = "SSSM - Polaire Infirmier";
		picture = "\Tenues_Pompier\data\icons\Specialites\SSSM\icone_polaire_sssm.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Specialites\SSSM\polaire_sssm_infirmier.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "polaire_sssm_infirmier";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class polaire_sssm_medecin: Uniform_Base
	{
		
		scope = 2;
		displayName = "SSSM - Polaire Medecin";
		picture = "\Tenues_Pompier\data\icons\Specialites\SSSM\icone_polaire_sssm.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Specialites\SSSM\polaire_sssm_medecin.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "polaire_sssm_medecin";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class polaire_sssm_pharmacien: Uniform_Base
	{
		
		scope = 2;
		displayName = "SSSM - Polaire Pharmacien";
		picture = "\Tenues_Pompier\data\icons\Specialites\SSSM\icone_polaire_sssm.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Specialites\SSSM\polaire_sssm_pharmacien.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "polaire_sssm_pharmacien";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class polaire_sssm_psychologue: Uniform_Base
	{
		
		scope = 2;
		displayName = "SSSM - Polaire Psychologue";
		picture = "\Tenues_Pompier\data\icons\Specialites\SSSM\icone_polaire_sssm.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Specialites\SSSM\polaire_sssm_psychologue.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "polaire_sssm_psychologue";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class polaire_motard_SSSM: Uniform_Base
	{
		author = "Pompiers ";
		scope = 2;
		displayName = "SSSM - Polaire Motard";
		picture = "\Tenues_Pompier\data\icons\Specialites\SSSM\icone_polaire_sssm.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Polaire\polaire_motard_sssm.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "polaire_motard_SSSM";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class polaire_MSM: Uniform_Base
	{
		author = "Pompiers ";
		scope = 2;
		displayName = "SP - Polaire Motard MSM";
		picture = "\Tenues_Pompier\data\icons\Polaire\polaire_instructeur_moto.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Polaire\polaire_MSM.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "polaire_MSM";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class t_shirt_2sd: Uniform_Base
	{
		
		scope = 2;
		displayName = "SP - T-Shirt Seconde Classe";
		picture = "\Tenues_Pompier\data\icons\T_Shirt\t_shirt_pompiers.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		modelSides[] = {3,2,1};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Polaire\polaire_1classe.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "t_shirt_2sd";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class t_shirt_1er: Uniform_Base
	{
		
		scope = 2;
		displayName = "SP - T-Shirt Premiere Classe";
		picture = "\Tenues_Pompier\data\icons\T_Shirt\t_shirt_pompiers.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		modelSides[] = {3,2,1};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Polaire\polaire_1classe.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "t_shirt_1er";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class t_shirt_cpl: Uniform_Base
	{
		
		scope = 2;
		displayName = "SP - T-Shirt Caporal";
		picture = "\Tenues_Pompier\data\icons\T_Shirt\t_shirt_pompiers.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		modelSides[] = {3,2,1};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Polaire\polaire_1classe.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "t_shirt_cpl";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class t_shirt_cplc: Uniform_Base
	{
		
		scope = 2;
		displayName = "SP - T-Shirt Caporal Chef";
		picture = "\Tenues_Pompier\data\icons\T_Shirt\t_shirt_pompiers.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		modelSides[] = {3,2,1};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Polaire\polaire_1classe.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "t_shirt_cplc";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class t_shirt_sgt: Uniform_Base
	{
		
		scope = 2;
		displayName = "SP - T-Shirt Sergent";
		picture = "\Tenues_Pompier\data\icons\T_Shirt\t_shirt_pompiers.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		modelSides[] = {3,2,1};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Polaire\polaire_1classe.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "t_shirt_sgt";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class t_shirt_sch: Uniform_Base
	{
		
		scope = 2;
		displayName = "SP - T-Shirt Sergent Chef";
		picture = "\Tenues_Pompier\data\icons\T_Shirt\t_shirt_pompiers.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		modelSides[] = {3,2,1};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Polaire\polaire_1classe.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "t_shirt_sch";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class t_shirt_adj: Uniform_Base
	{
		
		scope = 2;
		displayName = "SP - T-Shirt Adjudant";
		picture = "\Tenues_Pompier\data\icons\T_Shirt\t_shirt_pompiers.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		modelSides[] = {3,2,1};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Polaire\polaire_1classe.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "t_shirt_adj";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class t_shirt_lieutenant: Uniform_Base
	{
		
		scope = 2;
		displayName = "SP - T-Shirt Lieutenant";
		picture = "\Tenues_Pompier\data\icons\T_Shirt\t_shirt_pompiers.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		modelSides[] = {3,2,1};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Polaire\polaire_1classe.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "t_shirt_lieutenant";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class t_shirt_cpt: Uniform_Base
	{
		
		scope = 2;
		displayName = "SP - T-Shirt Capitaine";
		picture = "\Tenues_Pompier\data\icons\T_Shirt\t_shirt_pompiers.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		modelSides[] = {3,2,1};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Polaire\polaire_1classe.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "t_shirt_cpt";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class t_shirt_com: Uniform_Base
	{
		
		scope = 2;
		displayName = "SP - T-Shirt Commandant";
		picture = "\Tenues_Pompier\data\icons\T_Shirt\t_shirt_pompiers.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		modelSides[] = {3,2,1};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Polaire\polaire_1classe.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "t_shirt_com";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class t_shirt_cln: Uniform_Base
	{
		
		scope = 2;
		displayName = "SP - T-Shirt Colonel";
		picture = "\Tenues_Pompier\data\icons\T_Shirt\t_shirt_pompiers.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		modelSides[] = {3,2,1};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Polaire\polaire_1classe.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "t_shirt_cln";
			containerClass = "Supply20";
			mass = 15;
		};
	};
	class vareuse_cln: Uniform_Base
	{
		author = "2";
		scope = 2;
		displayName = "SP - Vareuse Colonel";
		picture = "\Tenues_Pompier\data\icons\Vareuse\vareuse_cln.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Vareuse\vareuse_cln.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "vareuse_cln";
			containerClass = "Supply350";
			mass = 15;
		};
	};
	class vareuse_com: Uniform_Base
	{
		author = "2";
		scope = 2;
		displayName = "SP - Vareuse Commandant";
		picture = "\Tenues_Pompier\data\icons\Vareuse\vareuse_com.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Vareuse\vareuse_com.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "vareuse_com";
			containerClass = "Supply350";
			mass = 15;
		};
	};
	class vareuse_cpt: Uniform_Base
	{
		author = "2";
		scope = 2;
		displayName = "SP - Vareuse Capitaine";
		picture = "\Tenues_Pompier\data\icons\Vareuse\vareuse_cpt.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Vareuse\vareuse_cpt.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "vareuse_cpt";
			containerClass = "Supply350";
			mass = 15;
		};
	};
	class vareuse_adj: Uniform_Base
	{
		author = "2";
		scope = 2;
		displayName = "SP - Vareuse Adjudant";
		picture = "\Tenues_Pompier\data\icons\Vareuse\vareuse_soff.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Vareuse\vareuse_adj.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "vareuse_adj";
			containerClass = "Supply350";
			mass = 15;
		};
	};
	class vareuse_sch: Uniform_Base
	{
		author = "2";
		scope = 2;
		displayName = "SP - Vareuse Sergent Chef";
		picture = "\Tenues_Pompier\data\icons\Vareuse\vareuse_soff.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Vareuse\vareuse_sch.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "vareuse_sch";
			containerClass = "Supply350";
			mass = 15;
		};
	};
	class vareuse_sgt: Uniform_Base
	{
		author = "2";
		scope = 2;
		displayName = "SP - Vareuse Sergent";
		picture = "\Tenues_Pompier\data\icons\Vareuse\vareuse_soff.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Vareuse\vareuse_sgt.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "vareuse_sgt";
			containerClass = "Supply350";
			mass = 15;
		};
	};
	class vareuse_cplc: Uniform_Base
	{
		author = "2";
		scope = 2;
		displayName = "SP - Vareuse Caporal Chef";
		picture = "\Tenues_Pompier\data\icons\Vareuse\vareuse_hdr.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Vareuse\vareuse_cplc.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "vareuse_cplc";
			containerClass = "Supply350";
			mass = 15;
		};
	};
	class vareuse_cpl: Uniform_Base
	{
		author = "2";
		scope = 2;
		displayName = "SP - Vareuse Caporal";
		picture = "\Tenues_Pompier\data\icons\Vareuse\vareuse_hdr.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Vareuse\vareuse_cpl.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "vareuse_cpl";
			containerClass = "Supply350";
			mass = 15;
		};
	};
	class vareuse_1er: Uniform_Base
	{
		author = "2";
		scope = 2;
		displayName = "SP - Vareuse Premiere Classe";
		picture = "\Tenues_Pompier\data\icons\Vareuse\vareuse_hdr.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Vareuse\vareuse_1classe.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "vareuse_1er";
			containerClass = "Supply350";
			mass = 15;
		};
	};
	class vareuse_2sd: Uniform_Base
	{
		author = "2";
		scope = 2;
		displayName = "SP - Vareuse Seconde Classe";
		picture = "\Tenues_Pompier\data\icons\Vareuse\vareuse_hdr.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Vareuse\vareuse_2classe.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "vareuse_2sd";
			containerClass = "Supply350";
			mass = 15;
		};
	};
	class Tenue_ceremonie_colonel: Uniform_Base
	{
		
		scope = 2;
		displayName = "SP Tenue Ceremonie Colonel";
		picture = "\Tenues_Pompier\data\icons\Vareuse\tenue_colonel.paa";
		model = "\a3\Characters_F_AoW\Uniforms\Suitpacks\suitpack_FormalSuit_01_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Vareuse\tenue_colonel.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "Tenue_ceremonie_colonel";
			containerClass = "Supply350";
			mass = 15;
		};
	};
	class Tenue_ceremonie_commandant: Uniform_Base
	{
		
		scope = 2;
		displayName = "SP Tenue Ceremonie Commandant";
		picture = "\Tenues_Pompier\data\icons\Vareuse\tenue_commandant.paa";
		model = "\a3\Characters_F_AoW\Uniforms\Suitpacks\suitpack_FormalSuit_01_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Vareuse\tenue_commandant.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "Tenue_ceremonie_commandant";
			containerClass = "Supply350";
			mass = 15;
		};
	};
	class Tenue_ceremonie_capitaine: Uniform_Base
	{
		
		scope = 2;
		displayName = "SP Tenue Ceremonie Capitaine";
		picture = "\Tenues_Pompier\data\icons\Vareuse\tenue_capitaine.paa";
		model = "\a3\Characters_F_AoW\Uniforms\Suitpacks\suitpack_FormalSuit_01_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Vareuse\tenue_capitaine.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "Tenue_ceremonie_capitaine";
			containerClass = "Supply350";
			mass = 15;
		};
	};
	class Tenue_ceremonie_lieutenant: Uniform_Base
	{
		
		scope = 2;
		displayName = "SP Tenue Ceremonie Lieutenant";
		picture = "\Tenues_Pompier\data\icons\Vareuse\tenue_lieutenant.paa";
		model = "\a3\Characters_F_AoW\Uniforms\Suitpacks\suitpack_FormalSuit_01_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Vareuse\tenue_lieutenant.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "Tenue_ceremonie_lieutenant";
			containerClass = "Supply350";
			mass = 15;
		};
	};
	class Tenue_ceremonie_adjudant: Uniform_Base
	{
		
		scope = 2;
		displayName = "SP Tenue Ceremonie Adjudant";
		picture = "\Tenues_Pompier\data\icons\Vareuse\tenue_adjudant.paa";
		model = "\a3\Characters_F_AoW\Uniforms\Suitpacks\suitpack_FormalSuit_01_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Vareuse\tenue_adjudant.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "Tenue_ceremonie_adjudant";
			containerClass = "Supply350";
			mass = 15;
		};
	};
	class Tenue_ceremonie_sergent_chef: Uniform_Base
	{
		
		scope = 2;
		displayName = "SP Tenue Ceremonie Sergent Chef";
		picture = "\Tenues_Pompier\data\icons\Vareuse\tenue_sergent_chef.paa";
		model = "\a3\Characters_F_AoW\Uniforms\Suitpacks\suitpack_FormalSuit_01_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Vareuse\tenue_sergent_chef.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "Tenue_ceremonie_sergent_chef";
			containerClass = "Supply350";
			mass = 15;
		};
	};
	class Tenue_ceremonie_sergent: Uniform_Base
	{
		
		scope = 2;
		displayName = "SP Tenue Ceremonie Sergent ";
		picture = "\Tenues_Pompier\data\icons\Vareuse\tenue_sergent.paa";
		model = "\a3\Characters_F_AoW\Uniforms\Suitpacks\suitpack_FormalSuit_01_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Vareuse\tenue_sergent.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "Tenue_ceremonie_sergent";
			containerClass = "Supply350";
			mass = 15;
		};
	};
	class Tenue_ceremonie_caporal_chef: Uniform_Base
	{
		
		scope = 2;
		displayName = "SP Tenue Ceremonie Caporal Chef";
		picture = "\Tenues_Pompier\data\icons\Vareuse\tenue_caporal_chef.paa";
		model = "\a3\Characters_F_AoW\Uniforms\Suitpacks\suitpack_FormalSuit_01_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Vareuse\tenue_caporal_chef.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "Tenue_ceremonie_caporal_chef";
			containerClass = "Supply350";
			mass = 15;
		};
	};
	class Tenue_ceremonie_caporal: Uniform_Base
	{
		
		scope = 2;
		displayName = "SP Tenue Ceremonie Caporal ";
		picture = "\Tenues_Pompier\data\icons\Vareuse\tenue_caporal.paa";
		model = "\a3\Characters_F_AoW\Uniforms\Suitpacks\suitpack_FormalSuit_01_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Vareuse\tenue_caporal.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "Tenue_ceremonie_caporal";
			containerClass = "Supply350";
			mass = 15;
		};
	};
	class Tenue_ceremonie_1er_classe: Uniform_Base
	{
		
		scope = 2;
		displayName = "SP Tenue Ceremonie 1er Classe ";
		picture = "\Tenues_Pompier\data\icons\Vareuse\tenue_1er_classe.paa";
		model = "\a3\Characters_F_AoW\Uniforms\Suitpacks\suitpack_FormalSuit_01_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Vareuse\tenue_1er_classe.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "Tenue_ceremonie_1er_classe";
			containerClass = "Supply350";
			mass = 15;
		};
	};
	class Tenue_ceremonie_2nd_classe: Uniform_Base
	{
		
		scope = 2;
		displayName = "SP Tenue Ceremonie 2nd Classe ";
		picture = "\Tenues_Pompier\data\icons\Vareuse\tenue_2nd_classe.paa";
		model = "\a3\Characters_F_AoW\Uniforms\Suitpacks\suitpack_FormalSuit_01_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Tenues_Pompier\data\textures\Vareuse\tenue_2nd_classe.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "Tenue_ceremonie_2nd_classe";
			containerClass = "Supply350";
			mass = 15;
		};
	};
};
