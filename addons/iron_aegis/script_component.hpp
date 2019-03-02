#define COMPONENT iron_aegis
#define COMPONENT_BEAUTIFIED Iron_Aegis
#include "\z\tcu\addons\main\script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE
// #define CBA_DEBUG_SYNCHRONOUS
// #define ENABLE_PERFORMANCE_COUNTERS

#ifdef DEBUG_ENABLED_IRON_AEGIS
    #define DEBUG_MODE_FULL
#endif

#ifdef DEBUG_SETTINGS_IRON_AEGIS
    #define DEBUG_SETTINGS DEBUG_SETTINGS_IRON_AEGIS
#endif

#include "\z\tcu\addons\main\script_macros.hpp"

#define mag_xx(CLASS,AMOUNT) class _xx_##CLASS {magazine = CLASS; count = AMOUNT;}
#define item_xx(CLASS,AMOUNT) class _xx_##CLASS {name = CLASS; count = AMOUNT;}

#define mag_2(a) a, a
#define mag_3(a) a, a, a
#define mag_4(a) a, a, a, a
#define mag_5(a) a, a, a, a, a
#define mag_6(a) a, a, a, a, a, a
#define mag_7(a) a, a, a, a, a, a, a
#define mag_8(a) a, a, a, a, a, a, a, a
#define mag_9(a) a, a, a, a, a, a, a, a, a
#define mag_10(a) a, a, a, a, a, a, a, a, a, a
#define mag_11(a) a, a, a, a, a, a, a, a, a, a, a
#define mag_12(a) a, a, a, a, a, a, a, a, a, a, a, a
