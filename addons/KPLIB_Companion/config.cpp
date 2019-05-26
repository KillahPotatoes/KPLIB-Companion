/*
    KPLIB Companion config file

    File: config.cpp
    Author: KP Liberation Dev Team - https://github.com/KillahPotatoes
    Date: 2019-05-11
    Last Update: 2019-05-11
    License: GNU General Public License v3.0 - https://www.gnu.org/licenses/gpl-3.0.html
*/

/*
    --- General Mod Info ---
*/

class CfgPatches {
    class KPLIB_Companion {
        author = "KP Liberation Dev Team";
        name = "KP Liberation Companion";
        url = "https://github.com/KillahPotatoes/KPLIB-Companion";
        units[] = {
            "KPLIB_ModuleCrateAmmo",
            "KPLIB_ModuleCrateFuel",
            "KPLIB_ModuleCrateSupply"
        };
        weapons[] = {};
        requiredVersion = 1.92;
        requiredAddons[] = {"A3_Modules_F"};

        // CBA Versioning information
        versionDesc = "KP Liberation Companion";
        version = 1.0.0;
        versionStr = "1.0.0";
        versionAr[] = {1,0,0};
        authors[] = {"KP Liberation Dev Team"};
    };
};

class CfgAddons {
    class PreloadAddons {
        class KPLIB_Companion {
            list[] = {"KPLIB_Companion"};
        };
    };
};

/*
    --- CBA Version Info ---
*/

class CfgSettings {
    class CBA {
        class Versioning {
            class KPLIB_Companion {main_addon = "KPLIB_Companion";};
        };
    };
};

#include "CfgFunctions.hpp"
#include "CfgFactionClasses.hpp"
#include "CfgVehicles.hpp"

/*
    --- UI Defines ---
*/

