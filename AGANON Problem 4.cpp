#include <iostream>
#include <conio.h>

using namespace std;
int main()
{

	float number1, number2, number3;
	
	cout << "Enter first number: ";		cin >> number1;
	cout << "Enter second number: ";	cin >> number2;
	cout << "Enter third number: ";		cin >> number3;

	if ((number1 >= number2) && (number1 >= number3))
		cout << "The LARGEST of the three numbers is " << number1 << ".\n";

	else if ((number2 >= number1) && (number2 >= number3))
			cout << "The LARGEST of the three numbers is " << number2 << ".\n";

	else
		cout << "The LARGEST of the three numbers is " << number3 << ".\n";

	_getch();
	return 0;

}
