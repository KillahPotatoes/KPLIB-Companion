/*
    KPLIB_fnc_companion_crateAmmo

    File: fn_companion_crateAmmo.sqf
    Author: KP Liberation Dev Team - https://github.com/KillahPotatoes
    Date: 2019-05-26
    Last Update: 2019-05-26
    License: GNU General Public License v3.0 - https://www.gnu.org/licenses/gpl-3.0.html
    Public: No

    Description:
        Layer function to spawn an ammo crate.

    Parameter(s):
        _logic - Placed down module object [OBJECT, defaults to objNull]

    Returns:
        Function reached the end [BOOL]
*/

params [
    ["_logic", objNull, [objNull]]
];

[getPos _logic, KP_liberation_ammo_crate] call KPLIB_fnc_companion_spawnCrate;

deleteVehicle _logic;

true
