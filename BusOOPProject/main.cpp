#include "main.h"
#include "Bus.h"
#include "manager.h"


int main() {
	Bus bus1("MAZ", "1234PM7", 14000, 10);
	Bus bus2("PAZ", "2345PM7", 23500, 15);
	Bus bus3("Mrcedes Benz", "3456PM7", 21650, 17);
	Bus bus4("Scania", "4567PM7", 45000, 30);
	Bus bus5("Neoplan", "5678PM7", 113000, 87);

	Bus buses[5];
	buses[0] = bus1;
	buses[1] = bus2;
	buses[2] = bus3;
	buses[3] = bus4;
	buses[4] = bus5;

	Manager manager;

	Bus result = manager.bus_whith_nim_price(buses, 5);

	cout << result.convert() << endl;

	system("pause");
	return 0;
}