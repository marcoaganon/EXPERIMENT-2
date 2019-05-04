#include <iostream>
#include <conio.h>

using namespace std;
int main()

{
	bool coaster = false;
	
	
	do 
	{	
		int N1, N3 = 0;
		cout << "Enter a number: ";	
		cin >> N1;

		if	(N1 > 0)
			{
				for (int N2 = 1; N2 <= N1; N2++)
					{
        				N3 += N2; 
    				}
    			cout << "The sum of all whole numbers from 1 to " << N1 << " is " << N3 << "." << endl;
    		}

		else 
    		{
    			cout << "Thank you!" << endl;
    			break;
			}	
	} while (!coaster);


	_getch();
	return 0;
}

