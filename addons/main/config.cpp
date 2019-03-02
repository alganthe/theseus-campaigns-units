#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ace_main", "cba_main"};
        author = CSTRING(author);
        authors[] = {CSTRING(author)};
        authorUrl = "";
        VERSION_CONFIG;
    };
};
