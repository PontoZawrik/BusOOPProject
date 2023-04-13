#pragma once
#include "main.h"	

class Bus {
public:
	string brand;
	string number;
	int cost;
	int place;

	Bus() {
		brand = "not specified";
		number = "XXXXPM7";
		cost = 0;
		place = 0;
	}

	Bus(string brnd, string num, int cst, int plce) {
		brand = brnd;
		number = num;
		cost = cst;
		place = plce;
	}

	string convert() {
		string msg = "Bus: ";
		msg += "\nBrand: " + brand;
		msg += ", state number:  " + number;
		msg += "\nCost: " + to_string(cost);
		msg += ", place: " + to_string(place);
		return msg;
	}
};