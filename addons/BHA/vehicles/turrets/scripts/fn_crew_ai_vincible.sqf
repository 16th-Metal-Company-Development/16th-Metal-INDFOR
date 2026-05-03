params ["_unit", "_killer", "_instigator", "_useEffects"];
    if (vehicle player isNotEqualTo _unit) then { //check if player in vehicle
        {
            _x allowDamage true;
            _x setDamage 1;
        } forEach (crew _unit);
    };