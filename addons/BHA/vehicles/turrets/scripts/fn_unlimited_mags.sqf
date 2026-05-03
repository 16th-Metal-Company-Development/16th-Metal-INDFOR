params ["_defense", "_unit", "_mag"];

_defense addEventHandler ["Reloaded",{
	_unit = _this select 0;
	if ((leader _unit) isEqualTo player) exitWith {};
	if (vehicle player isEqualTo _unit) exitWith {};
	_mag = _this select 4 select 0;
	_unit addMagazine _mag;
}];