/*
    KPLIB_fnc_companion_showHint

    File: fn_companion_showHint.sqf
    Author: KP Liberation Dev Team - https://github.com/KillahPotatoes
    Date: 2019-05-11
    Last Update: 2019-05-26
    License: GNU General Public License v3.0 - https://www.gnu.org/licenses/gpl-3.0.html
    Public: No

    Description:
        No description added yet.

    Parameter(s):
        _localVariable - Description [DATATYPE, defaults to DEFAULTVALUE]

    Returns:
        Function reached the end [BOOL]
*/

private _name = "Server";

if !(isDedicated) then {
    _name = name player;
};

private _text = format ["[KPLIB COMPANION] showHint called on: %1 - Arguments: %2 - Local: %3", _name, _this, local (_this select 0)];

[_text] remoteExecCall ["diag_log", 2];

systemChat _text;

true
