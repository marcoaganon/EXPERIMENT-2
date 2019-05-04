#include <iostream>
#include <conio.h>

using namespace std;
int main()

{

	int N1 = 0, N2 = 1, N3, N4 = 2, N5 = 2 + 20;
    cout << "Fibonacci numbers:\n";
	cout << N1 << "," << N2 << ",";

    for (N4; N4 < N5; N4++) 
    	{
        	N3 = N1 + N2;
        	N1 = N2; 
        	N2 = N3;
			cout << N3 << ",";
    	}

	cout << "\b";
	cout << " ";

	_getch();
	return 0;
}
