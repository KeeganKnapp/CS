#include <iostream>
#include "figures.hpp"


using std::cout; using std::endl; using std::cin;

int main()
{
	int figure_size;
	char paint_char;
	int figure_num;
	char square_type = 'n';

	cout << "please enter figure size: ";
	cin >> figure_size;
	cout << "please enter figure paint character: ";
	cin >> paint_char;
	cout << "1. square" << endl
		<< "2. slash" << endl
		<< "3. triangle" << endl
		<< "select figure: ";
	cin >> figure_num;
	if(figure_num == 1)
	{
		while (square_type != 'f' && square_type != 'h')
		{
			cout << "filled or hollow? [f/h]";
			cin >> square_type;
		}
	}

	switch (figure_num) {
	case 1:
		if(square_type == 'f')
		{ 
			square(figure_size, paint_char);
		}
		else
		{
			hollowSquare(figure_size, paint_char);
		}
	case 2:
		slash(figure_size, paint_char);
	case 3:
		triangle(figure_size, paint_char);
	}
}