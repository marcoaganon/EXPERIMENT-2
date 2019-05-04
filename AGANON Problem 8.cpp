#include <iostream>
#include <conio.h>
using namespace std;

int main()


{
	int N1, N2 = 1;
	cout << "Enter a number: ";	cin >> N1;
    cout << "Multiplication table of " << N1 << ":" << endl;

    for (N2; N2 <= 10; N2++)
		{
        	cout << N1 << " * " << N2 << " = " << N2 * N1 << endl;
    	}

	_getch();
	return 0;
}
