//Name: Keegan Knapp
//Date: 09/19/2022

#include <iostream>;
#include <cmath>;

using std::cin; using std::cout; using std::endl;

int main()
{
	int operationNum;
	double val;
	int expon;

	cout << "1. absolute value" << endl;
	cout << "2. square root" << endl;
	cout << "3. floor" << endl;
	cout << "4. power" << endl;
	cout << "Select an operation: ";
	cin >> operationNum;

	switch (operationNum) {
	case 1:
		cout << "Enter Number: ";
			cin >> val;
			cout << "Absolute Value of " << val << " is: " << abs(val);
		break;
	case 2:
		cout << "Enter Number: ";
		cin >> val;
		cout << "Square Root of " << val << " is: " << sqrt(val);
		break;
	case 3:
		cout << "Enter Number: ";
		cin >> val;
		cout << "Floor of " << val << " is: " << floor(val);
		break;
	case 4:
		cout << "Enter Base: ";
		cin >> val;
		cout << "Enter Exponent: ";
		cin >> expon;
		cout << "Floor of " << val << " is: " << pow(val, expon);
		break;
	}


	
}