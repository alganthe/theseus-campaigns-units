class CfgGroups {
    class East {
        name = "OPFOR";
        side = 0;

        class TCU_O_dolos_soldiers {
            name = "Dolos";

            class dolos_O_infantry {
                name = "Infantry";

                class dolos_O_soldiers_patrol {
                    name = "Soldiers (Patrol)";
                    side = 0;
                    faction = "O_dolos";

                    class unit0 {
                        side = 0;
                        vehicle = "TCU_O_D_Soldier_rifleman";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };
                    class unit1 {
                        side = 0;
                        vehicle = "TCU_O_D_Soldier_ammoBearer";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                    class unit2 {
                        side = 0;
                        vehicle = "TCU_O_D_Soldier_LMG";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                };
                class dolos_O_soldiers_team {
                    name = "Soldiers (Team)";
                    side = 0;
                    faction = "O_dolos";

                    class unit0 {
                        side = 0;
                        vehicle = "TCU_O_D_Soldier_squadLeader";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };
                    class unit1 {
                        side = 0;
                        vehicle = "TCU_O_D_Soldier_medic";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                    class unit2 {
                        side = 0;
                        vehicle = "TCU_O_D_Soldier_ammoBearer";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                    class unit3 {
                        side = 0;
                        vehicle = "TCU_O_D_Soldier_LMG";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class dolos_O_soldiers_squad {
                    name = "Soldiers (Squad)";
                    side = 0;
                    faction = "O_dolos";

                    class unit0 {
                        side = 0;
                        vehicle = "TCU_O_D_Soldier_squadLeader";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };
                    class unit1 {
                        side = 0;
                        vehicle = "TCU_O_D_Soldier_medic";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                    class unit2 {
                        side = 0;
                        vehicle = "TCU_O_D_Soldier_engineer";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                    class unit3 {
                        side = 0;
                        vehicle = "TCU_O_D_Soldier_ammoBearer";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                    class unit4 {
                        side = 0;
                        vehicle = "TCU_O_D_Soldier_smg";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };
                    class unit5 {
                        side = 0;
                        vehicle = "TCU_O_D_Soldier_LMG";
                        rank = "PRIVATE";
                        position[] = {15,-15,0};
                    };
                    class unit6 {
                        side = 0;
                        vehicle = "TCU_O_D_Soldier_rifleman";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };
                    class unit7 {
                        side = 0;
                        vehicle = "TCU_O_D_Soldier_marksman";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };

                class dolos_O_bandits_patrol {
                    name = "Bandits (Patrol)";
                    side = 0;
                    faction = "O_dolos";

                    class unit0 {
                        side = 0;
                        vehicle = "TCU_O_D_Bandit_smg_3";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };
                    class unit1 {
                        side = 0;
                        vehicle = "TCU_O_D_Bandit_smg_1";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                    class unit2 {
                        side = 0;
                        vehicle = "TCU_O_D_Bandit_smg_2";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                };
                class dolos_O_bandits_team {
                    name = "Bandits (Team)";
                    side = 0;
                    faction = "O_dolos";

                    class unit0 {
                        side = 0;
                        vehicle = "TCU_O_D_Bandit_squadleader";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };
                    class unit1 {
                        side = 0;
                        vehicle = "TCU_O_D_Bandit_medic";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                    class unit2 {
                        side = 0;
                        vehicle = "TCU_O_D_Bandit_smg_1";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                    class unit3 {
                        side = 0;
                        vehicle = "TCU_O_D_Bandit_smg_2";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class dolos_O_bandits_squad {
                    name = "Bandits (Squad)";
                    side = 0;
                    faction = "O_dolos";

                    class unit0 {
                        side = 0;
                        vehicle = "TCU_O_D_Bandit_squadleader";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };
                    class unit1 {
                        side = 0;
                        vehicle = "TCU_I_D_Bandit_medic";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                    class unit2 {
                        side = 0;
                        vehicle = "TCU_O_D_Bandit_rifle";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                    class unit3 {
                        side = 0;
                        vehicle = "TCU_O_D_Bandit_smg_1";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                    class unit4 {
                        side = 0;
                        vehicle = "TCU_O_D_Bandit_smg_2";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };
                    class unit5 {
                        side = 0;
                        vehicle = "TCU_O_D_Bandit_smg_3";
                        rank = "PRIVATE";
                        position[] = {15,-15,0};
                    };
                    class unit6 {
                        side = 0;
                        vehicle = "TCU_O_D_Bandit_smg_1";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };
                    class unit7 {
                        side = 0;
                        vehicle = "TCU_O_D_Bandit_smg_2";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };
            };
        };
    };
    class Indep {
        name = "Independent";
        side = 2;

        class TCU_I_dolos_soldiers {
            name = "Dolos";

            class dolos_I_infantry {
                name = "Infantry";

                class dolos_I_soldiers_patrol {
                    name = "Soldiers (Patrol)";
                    side = 2;
                    faction = "I_dolos";

                    class unit0 {
                        side = 2;
                        vehicle = "TCU_I_D_Soldier_rifleman";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };
                    class unit1 {
                        side = 2;
                        vehicle = "TCU_I_D_Soldier_ammoBearer";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                    class unit2 {
                        side = 2;
                        vehicle = "TCU_I_D_Soldier_LMG";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                };
                class dolos_I_soldiers_team {
                    name = "Soldiers (Team)";
                    side = 2;
                    faction = "I_dolos";

                    class unit0 {
                        side = 2;
                        vehicle = "TCU_I_D_Soldier_squadLeader";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };
                    class unit1 {
                        side = 2;
                        vehicle = "TCU_I_D_Soldier_medic";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                    class unit2 {
                        side = 2;
                        vehicle = "TCU_I_D_Soldier_ammoBearer";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                    class unit3 {
                        side = 2;
                        vehicle = "TCU_I_D_Soldier_LMG";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class dolos_I_soldiers_squad {
                    name = "Soldiers (Squad)";
                    side = 2;
                    faction = "I_dolos";

                    class unit0 {
                        side = 2;
                        vehicle = "TCU_I_D_Soldier_squadLeader";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };
                    class unit1 {
                        side = 2;
                        vehicle = "TCU_I_D_Soldier_medic";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                    class unit2 {
                        side = 2;
                        vehicle = "TCU_I_D_Soldier_engineer";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                    class unit3 {
                        side = 2;
                        vehicle = "TCU_I_D_Soldier_ammoBearer";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                    class unit4 {
                        side = 2;
                        vehicle = "TCU_I_D_Soldier_smg";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };
                    class unit5 {
                        side = 2;
                        vehicle = "TCU_I_D_Soldier_LMG";
                        rank = "PRIVATE";
                        position[] = {15,-15,0};
                    };
                    class unit6 {
                        side = 2;
                        vehicle = "TCU_I_D_Soldier_rifleman";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };
                    class unit7 {
                        side = 2;
                        vehicle = "TCU_I_D_Soldier_marksman";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };

                class dolos_I_bandits_patrol {
                    name = "Bandits (Patrol)";
                    side = 2;
                    faction = "I_dolos";

                    class unit0 {
                        side = 2;
                        vehicle = "TCU_I_D_Bandit_smg_3";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };
                    class unit1 {
                        side = 2;
                        vehicle = "TCU_I_D_Bandit_smg_1";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                    class unit2 {
                        side = 2;
                        vehicle = "TCU_I_D_Bandit_smg_2";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                };
                class dolos_I_bandits_team {
                    name = "Bandits (Team)";
                    side = 2;
                    faction = "I_dolos";

                    class unit0 {
                        side = 2;
                        vehicle = "TCU_I_D_Bandit_squadleader";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };
                    class unit1 {
                        side = 2;
                        vehicle = "TCU_I_D_Bandit_medic";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                    class unit2 {
                        side = 2;
                        vehicle = "TCU_I_D_Bandit_smg_1";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                    class unit3 {
                        side = 2;
                        vehicle = "TCU_I_D_Bandit_smg_2";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class dolos_I_bandits_squad {
                    name = "Bandits (Squad)";
                    side = 2;
                    faction = "I_dolos";

                    class unit0 {
                        side = 2;
                        vehicle = "TCU_I_D_Bandit_squadleader";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };
                    class unit1 {
                        side = 2;
                        vehicle = "TCU_I_D_Bandit_medic";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                    class unit2 {
                        side = 2;
                        vehicle = "TCU_I_D_Bandit_rifle";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                    class unit3 {
                        side = 2;
                        vehicle = "TCU_I_D_Bandit_smg_1";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                    class unit4 {
                        side = 2;
                        vehicle = "TCU_I_D_Bandit_smg_2";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };
                    class unit5 {
                        side = 2;
                        vehicle = "TCU_I_D_Bandit_smg_3";
                        rank = "PRIVATE";
                        position[] = {15,-15,0};
                    };
                    class unit6 {
                        side = 2;
                        vehicle = "TCU_I_D_Bandit_smg_1";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };
                    class unit7 {
                        side = 2;
                        vehicle = "TCU_I_D_Bandit_smg_2";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };
            };
        };
    };
};
