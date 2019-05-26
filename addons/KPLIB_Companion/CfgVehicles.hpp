/*
    KPLIB Companion CfgVehicles config file

    File: CfgVehicles.hpp
    Author: KP Liberation Dev Team - https://github.com/KillahPotatoes
    Date: 2019-05-11
    Last Update: 2019-05-26
    License: GNU General Public License v3.0 - https://www.gnu.org/licenses/gpl-3.0.html
*/

/*
    https://community.bistudio.com/wiki/Modules
*/

class CfgVehicles {
    class Logic;
    class Module_F: Logic {
        class ModuleDescription {
            class AnyBrain;
        };
    };

    // Basic Module Attributes
    class KPLIB_ModuleBase: Module_F {
        author = "KP Liberation Dev Team";
        category = "KPLIB_Companion";

        scope = 1;                  // Editor Scope: 2 - show, 1 - hide
        scopeCurator = 2;           // Zeus Scope: 2 - show, 1 - hide
        functionPriority = 1;       // Execution priority, modules with lower number are executed first. 0 is used when the attribute is undefined
        isGlobal = 1;               // 0 for server only execution, 1 for global execution, 2 for persistent global execution
        isTriggerActivated = 0;     // 1 for module waiting until all synced triggers are activated
        isDisposable = 0;           // 1 if modules is to be disabled once it's activated (i.e., repeated trigger activation won't work)
        is3DEN = 0;                 // 1 to run init function in Eden Editor as well

        icon = "\KPLIB_Companion\kplogo_ca.paa";
        displayName = "KPLIB Companion Base Module";
        function = "";

        // Menu displayed when the module is placed or double-clicked on by Zeus
        //curatorInfoType = "RscDisplayAttributeModuleHint";

        class ModuleDescription: ModuleDescription {
            description = "KPLIB Companion Module";
        };
    };

    /*
        --- Resource Crate Spawning ---
    */
    class KPLIB_ModuleResources: KPLIB_ModuleBase {
        category = "KPLIB_Resources";
    };
    class KPLIB_ModuleCrateAmmo: KPLIB_ModuleResources {
        displayName = "Spawn Crate: Ammo";
        function = "KPLIB_fnc_companion_ammoCrate";
    };
    class KPLIB_ModuleCrateFuel: KPLIB_ModuleResources {
        displayName = "Spawn Crate: Fuel";
        function = "KPLIB_fnc_companion_fuelCrate";
    };
    class KPLIB_ModuleCrateSupply: KPLIB_ModuleResources {
        displayName = "Spawn Crate: Supplies";
        function = "KPLIB_fnc_companion_supplyCrate";
    };
};
