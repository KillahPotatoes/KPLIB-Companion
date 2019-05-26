/*
    KPLIB_fnc_companion_crateSpawn

    File: fn_companion_crateSpawn.sqf
    Author: KP Liberation Dev Team - https://github.com/KillahPotatoes
    Date: 2019-05-26
    Last Update: 2019-05-26
    License: GNU General Public License v3.0 - https://www.gnu.org/licenses/gpl-3.0.html
    Public: No

    Description:
        Spawns given type of resource crate at given position.
        If a FOB storage area is closer than 10 meters, it'll get directly stored.

    Parameter(s):
        _position   - Position to spawn the crate   [ARRAY, defaults to [0, 0, 0]]
        _type       - Type of crate to spawn        [STRING, defaults to ""]

    Returns:
        Function reached the end [BOOL]
*/

params [
    ["_position", [0, 0, 0], [[]]],
    ["_type", "", [""]]
];

private _crate = [_type, 100, _position] call f_createCrate;
private _nearStorage = (_position nearobjects 10) select {(_x getVariable ["KP_liberation_storage_type",-1]) == 0};
if !(_nearStorage isEqualTo []) then {
    _nearStorage = _nearStorage select 0;
    [_crate, _nearStorage] call F_crateToStorage;
};

true
