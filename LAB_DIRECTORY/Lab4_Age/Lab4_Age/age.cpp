//Keegan Knapp
//09/19/2022

#include <iostream>;
#include <cmath>;
#include <ctime>;

using std::cout; using std::cin; using std::endl;

int main() {
	const int from = time(nullptr);
	srand(from);
	int trollAge = (100 + (rand() % 100));
	cout << trollAge << endl;

	int guess;
	int year = 1000;
	cout << "Year " << year << ": " << "Hello, fair maiden. I am an ugly old troll. How old am I? ";
	cin >> guess;
	cout << endl;

	while (guess != trollAge)
	{
		year += 5;
		trollAge += 5;
		cout << "Wrong, I am older. No handsome prince for you. See you in five years. " << endl;
			cout << "Year " << year << ": " << "Hello, fair maiden. I am an ugly old troll. How old am I? ";


		cin >> guess;
		cout << endl;
	}
	cout << "You got it! Here is the handsome prince. Live happily ever after!";

}