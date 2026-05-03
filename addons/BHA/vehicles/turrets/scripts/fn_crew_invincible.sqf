params ["_vehicle", "_role", "_unit", "_turret", "_isEject"];
_unit allowDamage false;

//if (isPlayer _unit) then {
//
//_vehicle addEventHandler ["Killed",{
//	params ["_unit"];
//	{
//		_unit allowDamage true;
//		_unit setDamage 1;
//	} forEach _unit;
//};
//}];