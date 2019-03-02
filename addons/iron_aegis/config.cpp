#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            //------------------------------------- Enforcers
            "TCU_I_D_Soldier_base",
            "TCU_I_D_Soldier_smg",
            "TCU_I_D_Soldier_marksman",
            "TCU_I_D_Soldier_engineer",
            "TCU_I_D_Soldier_medic",
            "TCU_I_D_Soldier_squadLeader",
            "TCU_I_D_Soldier_ammoBearer",
            "TCU_I_D_Soldier_AT",
            "TCU_I_D_Soldier_LMG",
            "TCU_O_D_Soldier_smg",
            "TCU_O_D_Soldier_marksman",
            "TCU_O_D_Soldier_engineer",
            "TCU_O_D_Soldier_medic",
            "TCU_O_D_Soldier_squadLeader",
            "TCU_O_D_Soldier_ammoBearer",
            "TCU_O_D_Soldier_AT",
            "TCU_O_D_Soldier_LMG",

            //------------------------------------- Bandits
            "TCU_I_D_Bandit_base",
            "TCU_I_D_Bandit_smg_1",
            "TCU_I_D_Bandit_smg_2",
            "TCU_I_D_Bandit_smg_3",
            "TCU_I_D_Bandit_medic",
            "TCU_I_D_Bandit_engineer",
            "TCU_I_D_Bandit_rifle",
            "TCU_I_D_Bandit_squadleader",
            "TCU_O_D_Bandit_smg_1",
            "TCU_O_D_Bandit_smg_2",
            "TCU_O_D_Bandit_smg_3",
            "TCU_O_D_Bandit_medic",
            "TCU_O_D_Bandit_engineer",
            "TCU_O_D_Bandit_rifle",
            "TCU_O_D_Bandit_squadleader",

            //------------------------------------- Vehicles
            "TCU_I_D_bandit_offroad_01",
            "TCU_I_D_bandit_offroad_01_armed",
            "TCU_I_D_bandit_offroad_02_unarmed",
            "TCU_I_D_bandit_offroad_02_LMG",
            "TCU_I_D_bandit_van_01_transport",
            "TCU_I_D_bandit_van_02_transport",
            "TCU_I_D_bandit_van_01_cargo",
            "TCU_O_D_bandit_offroad_01",
            "TCU_O_D_bandit_offroad_01_armed",
            "TCU_O_D_bandit_offroad_02_LMG",
            "TCU_O_D_bandit_offroad_02_unarmed",
            "TCU_O_D_bandit_van_01_transport",
            "TCU_O_D_bandit_van_02_transport",

            //------------------------------------- Groups
            "dolos_O_soldiers_patrol",
            "dolos_O_soldiers_team",
            "dolos_O_soldiers_squad",
            "dolos_O_bandits_patrol",
            "dolos_O_bandits_team",
            "dolos_O_bandits_squad",

            "dolos_I_soldiers_patrol",
            "dolos_I_soldiers_team",
            "dolos_I_soldiers_squad",
            "dolos_I_bandits_patrol",
            "dolos_I_bandits_team",
            "dolos_I_bandits_squad",

            //------------------------------------- Story
            "TCU_C_S_shark"
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "tcu_main",
            "ace_medical",
            "ace_hearing",
            "ace_logistics_wirecutter",
            "cup_weapons_ak",
            "tacs_units"

        };
        author = ECSTRING(main,author);
        authors[] = {ECSTRING(main,author)};
        VERSION_CONFIG;
    };
};

#include "CfgFactionClasses.hpp"
#include "CfgIdentities.hpp"
#include "CfgVehicles.hpp"
#include "CfgGroups.hpp"
