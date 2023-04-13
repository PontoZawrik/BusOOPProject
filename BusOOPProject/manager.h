#pragma once
#include "bus.h"

class Manager {
public:
	Bus bus_whith_nim_price(Bus* buses, int size) {
		Bus min = buses[0];

		for (int i = 1; i < size; i++) {

			if (min.cost / min.place > buses[i].cost / buses[i].place) {
				min = buses[i];
			}
		}
		return min;
	}
};