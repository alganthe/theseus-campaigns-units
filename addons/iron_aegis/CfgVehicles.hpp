class CfgVehicles {

    // Backpacks
    class B_Messenger_Black_F;
    class TCU_I_D_Messenger_Black_medic: B_Messenger_Black_F {
        scope = 1;
         class TransportItems {
            item_xx(ACE_fieldDressing,30);
            item_xx(ACE_tourniquet,10);
            item_xx(ACE_packingBandage,10);
            item_xx(ACE_morphine,10);
            item_xx(ACE_salineIV_500,4);
            item_xx(ACE_surgicalKit,1);
        };
    };
    class B_Kitbag_rgr;
    class TCU_I_D_Kitbag_rgr_engineer: B_Kitbag_rgr {
        scope = 1;
         class TransportItems {
            item_xx(ToolKit,1);
            item_xx(ACE_wirecutter,1);
        };
    };
    class B_FieldPack_cbr;
    class TCU_I_D_B_FieldPack_cbr_ammoBearer: B_FieldPack_cbr {
        scope = 1;
        class TransportMagazines {
            mag_xx(30Rnd_545x39_Mag_Green_F,15);
            mag_xx(SmokeShell,5);
        };
    };
    class TCU_I_D_B_FieldPack_cbr_AT: B_FieldPack_cbr {
        scope = 1;
        class TransportMagazines {
            mag_xx(CUP_OG7_M,4);
        };
    };
    class TCU_I_D_B_FieldPack_cbr_medic: B_FieldPack_cbr {
        scope = 1;
         class TransportItems {
            item_xx(ACE_fieldDressing,30);
            item_xx(ACE_tourniquet,10);
            item_xx(ACE_packingBandage,10);
            item_xx(ACE_morphine,10);
            item_xx(ACE_salineIV_500,4);
            item_xx(ACE_surgicalKit,1);
        };
    };

    class SoldierGB;
    class TCU_I_D_Soldier_base: SoldierGB {
        author = ECSTRING(main,author);
        _generalMacro = "TCU_I_D_Soldier_base";
        displayName = "dolos base soldier";
        faction = "I_Dolos";
        editorSubcategory = "EdSubcat_Personnel_Enforcers";
        scope = 1;
        scopeCurator = 1;
        side = 2;
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        uniformClass = "U_IG_Guerilla1_1";
        backpack = "";
        linkedItems[] = {
            "H_HelmetB_black",
            "V_PlateCarrier2_blk",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles"
        };
        Items[] = {
            mag_5("ACE_fieldDressing"),
            "ACE_morphine",
            mag_4("ACE_tourniquet"),
            "ACE_EarPlugs"
        };
        weapons[] = {"CUP_arifle_AK105_railed", "Throw", "Put"};
        magazines[] = {
            mag_12("30Rnd_545x39_Mag_Green_F"),
            mag_2("SmokeShell"),
            mag_2("Chemlight_green")
        };
        identityTypes[] = {
            "LanguageGRE_F",
            "Head_Greek",
            "G_HAF_default"
        };
        genericNames = "GreekMen";
        role = "Rifleman";
    };
    class TCU_I_D_Soldier_rifleman: TCU_I_D_Soldier_base {
        _generalMacro = "TCU_I_D_Soldier_rifleman";
        displayName = "Soldier (Rifleman)";
        uniformClass = "U_BG_Guerilla2_1";
        scope = 2;
        scopeCurator = 2;
        weapons[] = {"CUP_arifle_AK105_railed", "Throw", "Put"};
        magazines[] = {
            mag_12("30Rnd_545x39_Mag_Green_F"),
            mag_2("SmokeShell"),
            mag_2("Chemlight_green")
        };
        headgearList[] = {
            "H_HelmetB_black",0.25,
            "tacs_Helmet_Ballistic_DarkBlack",0.25,
            "H_HelmetB_grass",0.25,
            "H_HelmetB_sand",0.25,
            "H_HelmetB_light_black",0.25,
            "",0.25
        };
    };
    class TCU_I_D_Soldier_smg: TCU_I_D_Soldier_rifleman {
        _generalMacro = "TCU_I_D_Soldier_smg";
        displayName = "Soldier (SMG)";
        uniformClass = "U_BG_Guerilla2_3";
        weapons[] = {"CUP_arifle_AKS74U_top_rail", "Throw", "Put"};
        magazines[] = {
            mag_12("30Rnd_545x39_Mag_Green_F"),
            mag_2("SmokeShell"),
            mag_2("Chemlight_green")
        };
    };
    class TCU_I_D_Soldier_marksman: TCU_I_D_Soldier_rifleman {
        _generalMacro = "TCU_I_D_Soldier_marksman";
        displayName = "Marksman";
        uniformClass = "U_MU_B_GuerillaGarment_brown";
        linkedItems[] = {
            "H_Booniehat_khk",
            "V_Chestrig_blk",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles"
        };
        weapons[] = {"srifle_EBR_DMS_F", "Throw", "Put"};
        magazines[] = {
            mag_8("20Rnd_762x51_Mag"),
            mag_2("SmokeShell"),
            mag_2("Chemlight_green")
        };
        headgearList[] = {
            "H_Booniehat_khk_hs",0.25,
            "H_Booniehat_oli",0.25,
            "H_Booniehat_tan",0.25,
            "H_Booniehat_dgtl",0.25,
            "",1
        };
        role = "Marksman";
    };
    class TCU_I_D_Soldier_engineer: TCU_I_D_Soldier_rifleman {
        _generalMacro = "TCU_I_D_Soldier_engineer";
        displayName = "Soldier (engineer)";
        uniformClass = "U_C_Mechanic_01_F";
        backpack = "TCU_I_D_Kitbag_rgr_engineer";
        engineer = true;
        canDeactivateMines = true;
        icon = "iconManEngineer";
        role = "Sapper";
    };
    class TCU_I_D_Soldier_medic: TCU_I_D_Soldier_smg {
        _generalMacro = "TCU_I_D_Soldier_medic";
        displayName = "Soldier (Medic)";
        uniformClass = "tacs_Uniform_Polo_CP_LS_TP_OB";
        backpack = "TCU_I_D_B_FieldPack_cbr_medic";
        linkedItems[] = {
            "H_HelmetB_light_black",
            "V_TacVest_oli",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles"
        };
        attendant = 1;
        icon = "iconManMedic";
        role = "CombatLifeSaver";
    };
    class TCU_I_D_Soldier_squadLeader: TCU_I_D_Soldier_rifleman {
        _generalMacro = "TCU_I_D_Soldier_squadLeader";
        displayName = "Soldier (Squad Leader)";
        uniformClass = "tacs_Uniform_Combat_RS_BS_DGP_BB";
        linkedItems[] = {
            "H_Beret_blk",
            "V_PlateCarrierIA2_dgtl",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles"
        };
        weapons[] = {"CUP_arifle_AK105_railed", "hgun_Pistol_heavy_02_F", "Throw", "Put"};
        magazines[] = {
            mag_12("30Rnd_545x39_Mag_Green_F"),
            mag_3("6Rnd_45ACP_Cylinder"),
            mag_2("SmokeShell"),
            mag_2("SmokeShellRed"),
            mag_2("Chemlight_green"),
            mag_2("Chemlight_red")
        };
        headgearList[] = {
            "H_Beret_blk",1
        };
        icon = "iconManLeader";
    };
    class TCU_I_D_Soldier_ammoBearer: TCU_I_D_Soldier_smg {
        _generalMacro = "TCU_I_D_Soldier_ammoBearer";
        displayName = "Soldier (Ammo Bearer)";
        uniformClass = "tacs_Uniform_Combat_RS_CDBS_GP_TB";
        backpack = "TCU_I_D_B_FieldPack_cbr_ammoBearer";
        linkedItems[] = {
            "H_HelmetB_black",
            "V_PlateCarrier2_blk",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles"
        };
        role = "Assistant";
    };
    class TCU_I_D_Soldier_AT: TCU_I_D_Soldier_rifleman {
        _generalMacro = "TCU_I_D_Soldier_AT";
        displayName = "Spldier (RPG)";
        uniformClass = "U_BG_Guerilla2_2";
        backpack = "TCU_I_D_B_FieldPack_cbr_AT";
        linkedItems[] = {
            "H_HelmetB_black",
            "V_PlateCarrier1_blk",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles"
        };
        weapons[] = {"CUP_arifle_AK105_railed","CUP_launch_RPG7V", "Throw", "Put"};
        magazines[] = {
            mag_12("30Rnd_545x39_Mag_Green_F"),
            mag_2("SmokeShell"),
            mag_2("Chemlight_green")
        };
        icon = "iconManAT";
        role = "MissileSpecialist";
    };
    class TCU_I_D_Soldier_LMG: TCU_I_D_Soldier_rifleman {
        _generalMacro = "TCU_I_D_Soldier_LMG";
        displayName = "Soldier (LMG)";
        uniformClass = "tacs_Uniform_Garment_RS_ES_BP_BB";
        weapons[] = {"CUP_arifle_RPK74M_top_rail", "Throw", "Put"};
        magazines[] = {
            mag_7("CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK74M_M"),
            mag_2("SmokeShell"),
            mag_2("Chemlight_green")
        };
        icon = "iconManMG";
        role = "MachineGunner";
    };

    class TCU_O_D_Soldier_rifleman: TCU_I_D_Soldier_smg {
        _generalMacro = "TCU_O_D_Soldier_rifleman";
        faction = "O_Dolos";
        side = 0;
    };
    class TCU_O_D_Soldier_smg: TCU_I_D_Soldier_rifleman {
        _generalMacro = "TCU_O_D_Soldier_smg";
        faction = "O_Dolos";
        side = 0;
    };
    class TCU_O_D_Soldier_marksman: TCU_I_D_Soldier_marksman {
        _generalMacro = "TCU_O_D_Soldier_marksman";
        faction = "O_Dolos";
        side = 0;
    };
    class TCU_O_D_Soldier_engineer: TCU_I_D_Soldier_engineer {
        _generalMacro = "TCU_O_D_Soldier_engineer";
        faction = "O_Dolos";
        side = 0;
    };
    class TCU_O_D_Soldier_medic: TCU_I_D_Soldier_medic {
        _generalMacro = "TCU_O_D_Soldier_medic";
        faction = "O_Dolos";
        side = 0;
    };
    class TCU_O_D_Soldier_squadLeader: TCU_I_D_Soldier_squadLeader {
        _generalMacro = "TCU_O_D_Soldier_squadLeader";
        faction = "O_Dolos";
        side = 0;
    };
    class TCU_O_D_Soldier_ammoBearer: TCU_I_D_Soldier_ammoBearer {
        _generalMacro = "TCU_O_D_Soldier_ammoBearer";
        faction = "O_Dolos";
        side = 0;
    };
    class TCU_O_D_Soldier_AT: TCU_I_D_Soldier_AT {
        _generalMacro = "TCU_O_D_Soldier_AT";
        faction = "O_Dolos";
        side = 0;
    };
    class TCU_O_D_Soldier_LMG: TCU_I_D_Soldier_LMG {
        _generalMacro = "TCU_O_D_Soldier_LMG";
        faction = "O_Dolos";
        side = 0;
    };

    class TCU_I_D_Bandit_base: SoldierGB {
        author = ECSTRING(main,author);
        _generalMacro = "TCU_I_D_Bandit_base";
        displayName = "dolos base bandit";
        faction = "I_Dolos";
        editorSubcategory = "EdSubcat_Personnel_Bandits";
        scope = 1;
        scopeCurator = 1;
        side = 2;
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        uniformClass = "U_C_Poloshirt_blue";
        backpack = "";
        linkedItems[] = {
            "H_Bandanna_gry",
            "V_TacVest_blk",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        Items[] = {
            mag_5("ACE_fieldDressing"),
            mag_2("ACE_tourniquet"),
            "ACE_EarPlugs"
        };
        weapons[] = {"SMG_02_F", "Throw", "Put"};
        magazines[] = {
            mag_11("30Rnd_9x21_Mag_SMG_02"),
            mag_2("SmokeShell"),
            mag_2("Chemlight_green")
        };
        identityTypes[] = {
            "LanguageGRE_F",
            "Head_Greek",
            "G_HAF_default"
        };
        genericNames = "GreekMen";
        role = "Rifleman";
    };
    class TCU_I_D_Bandit_smg_1: TCU_I_D_Bandit_base {
        _generalMacro = "TCU_I_D_Bandit_smg_1";
        displayName = "Bandit (SMG) 1";
        scope = 2;
        scopeCurator = 2;
        headgearList[] = {
            "",0.4,
            "H_Bandanna_gry",0.25,
            "H_Bandanna_blu",0.25,
            "H_Bandanna_cbr",0.25,
            "H_Bandanna_khk_hs",0.25,
            "H_Bandanna_khk",0.25,
            "H_Bandanna_sand",0.25,
            "H_Watchcap_blk",0.25,
            "H_Watchcap_cbr",0.25,
            "H_Watchcap_camo",0.25,
            "H_Watchcap_khk",0.25,
            "H_Booniehat_khk",0.25,
            "H_Booniehat_oli",0.25,
            "H_Booniehat_tan",0.25,
            "H_Cap_blk",0.25,
            "H_Cap_blu",0.25,
            "H_Cap_grn",0.25,
            "H_Cap_oli",0.25,
            "H_Cap_tan",0.25,
            "H_StrawHat_dark",0.05
        };
    };
    class TCU_I_D_Bandit_smg_2: TCU_I_D_Bandit_smg_1 {
        _generalMacro = "TCU_I_D_Bandit_smg_2";
        displayName = "Bandit (SMG) 2";
        uniformClass = "U_C_Poloshirt_stripped";
        linkedItems[] = {
            "H_Bandanna_gry",
            "V_TacVest_blk",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };
    class TCU_I_D_Bandit_smg_3: TCU_I_D_Bandit_smg_1 {
        _generalMacro = "TCU_I_D_Bandit_smg_3";
        displayName = "Bandit (SMG) 3";
        uniformClass = "U_BG_Guerilla1_1";
    };
    class TCU_I_D_Bandit_medic: TCU_I_D_Bandit_smg_1 {
        _generalMacro = "TCU_I_D_Bandit_medic";
        displayName = "Bandit (Medic)";
        uniformClass = "U_BG_Guerilla2_1";
        backpack = "TCU_I_D_Messenger_Black_medic";
        attendant = 1;
        icon = "iconManMedic";
        role = "CombatLifeSaver";
    };
    class TCU_I_D_Bandit_engineer: TCU_I_D_Bandit_smg_1 {
        _generalMacro = "TCU_I_D_Bandit_engineer";
        displayName = "Bandit (Engineer)";
        uniformClass = "U_BG_Guerilla2_1";
        backpack = "TCU_I_D_Kitbag_rgr_engineer";
        canDeactivateMines = true;
        engineer = true;
        icon = "iconManEngineer";
        role = "Sapper";
    };
    class TCU_I_D_Bandit_rifle: TCU_I_D_Bandit_smg_1 {
        _generalMacro = "TCU_I_D_Bandit_rifle";
        displayName = "Bandit (Rifle)";
        uniformClass = "U_BG_Guerilla3_1";
        linkedItems[] = {
            "H_Bandanna_gry",
            "V_TacChestrig_grn_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        weapons[] = {"CUP_arifle_AKS74U", "Throw", "Put"};
        magazines[] = {
            mag_12("30Rnd_545x39_Mag_Green_F"),
            mag_2("SmokeShell"),
            mag_2("Chemlight_green")
        };
    };
    class TCU_I_D_Bandit_squadleader: TCU_I_D_Bandit_rifle {
        _generalMacro = "TCU_I_D_Bandit_squadleader";
        displayName = "Bandit (Squad Leader)";
        uniformClass = "tacs_Uniform_Combat_RS_BS_DGP_BB";
        linkedItems[] = {
            "H_Beret_blk",
            "V_TacVest_camo",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        weapons[] = {"CUP_arifle_AKS74U", "hgun_Pistol_heavy_02_F", "Throw", "Put"};
        magazines[] = {
            mag_12("30Rnd_545x39_Mag_Green_F"),
            mag_3("6Rnd_45ACP_Cylinder"),
            mag_2("SmokeShell"),
            mag_2("SmokeShellRed"),
            mag_2("Chemlight_green"),
            mag_2("Chemlight_red")
        };
        headgearList[] = {
            "H_Beret_blk",1
        };
        icon = "iconManLeader";
    };

    class TCU_O_D_Bandit_smg_1: TCU_I_D_Bandit_smg_1 {
        _generalMacro = "TCU_O_D_Bandit_smg_1";
        faction = "O_Dolos";
        side = 0;
    };
    class TCU_O_D_Bandit_smg_2: TCU_I_D_Bandit_smg_2 {
        _generalMacro = "TCU_O_D_Bandit_smg_2";
        faction = "O_Dolos";
        side = 0;
    };
    class TCU_O_D_Bandit_smg_3: TCU_I_D_Bandit_smg_3 {
        _generalMacro = "TCU_O_D_Bandit_smg_3";
        faction = "O_Dolos";
        side = 0;
    };
    class TCU_O_D_Bandit_medic: TCU_I_D_Bandit_medic {
        _generalMacro = "TCU_O_D_Bandit_medic";
        faction = "O_Dolos";
        side = 0;
    };
    class TCU_O_D_Bandit_engineer: TCU_I_D_Bandit_engineer {
        _generalMacro = "TCU_O_D_Bandit_engineer";
        faction = "O_Dolos";
        side = 0;
    };
    class TCU_O_D_Bandit_rifle: TCU_I_D_Bandit_rifle {
        _generalMacro = "TCU_O_D_Bandit_rifle";
        faction = "O_Dolos";
        side = 0;
    };
    class TCU_O_D_Bandit_squadleader: TCU_I_D_Bandit_squadleader {
        _generalMacro = "TCU_O_D_Bandit_squadleader";
        faction = "O_Dolos";
        side = 0;
    };

    class I_G_Offroad_01_F;
    class TCU_I_D_bandit_offroad_01: I_G_Offroad_01_F {
        _generalMacro = "TCU_I_D_bandit_offroad_01";
        faction = "I_Dolos";
        side = 2;
        crew = "TCU_I_D_Bandit_smg_1";
    };
    class I_G_Offroad_01_armed_F;
    class TCU_I_D_bandit_offroad_01_armed: I_G_Offroad_01_armed_F {
        _generalMacro = "TCU_I_D_bandit_offroad_01_armed";
        faction = "I_Dolos";
        side = 2;
        crew = "TCU_I_D_Bandit_smg_2";
    };
    class I_C_Offroad_02_unarmed_F;
    class TCU_I_D_bandit_offroad_02_unarmed: I_C_Offroad_02_unarmed_F {
        _generalMacro = "TCU_I_D_bandit_offroad_02_unarmed";
        faction = "I_Dolos";
        side = 2;
        crew = "TCU_I_D_Bandit_smg_2";
    };
    class I_C_Offroad_02_LMG_F;
    class TCU_I_D_bandit_offroad_02_LMG: I_C_Offroad_02_LMG_F {
        _generalMacro = "TCU_I_D_bandit_offroad_02_LMG";
        faction = "I_Dolos";
        side = 2;
        crew = "TCU_I_D_Bandit_smg_1";
    };
    class I_G_Van_01_transport_F;
    class TCU_I_D_bandit_van_01_transport: I_G_Van_01_transport_F {
        _generalMacro = "TCU_I_D_bandit_van_01_transport";
        faction = "I_Dolos";
        side = 2;
        crew = "TCU_I_D_Bandit_smg_1";
    };
    class I_G_Van_02_transport_F;
    class TCU_I_D_bandit_van_02_transport: I_G_Van_02_transport_F {
        _generalMacro = "TCU_I_D_bandit_van_02_transport";
        faction = "I_Dolos";
        side = 2;
        crew = "TCU_I_D_Bandit_smg_3";
    };
    class I_G_Van_02_vehicle_F;
    class TCU_I_D_bandit_van_01_cargo: I_G_Van_02_vehicle_F {
        _generalMacro = "TCU_I_D_bandit_van_01_cargo";
        faction = "I_Dolos";
        side = 2;
        crew = "TCU_I_D_Bandit_smg_1";
    };

    class TCU_O_D_bandit_offroad_01: I_G_Offroad_01_F {
        _generalMacro="TCU_O_D_bandit_offroad_01";
        faction = "O_Dolos";
        side = 0;
        crew = "TCU_O_D_Bandit_smg_1";
    };
    class TCU_O_D_bandit_offroad_01_armed: I_G_Offroad_01_armed_F {
        _generalMacro = "TCU_O_D_bandit_offroad_01_armed";
        faction = "O_Dolos";
        side = 0;
        crew = "TCU_O_D_Bandit_smg_2";
    };
    class TCU_O_D_bandit_offroad_02_LMG: I_C_Offroad_02_LMG_F {
        _generalMacro = "TCU_O_D_bandit_offroad_02_LMG";
        faction = "O_Dolos";
        side = 0;
        crew = "TCU_O_D_Bandit_smg_1";
    };
    class TCU_O_D_bandit_offroad_02_unarmed: I_C_Offroad_02_unarmed_F {
        _generalMacro = "TCU_O_D_bandit_offroad_02_unarmed";
        faction = "O_Dolos";
        side = 0;
        crew = "TCU_O_D_Bandit_smg_2";
    };
    class TCU_O_D_bandit_van_01_transport: I_G_Van_01_transport_F {
        _generalMacro = "TCU_O_D_bandit_van_01_transport";
        faction = "O_Dolos";
        side = 0;
        crew = "TCU_O_D_Bandit_smg_1";
    };
    class TCU_O_D_bandit_van_02_transport: I_G_Van_02_transport_F {
        _generalMacro = "TCU_O_D_bandit_van_02_transport";
        faction = "O_Dolos";
        side = 0;
        crew = "TCU_O_D_Bandit_smg_3";
    };
    class TCU_O_D_bandit_van_01_cargo: I_G_Van_02_vehicle_F {
        _generalMacro = "TCU_O_D_bandit_van_01_cargo";
        faction = "O_Dolos";
        side = 0;
        crew = "TCU_O_D_Bandit_smg_1";
    };

    //Story
    class C_Man_casual_2_F_afro;
    class TCU_C_S_shark: C_Man_casual_2_F_afro {
        _generalMacro = "TCU_C_S_shark";
        displayName = "Amawal 'the shark' Ayub";
        faction = "CIV_F";
        editorSubcategory = "EdSubcat_Personnel_Story";
        uniformClass = "tacs_Uniform_Polo_TP_OS_TP_BB_NoLogo";
        backpack = "";
        linkedItems[] = {
            "H_Beret_blk",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        identityTypes[] = {
            "Male01ENGFRE",
            "tcu_shark"
        };
    };
};

class Extended_Init_Eventhandlers {
    class TCU_I_D_Soldier_base {
        class tcu_headgear_init {
            init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
        };
    };
    class TCU_I_D_Bandit_base: TCU_I_D_Soldier_base {

        class tcu_headgear_init;
    };
    class TCU_C_S_shark {
        class TCU_identity_init {
            init = "(_this select 0) setidentity 'tcu_shark';"; // Go complain to BIS not me
        };
    };
};
