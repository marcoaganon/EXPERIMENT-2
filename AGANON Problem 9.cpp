#include <iostream>
#include <conio.h>

using namespace std;

int main()

{
	int ROWS, COLUMNS; 
	bool coaster = false;

    do 
	{
		cout << "How many rows: ";		cin >> ROWS;
    	cout << "How many columns: ";	cin >> COLUMNS;
			{
   		 		for (int x = 0; x < ROWS; x++) 
    				{
   		 				cout << "\n*";
 					  		for (int y = 1; y < COLUMNS; y++) 
    							{
    								cout << "*";
								}
					}
			}
		cout << "\n\n";

	} while (!coaster); 

    _getch();
    return 0;
}
