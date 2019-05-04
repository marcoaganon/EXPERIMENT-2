#include <iostream>
#include <conio.h>

using namespace std;

int main()
{

    char SP; // SP = subscription package
    float hours_consumed, total_amount_due; 
    bool payUp = false;
    
    
	do
	{

		cout << "Purchased package: ";	cin >> SP;
        cout << "Hours consumed: ";	cin >> hours_consumed;

		if ((SP != 'A' && SP != 'a' && SP != 'B' && SP != 'b' && SP != 'C' && SP != 'c') || hours_consumed < 0)
			{
				cout << "\nInvalid input! \n\n"; 
				break; 
			}

		else
		{
			switch(SP)

				{

					case 'A':
					case 'a':

						if (hours_consumed < 10) 
						total_amount_due = 995;

						else
						total_amount_due = 995 + (hours_consumed - 10) * 20; 
						break;

					case 'B':
					case 'b':

						if (hours_consumed < 20) 
						total_amount_due = 1495;

						else
						total_amount_due = 1495 + (hours_consumed - 20) * 10; 
						break;

					case 'C':
					case 'c':
						total_amount_due = 1995;
						break;
				}
				
			cout << "\nTotal amount due: P" << total_amount_due << "\n\n" << endl;

		}
		
	} while (!payUp);

    _getch();
    return 0;
}
