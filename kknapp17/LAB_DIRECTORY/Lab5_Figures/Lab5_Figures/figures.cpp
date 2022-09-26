//Keegan Knapp
//Date: 09/12/2022

#include "figures.hpp"
#include <iostream>


using std::cout; using std::endl; using std::cin;


void square(int figure_size, char paint_char) {
	int current_row = 0;
	int current_column = 0;
	while (current_row < figure_size)
	{
		while (current_column < figure_size)
		{
			cout << paint_char;
			current_column++;
		}
		current_row++;
		current_column = 0;
		cout << endl;
	}


}

	void hollowSquare(int figure_size, char paint_char)
	{
		int current_row = 0;
		int current_column = 0;
		while (current_row <= figure_size) {
			if (current_row == 0 || current_row == figure_size)
			{
				while (current_column < figure_size)
				{
					cout << paint_char;
					current_column++;
				}
				current_row++;
				current_column = 0;
				cout << endl;
			}
			else {
				while (current_column < figure_size)
				{
					if (current_column == 0 || current_column == figure_size - 1)
					{
						cout << paint_char;
					}
					else
					{
						cout << " ";
					}
					current_column++;
				}
				current_column = 0;
				cout << endl;
			}
			current_row++;

		}
	}

	

	//back slash
	void slash(int figure_size, char paint_char)
	{
		int current_row = 0;
		int current_column = 0;
		while (current_row <= figure_size)
		{
			while (current_column < figure_size)
			{
				if (current_row == current_column)
				{
					cout << paint_char;
				}
				else
				{
					cout << " ";
				}
				current_column++;

			}
			cout << endl;
			current_column = 0;
			current_row++;
		}

		//forward slash
		while (current_row >= 0)
		{
			while (current_column < figure_size)
			{
				if (current_row == current_column)
				{
					cout << paint_char;
				}
				else
				{
					cout << " ";
				}
				current_column++;

			}
			cout << endl;
			current_column = 0;
			current_row--;
		}

	}
	

	//triangle
	void triangle(int figure_size, char paint_char)
	{
		int current_row = 0;
		int current_column = 0;
		while (current_row <= figure_size)
		{
			if (current_row < figure_size - 1)
			{
				while (current_column <= figure_size * 2 - 1)
				{
					if (current_column <= figure_size && (figure_size - current_row - 1) == current_column)
					{
						cout << paint_char;
					}
					else if (current_column <= figure_size && (figure_size - current_row) != current_column)
					{
						cout << " ";
					}
					else if (current_column > figure_size && current_row == (current_column - figure_size))
					{
						cout << paint_char;
					}
					else if (current_column >= figure_size && current_row != current_column)
					{
						cout << " ";
					}
					current_column++;
				}
			}
			else if (current_row == figure_size - 1)
			{
				while (current_column < figure_size * 2 - 1)
				{
					cout << paint_char;
					current_column++;
				}

			}
			cout << endl;
			current_column = 0;
			current_row++;
		}
	}



