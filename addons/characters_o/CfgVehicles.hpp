
class CfgVehicles {
    class B_Soldier_base_F;
    class O_BlackOrder_base_F : B_Soldier_base_F {
        _generalMacro = "O_BlackOrder_base_F";
        scope = 1;
        scopeCurator = 1;
        displayName = CSTRING(Rifleman_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\O_BlackOrder_Rifleman_F.jpg);

        genericNames = "EnglishMen";
        icon = "iconMan";
        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};

        side = 0;
        faction = "OPF_BlackOrder_F";

        model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
        modelSides[] = {3,2,1,0};

        hiddenSelections[] = {"Camo","insignia"};
        hiddenSelectionsTextures[] = {
            QPATHTOEF(gear,data\uniform\U_BlackOrder_Uniform_1_co.paa)
        };
        uniformClass = "U_BlackOrder_Uniform_1";
    };
    class O_BlackOrder_Rifleman_F : O_BlackOrder_base_F {
        _generalMacro = "O_BlackOrder_Rifleman_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Rifleman_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\O_BlackOrder_Rifleman_F.jpg);

        uniformClass = "U_BlackOrder_Uniform_1";

        weapons[] = {"srifle_DMR_03_blackorder_CCO_F","rhsusf_weap_glock17g4","Throw","Put"};
        respawnWeapons[] = {"srifle_DMR_03_blackorder_CCO_F","rhsusf_weap_glock17g4","Throw","Put"};
        magazines[] = {
            MULT_OBJ_3(HandGrenade),
            MULT_OBJ_1(SmokeShell),
            MULT_OBJ_1(Chemlight_red),
            MULT_OBJ_1(Chemlight_blue),
            MULT_OBJ_1(Chemlight_green),

            MULT_OBJ_8(20Rnd_762x51_Mag),
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        respawnMagazines[] = {
            MULT_OBJ_3(HandGrenade),
            MULT_OBJ_1(SmokeShell),
            MULT_OBJ_1(Chemlight_red),
            MULT_OBJ_1(Chemlight_blue),
            MULT_OBJ_1(Chemlight_green),

            MULT_OBJ_8(20Rnd_762x51_Mag),
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        items[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        linkedItems[] = {
            "rhs_googles_clear",
            "V_BlackOrder_PlateCarrier",
            "H_BlackOrder_CombatHelmet",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_14"
        };
        respawnLinkedItems[] = {
            "rhs_googles_clear",
            "V_BlackOrder_PlateCarrier",
            "H_BlackOrder_CombatHelmet",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_14"
        };
    };
    class O_BlackOrder_Rifleman_2_F : O_BlackOrder_Rifleman_F {
        _generalMacro = "O_BlackOrder_Rifleman_2_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Rifleman_2_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\O_BlackOrder_Rifleman_2_F.jpg);

        uniformClass = "U_BlackOrder_Uniform_1";

        weapons[] = {"srifle_DMR_03_blackorder_ACOG_F","rhsusf_weap_glock17g4","Throw","Put"};
        respawnWeapons[] = {"srifle_DMR_03_blackorder_ACOG_F","rhsusf_weap_glock17g4","Throw","Put"};
        magazines[] = {
            MULT_OBJ_3(HandGrenade),
            MULT_OBJ_1(SmokeShell),
            MULT_OBJ_1(SmokeShellGreen),
            MULT_OBJ_1(Chemlight_red),
            MULT_OBJ_1(Chemlight_blue),
            MULT_OBJ_1(Chemlight_green),

            MULT_OBJ_8(20Rnd_762x51_Mag),
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        respawnMagazines[] = {
            MULT_OBJ_3(HandGrenade),
            MULT_OBJ_1(SmokeShell),
            MULT_OBJ_1(SmokeShellGreen),
            MULT_OBJ_1(Chemlight_red),
            MULT_OBJ_1(Chemlight_blue),
            MULT_OBJ_1(Chemlight_green),

            MULT_OBJ_8(20Rnd_762x51_Mag),
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        items[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        linkedItems[] = {
            "rhs_googles_clear",
            "V_BlackOrder_PlateCarrier",
            "H_BlackOrder_CombatHelmet",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_14"
        };
        respawnLinkedItems[] = {
            "rhs_googles_clear",
            "V_BlackOrder_PlateCarrier",
            "H_BlackOrder_CombatHelmet",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_14"
        };
    };
    class O_BlackOrder_Rifleman_Light_F : O_BlackOrder_Rifleman_F {
        _generalMacro = "O_BlackOrder_Rifleman_Light_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Rifleman_Light_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\O_BlackOrder_Rifleman_Light_F.jpg);

        uniformClass = "U_BlackOrder_Uniform_1";

        weapons[] = {"srifle_DMR_03_blackorder_F","Throw","Put"};
        respawnWeapons[] = {"srifle_DMR_03_blackorder_F","Throw","Put"};
        magazines[] = {
            MULT_OBJ_8(20Rnd_762x51_Mag)
        };
        respawnMagazines[] = {
            MULT_OBJ_8(20Rnd_762x51_Mag)
        };
        items[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        linkedItems[] = {
            "V_BlackOrder_Chestrig",
            "H_BlackOrder_MilCap",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "V_BlackOrder_Chestrig",
            "H_BlackOrder_MilCap",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        glassesEnabled = 0;
    };
    class O_BlackOrder_Rifleman_Light_2_F : O_BlackOrder_Rifleman_F {
        _generalMacro = "O_BlackOrder_Rifleman_Light_2_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Rifleman_Light_2_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\O_BlackOrder_Rifleman_Light_2_F.jpg);

        uniformClass = "U_BlackOrder_Uniform_1";

        weapons[] = {"srifle_DMR_03_blackorder_F","Throw","Put"};
        respawnWeapons[] = {"srifle_DMR_03_blackorder_F","Throw","Put"};
        magazines[] = {
            MULT_OBJ_8(20Rnd_762x51_Mag)
        };
        respawnMagazines[] = {
            MULT_OBJ_8(20Rnd_762x51_Mag)
        };
        items[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        linkedItems[] = {
            "V_BlackOrder_Chestrig",
            "H_BlackOrder_Beret",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "V_BlackOrder_Chestrig",
            "H_BlackOrder_Beret",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        glassesEnabled = 0;
    };
    class O_BlackOrder_SquadLeader_F : O_BlackOrder_Rifleman_F {
        _generalMacro = "O_BlackOrder_SquadLeader_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(SquadLeader_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\O_BlackOrder_SquadLeader_F.jpg);

        uniformClass = "U_BlackOrder_Uniform_1";

        weapons[] = {"srifle_DMR_03_blackorder_ACOG_F","rhsusf_weap_glock17g4","Rangefinder","Throw","Put"};
        respawnWeapons[] = {"srifle_DMR_03_blackorder_ACOG_F","rhsusf_weap_glock17g4","Rangefinder","Throw","Put"};
        magazines[] = {
            MULT_OBJ_2(HandGrenade),
            MULT_OBJ_1(B_IR_Grenade),
            MULT_OBJ_1(SmokeShell),
            MULT_OBJ_1(SmokeShellGreen),
            MULT_OBJ_1(Chemlight_red),
            MULT_OBJ_1(Chemlight_blue),
            MULT_OBJ_1(Chemlight_green),

            MULT_OBJ_8(20Rnd_762x51_Mag),
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        respawnMagazines[] = {
            MULT_OBJ_2(HandGrenade),
            MULT_OBJ_1(B_IR_Grenade),
            MULT_OBJ_1(SmokeShell),
            MULT_OBJ_1(SmokeShellGreen),
            MULT_OBJ_1(Chemlight_red),
            MULT_OBJ_1(Chemlight_blue),
            MULT_OBJ_1(Chemlight_green),

            MULT_OBJ_8(20Rnd_762x51_Mag),
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        items[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        linkedItems[] = {
            "G_Tactical_Clear",
            "V_BlackOrder_PlateCarrier",
            "H_BlackOrder_CombatHelmet",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "ItemGPS",
            "rhsusf_ANPVS_14"
        };
        respawnLinkedItems[] = {
            "G_Tactical_Clear",
            "V_BlackOrder_PlateCarrier",
            "H_BlackOrder_CombatHelmet",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "ItemGPS",
            "rhsusf_ANPVS_14"
        };
    };
    class O_BlackOrder_TeamLeader_F : O_BlackOrder_Rifleman_F {
        _generalMacro = "O_BlackOrder_TeamLeader_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(TeamLeader_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\O_BlackOrder_TeamLeader_F.jpg);

        uniformClass = "U_BlackOrder_Uniform_1";

        weapons[] = {"srifle_DMR_03_blackorder_ACOG_F","rhsusf_weap_glock17g4","Binocular","Throw","Put"};
        respawnWeapons[] = {"srifle_DMR_03_blackorder_ACOG_F","rhsusf_weap_glock17g4","Binocular","Throw","Put"};
        magazines[] = {
            MULT_OBJ_2(HandGrenade),
            MULT_OBJ_1(SmokeShell),
            MULT_OBJ_1(SmokeShellGreen),
            MULT_OBJ_1(Chemlight_red),
            MULT_OBJ_1(Chemlight_blue),
            MULT_OBJ_1(Chemlight_green),

            MULT_OBJ_8(20Rnd_762x51_Mag),
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        respawnMagazines[] = {
            MULT_OBJ_2(HandGrenade),
            MULT_OBJ_1(SmokeShell),
            MULT_OBJ_1(SmokeShellGreen),
            MULT_OBJ_1(Chemlight_red),
            MULT_OBJ_1(Chemlight_blue),
            MULT_OBJ_1(Chemlight_green),

            MULT_OBJ_8(20Rnd_762x51_Mag),
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        items[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        linkedItems[] = {
            "rhs_googles_clear",
            "V_BlackOrder_PlateCarrier",
            "H_BlackOrder_CombatHelmet",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "ItemGPS",
            "rhsusf_ANPVS_14"
        };
        respawnLinkedItems[] = {
            "rhs_googles_clear",
            "V_BlackOrder_PlateCarrier",
            "H_BlackOrder_CombatHelmet",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "ItemGPS",
            "rhsusf_ANPVS_14"
        };
    };
    class O_BlackOrder_Rifleman_LAT_F : O_BlackOrder_Rifleman_F {
        _generalMacro = "O_BlackOrder_Rifleman_LAT_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Rifleman_LAT_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\O_BlackOrder_Rifleman_LAT_F.jpg);

        uniformClass = "U_BlackOrder_Uniform_1";

        weapons[] = {"srifle_DMR_03_blackorder_CCO_F","rhs_weap_M136","rhsusf_weap_glock17g4","Throw","Put"};
        respawnWeapons[] = {"srifle_DMR_03_blackorder_CCO_F","rhs_weap_M136","rhsusf_weap_glock17g4","Throw","Put"};
        magazines[] = {
            MULT_OBJ_3(HandGrenade),
            MULT_OBJ_1(SmokeShell),
            MULT_OBJ_1(SmokeShellGreen),
            MULT_OBJ_1(Chemlight_red),
            MULT_OBJ_1(Chemlight_blue),
            MULT_OBJ_1(Chemlight_green),

            MULT_OBJ_8(20Rnd_762x51_Mag),
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        respawnMagazines[] = {
            MULT_OBJ_3(HandGrenade),
            MULT_OBJ_1(SmokeShell),
            MULT_OBJ_1(SmokeShellGreen),
            MULT_OBJ_1(Chemlight_red),
            MULT_OBJ_1(Chemlight_blue),
            MULT_OBJ_1(Chemlight_green),

            MULT_OBJ_8(20Rnd_762x51_Mag),
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        items[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        linkedItems[] = {
            "rhs_googles_clear",
            "V_BlackOrder_PlateCarrier",
            "H_BlackOrder_CombatHelmet",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_14"
        };
        respawnLinkedItems[] = {
            "rhs_googles_clear",
            "V_BlackOrder_PlateCarrier",
            "H_BlackOrder_CombatHelmet",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_14"
        };
    };
    class O_BlackOrder_Autorifleman_F : O_BlackOrder_base_F {
        _generalMacro = "O_BlackOrder_Autorifleman_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Autorifleman_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\O_BlackOrder_Autorifleman_F.jpg);

        uniformClass = "U_BlackOrder_Uniform_1";

        weapons[] = {"rhs_weap_m249_pip_L_blackorder_M2A1","rhsusf_weap_glock17g4","Throw","Put"};
        respawnWeapons[] = {"rhs_weap_m249_pip_L_blackorder_M2A1","rhsusf_weap_glock17g4","Throw","Put"};
        magazines[] = {
            MULT_OBJ_2(HandGrenade),
            MULT_OBJ_1(SmokeShell),

            MULT_OBJ_4(rhs_200rnd_556x45_M_SAW),
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        respawnMagazines[] = {
            MULT_OBJ_2(HandGrenade),
            MULT_OBJ_1(SmokeShell),

            MULT_OBJ_4(rhs_200rnd_556x45_M_SAW),
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        items[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        linkedItems[] = {
            "rhs_googles_clear",
            "V_BlackOrder_PlateCarrier",
            "H_BlackOrder_CombatHelmet",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_14"
        };
        respawnLinkedItems[] = {
            "rhs_googles_clear",
            "V_BlackOrder_PlateCarrier",
            "H_BlackOrder_CombatHelmet",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_14"
        };
    };
    class O_BlackOrder_Marksmen_F : O_BlackOrder_Rifleman_F {
        _generalMacro = "O_BlackOrder_Marksmen_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Marksmen_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\O_BlackOrder_Marksmen_F.jpg);

        uniformClass = "U_BlackOrder_Uniform_1";

        weapons[] = {"rhs_weap_m40a5_blackorder_acog2","rhsusf_weap_glock17g4","Throw","Put"};
        respawnWeapons[] = {"rhs_weap_m40a5_blackorder_acog2","rhsusf_weap_glock17g4","Throw","Put"};
        magazines[] = {
            MULT_OBJ_3(HandGrenade),
            MULT_OBJ_2(SmokeShell),
            MULT_OBJ_1(SmokeShellGreen),
            MULT_OBJ_1(Chemlight_red),
            MULT_OBJ_1(Chemlight_blue),
            MULT_OBJ_1(Chemlight_green),

            MULT_OBJ_10(rhsusf_10Rnd_762x51_m118_special_Mag),
            MULT_OBJ_4(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        respawnMagazines[] = {
            MULT_OBJ_3(HandGrenade),
            MULT_OBJ_2(SmokeShell),
            MULT_OBJ_1(SmokeShellGreen),
            MULT_OBJ_1(Chemlight_red),
            MULT_OBJ_1(Chemlight_blue),
            MULT_OBJ_1(Chemlight_green),

            MULT_OBJ_10(rhsusf_10Rnd_762x51_m118_special_Mag),
            MULT_OBJ_4(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        items[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        linkedItems[] = {
            "rhs_googles_clear",
            "V_BlackOrder_PlateCarrier",
            "H_BlackOrder_CombatHelmet",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_14"
        };
        respawnLinkedItems[] = {
            "rhs_googles_clear",
            "V_BlackOrder_PlateCarrier",
            "H_BlackOrder_CombatHelmet",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_14"
        };
    };
    class O_BlackOrder_CombatLifeSaver_F : O_BlackOrder_base_F {
        _generalMacro = "O_BlackOrder_CombatLifeSaver_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(CombatLifeSaver_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\O_BlackOrder_CombatLifeSaver_F.jpg);

        model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
        modelSides[] = {3,2,1,0};

        hiddenSelections[] = {"Camo","insignia"};
        hiddenSelectionsTextures[] = {
            QPATHTOEF(gear,data\uniform\U_BlackOrder_Uniform_1_medic_co.paa)
        };

        uniformClass = "U_BlackOrder_Uniform_1_Medic";

        weapons[] = {"srifle_DMR_03_blackorder_CCO_F","rhsusf_weap_glock17g4","Throw","Put"};
        respawnWeapons[] = {"srifle_DMR_03_blackorder_CCO_F","rhsusf_weap_glock17g4","Throw","Put"};
        magazines[] = {
            MULT_OBJ_3(HandGrenade),
            MULT_OBJ_1(SmokeShell),
            MULT_OBJ_1(Chemlight_red),
            MULT_OBJ_1(Chemlight_blue),
            MULT_OBJ_1(Chemlight_green),

            MULT_OBJ_8(20Rnd_762x51_Mag),
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        respawnMagazines[] = {
            MULT_OBJ_3(HandGrenade),
            MULT_OBJ_1(SmokeShell),
            MULT_OBJ_1(Chemlight_red),
            MULT_OBJ_1(Chemlight_blue),
            MULT_OBJ_1(Chemlight_green),

            MULT_OBJ_8(20Rnd_762x51_Mag),
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        items[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit)
        };

        backpack = "B_ViperLightHarness_blk_BlackOrder_Medic_F";

        linkedItems[] = {
            "rhs_googles_clear",
            "V_BlackOrder_PlateCarrier_medic",
            "H_BlackOrder_CombatHelmet",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_14"
        };
        respawnLinkedItems[] = {
            "rhs_googles_clear",
            "V_BlackOrder_PlateCarrier_medic",
            "H_BlackOrder_CombatHelmet",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_14"
        };
    };

    class O_BlackOrder_Officer_F : O_BlackOrder_Rifleman_F {
        _generalMacro = "O_BlackOrder_Officer_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Officer_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\O_BlackOrder_Rifleman_Light_F.jpg);

        uniformClass = "U_BlackOrder_Uniform_1";

        weapons[] = {"srifle_DMR_03_blackorder_F","rhsusf_weap_glock17g4","Binocular","Throw","Put"};
        respawnWeapons[] = {"srifle_DMR_03_blackorder_F","rhsusf_weap_glock17g4","Binocular","Throw","Put"};
        magazines[] = {
            MULT_OBJ_4(20Rnd_762x51_Mag),
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        respawnMagazines[] = {
            MULT_OBJ_4(20Rnd_762x51_Mag),
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        items[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        linkedItems[] = {
            "V_LegStrapBag_black_F",
            "H_BlackOrder_Beret_Red",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "ItemGPS"
        };
        respawnLinkedItems[] = {
            "V_LegStrapBag_black_F",
            "H_BlackOrder_Beret_Red",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "ItemGPS"
        };
        glassesEnabled = 0;
    };
    class O_BlackOrder_Commissar_F : O_BlackOrder_Rifleman_F {
        _generalMacro = "O_BlackOrder_Commissar_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Commissar_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\O_BlackOrder_Rifleman_Light_F.jpg);

        uniformClass = "U_BlackOrder_Uniform_1";

        weapons[] = {"srifle_DMR_03_blackorder_ACOG_F","rhsusf_weap_glock17g4","Leupold_Mk4","Throw","Put"};
        respawnWeapons[] = {"srifle_DMR_03_blackorder_ACOG_F","rhsusf_weap_glock17g4","Leupold_Mk4","Throw","Put"};
        magazines[] = {
            MULT_OBJ_3(HandGrenade),
            MULT_OBJ_1(SmokeShell),

            MULT_OBJ_2(rhs_mag_mk3a2),

            MULT_OBJ_8(20Rnd_762x51_Mag),
            MULT_OBJ_3(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        respawnMagazines[] = {
            MULT_OBJ_3(HandGrenade),
            MULT_OBJ_1(SmokeShell),

            MULT_OBJ_2(rhs_mag_mk3a2),

            MULT_OBJ_8(20Rnd_762x51_Mag),
            MULT_OBJ_3(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        items[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit)
        };

        backpack = "B_LegStrapBag_black_F";

        linkedItems[] = {
            "V_BlackOrder_Chestrig",
            "H_BlackOrder_Beret_Red",
            "G_Bandanna_blk",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "ItemGPS"
        };
        respawnLinkedItems[] = {
            "V_BlackOrder_Chestrig",
            "H_BlackOrder_Beret_Red",
            "G_Bandanna_blk",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "ItemGPS"
        };
        glassesEnabled = 1;
    };

    class O_BlackOrder_Soldier_AA_F : O_BlackOrder_Rifleman_F {
        _generalMacro = "O_BlackOrder_Soldier_AA_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Soldier_AA_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\O_BlackOrder_Rifleman_LAT_F.jpg);

        uniformClass = "U_BlackOrder_Uniform_1";

        weapons[] = {"srifle_DMR_03_blackorder_CCO_F","rhs_weap_fim92","rhsusf_weap_glock17g4","Throw","Put"};
        respawnWeapons[] = {"srifle_DMR_03_blackorder_CCO_F","rhs_weap_fim92","rhsusf_weap_glock17g4","Throw","Put"};
        magazines[] = {
            MULT_OBJ_3(HandGrenade),
            MULT_OBJ_1(SmokeShell),
            MULT_OBJ_1(SmokeShellGreen),
            MULT_OBJ_1(Chemlight_red),
            MULT_OBJ_1(Chemlight_blue),
            MULT_OBJ_1(Chemlight_green),

            MULT_OBJ_8(20Rnd_762x51_Mag),
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        respawnMagazines[] = {
            MULT_OBJ_3(HandGrenade),
            MULT_OBJ_1(SmokeShell),
            MULT_OBJ_1(SmokeShellGreen),
            MULT_OBJ_1(Chemlight_red),
            MULT_OBJ_1(Chemlight_blue),
            MULT_OBJ_1(Chemlight_green),

            MULT_OBJ_8(20Rnd_762x51_Mag),
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        items[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit)
        };

        backpack = "B_ViperHarness_blk_BlackOrder_AA_F";

        linkedItems[] = {
            "rhs_googles_clear",
            "V_BlackOrder_PlateCarrier",
            "H_BlackOrder_CombatHelmet",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_14"
        };
        respawnLinkedItems[] = {
            "rhs_googles_clear",
            "V_BlackOrder_PlateCarrier",
            "H_BlackOrder_CombatHelmet",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_14"
        };
    };
    class O_BlackOrder_Soldier_AT_F : O_BlackOrder_Rifleman_F {
        _generalMacro = "O_BlackOrder_Soldier_AT_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Soldier_AT_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\O_BlackOrder_Rifleman_LAT_F.jpg);

        uniformClass = "U_BlackOrder_Uniform_1";

        weapons[] = {"srifle_DMR_03_blackorder_CCO_F","rhs_weap_fgm148","rhsusf_weap_glock17g4","Throw","Put"};
        respawnWeapons[] = {"srifle_DMR_03_blackorder_CCO_F","rhs_weap_fgm148","rhsusf_weap_glock17g4","Throw","Put"};
        magazines[] = {
            MULT_OBJ_3(HandGrenade),
            MULT_OBJ_1(SmokeShell),
            MULT_OBJ_1(SmokeShellGreen),
            MULT_OBJ_1(Chemlight_red),
            MULT_OBJ_1(Chemlight_blue),
            MULT_OBJ_1(Chemlight_green),

            MULT_OBJ_8(20Rnd_762x51_Mag),
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        respawnMagazines[] = {
            MULT_OBJ_3(HandGrenade),
            MULT_OBJ_1(SmokeShell),
            MULT_OBJ_1(SmokeShellGreen),
            MULT_OBJ_1(Chemlight_red),
            MULT_OBJ_1(Chemlight_blue),
            MULT_OBJ_1(Chemlight_green),

            MULT_OBJ_8(20Rnd_762x51_Mag),
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        items[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit)
        };

        backpack = "B_ViperHarness_blk_BlackOrder_AT_F";

        linkedItems[] = {
            "rhs_googles_clear",
            "V_BlackOrder_PlateCarrier",
            "H_BlackOrder_CombatHelmet",
            "B_ViperHarness_blk_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_14"
        };
        respawnLinkedItems[] = {
            "rhs_googles_clear",
            "V_BlackOrder_PlateCarrier",
            "H_BlackOrder_CombatHelmet",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_14"
        };
    };

    class O_BlackOrder_Pilot_F : O_BlackOrder_base_F {
        _generalMacro = "O_BlackOrder_Pilot_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Pilot_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\O_BlackOrder_Pilot_F.jpg);

        uniformClass = "U_BlackOrder_Uniform_1";

        weapons[] = {"rhsusf_weap_glock17g4","Throw","Put"};
        respawnWeapons[] = {"rhsusf_weap_glock17g4","Throw","Put"};
        magazines[] = {
            MULT_OBJ_4(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        respawnMagazines[] = {
            MULT_OBJ_4(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        items[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        linkedItems[] = {
            "H_HeadSet_black_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "H_HeadSet_black_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        glassesEnabled = 1;
    };
    class O_BlackOrder_FighterPilot_F : O_BlackOrder_base_F {
        _generalMacro = "O_BlackOrder_FighterPilot_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(FighterPilot_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\O_BlackOrder_FighterPilot_F.jpg);

        model = "\A3\characters_F\Common\pilot_f.p3d";
        modelSides[] = {3,2,1,0};

        hiddenSelections[] = {"Camo","insignia"};
        hiddenSelectionsTextures[] = {
            QPATHTOEF(gear,data\uniform\U_BlackOrder_PilotCoveralls_co.paa)
        };

        uniformClass = "U_BlackOrder_PilotCoveralls";

        weapons[] = {"rhsusf_weap_glock17g4","Throw","Put"};
        respawnWeapons[] = {"rhsusf_weap_glock17g4","Throw","Put"};
        magazines[] = {
            MULT_OBJ_4(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        respawnMagazines[] = {
            MULT_OBJ_4(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        items[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        linkedItems[] = {
            "H_BlackOrder_PilotHelmet",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "H_BlackOrder_PilotHelmet",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        glassesEnabled = 0;
    };
    class O_BlackOrder_HeliPilot_F : O_BlackOrder_base_F {
        _generalMacro = "O_BlackOrder_HeliPilot_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(HeliPilot_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\O_BlackOrder_HeliPilot_F.jpg);

        model = "\A3\Characters_F\Common\coveralls.p3d";
        modelSides[] = {3,2,1,0};

        hiddenSelections[] = {"Camo","insignia"};
        hiddenSelectionsTextures[] = {
            QPATHTOEF(gear,data\uniform\U_BlackOrder_HeliPilotCoveralls_co.paa)
        };

        uniformClass = "U_BlackOrder_HeliPilotCoveralls";

        weapons[] = {"rhsusf_weap_glock17g4","Throw","Put"};
        respawnWeapons[] = {"rhsusf_weap_glock17g4","Throw","Put"};
        magazines[] = {
            MULT_OBJ_4(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        respawnMagazines[] = {
            MULT_OBJ_4(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        items[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        linkedItems[] = {
            "rhsusf_hgu56p_black",
            "V_BlackOrder_TacVest_1",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_15"
        };
        respawnLinkedItems[] = {
            "rhsusf_hgu56p_black",
            "V_BlackOrder_TacVest_1",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_15"
        };
        glassesEnabled = 1;
    };
    class O_BlackOrder_HeliCrew_F : O_BlackOrder_HeliPilot_F {
        _generalMacro = "O_BlackOrder_HeliCrew_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(HeliCrew_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\O_BlackOrder_HeliCrew_F.jpg);

        weapons[] = {"rhs_weap_m249_pip_L_blackorder_M2A1","rhsusf_weap_glock17g4","Throw","Put"};
        respawnWeapons[] = {"rhs_weap_m249_pip_L_blackorder_M2A1","rhsusf_weap_glock17g4","Throw","Put"};
        magazines[] = {
            MULT_OBJ_4(rhs_200rnd_556x45_M_SAW),
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        respawnMagazines[] = {
            MULT_OBJ_4(rhs_200rnd_556x45_M_SAW),
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ)
        };

        linkedItems[] = {
            "rhsusf_hgu56p_mask_black",
            "V_BlackOrder_TacVest_1",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_15"
        };
        respawnLinkedItems[] = {
            "rhsusf_hgu56p_mask_black",
            "V_BlackOrder_TacVest_1",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_15"
        };
        glassesEnabled = 1;
    };
};