//Keegan Knapp
//09/26/2022

#include <iostream>


using namespace std;

int weight;
int ft;
int inches;
int age;
char gender;
int totalInches;
double bmr;

double bmrWomen(int weight, int totalInches, int age) {
	double bmr = 655 + (4.3 * weight) + (4.7 * totalInches) - (4.7 * age);
	return bmr;
}

double bmrMen(int weight, int totalInches, int age) {
	double bmr = 66 + (6.3 * weight) + (12.9 * totalInches) - (6.8 * age);
	return bmr;
}

int main() {
	while (gender != 'm' && gender != 'f')
	{
		cout << "What is your gender? (f = female, m = male) ";
		cin >> gender;
		cout << endl;
	}

	cout << "What is your height in feet and inches? " << endl;
		cout << "Feet? ";
		cin >> ft;

		cout << "Inches? ";
		cin >> inches;
		cout << endl;

	cout << "What is your weight in lbs? ";
	cin >> weight;
	cout << endl;

	cout << "What is your age? ";
	cin >> age;
	cout << endl;

	totalInches = (ft * 12) + inches;

	if (gender == 'm') {
		bmr = bmrMen(weight, totalInches, age);
	}
	else
	{
		bmr = bmrWomen(weight, totalInches, age);
	}

	cout << "Your BMR is: " << bmr << endl;
	cout << "You can eat " << ((int)bmr/131) << " cupcakes per day!";
}



