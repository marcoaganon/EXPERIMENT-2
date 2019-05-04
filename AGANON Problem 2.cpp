#include <iostream>
#include <conio.h>

using namespace std;
int main()

{	
	int consumedgallons;
	float unpaidbill, totalcost;
	const float water_demand_charge = 35, consumption_charge = 1.10; 

	cout << "Unpaid amount from the past month: ";	cin >> unpaidbill;
	cout << "Gallons used up in the current month: ";	cin >>	consumedgallons;

	if (unpaidbill < 0 || consumedgallons < 0 ) 
	cout << "Invalid amount!\n" << endl;

	else if (unpaidbill > 0)
		{
			totalcost = water_demand_charge + (consumption_charge * consumedgallons) + unpaidbill + 20;
			cout << "Water bill : P\n" << totalcost << endl;
		}

	else 
		{
			totalcost = water_demand_charge + (consumption_charge * consumedgallons);
			cout << "Water bill : P\n" << totalcost << endl;
		}



	_getch();
	return 0;
}

