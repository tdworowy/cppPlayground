#include <iostream>
#include <stdlib.h>
const int max_X = 40;
const int max_Y = 40;

void  board(char array[][max_Y]);
void draw(char array[][max_Y]);
bool check_if_positive(char);
bool check_if_max(char,char);



bool check_if_positive(char number) {
	bool res = true;
	if (number < 0) {
		std::cout << "Board Edge! ";
		res = false;
	}
	return res;
}
	
bool check_if_max(char number, char max) {
		bool res = true;
		if (number >= max) {
			std::cout << "Board Edge! ";
			res = false;
		}
		return res;
}

void board(char array[max_X][max_Y]) {

	for (int x = 0; x < max_X; x++)
	{
		for (int y = 0; y < max_Y; y++)
		{
			array[x][y] = 219;
		}
	}


}
void draw(char array[max_X][max_Y]) {
	system("cls");
	for (int x = 0; x < max_X; x++)
	{
		for (int y = 0; y < max_Y; y++)
		{
			std::cout << array[x][y];
			
		}
		std::cout << std::endl;
	}

}

int main()
{
	
	char a[max_X][max_Y];
	board(a);
	int X = 5;
	int Y = 5;

	a[5][5] = '@';
	draw(a);

	char ch;
	char temp;
	while (true) {
		std::cout << "X: " << X << " ";
		std::cout << "Y: " << Y << std::endl;
		std::cin >> ch;
		switch (ch){
		case 'A':
		case 'a':
			temp = Y - 1;
			if (check_if_positive(temp)) {
				a[X][temp] = '@';
				a[X][Y] = '#';
				draw(a);
				Y = temp;
			}
			break;
		
		
		case 'D':
		case 'd':
			temp = Y + 1;
			if (check_if_max(temp,max_Y)) {
				a[X][temp] = '@';
				a[X][Y] = '#';
				draw(a);
				Y = temp;
			}
			break;
		case 'W':
		case 'w':
			temp = X - 1;
			if (check_if_positive(temp)) {
				a[temp][Y] = '@';
				a[X][Y] = '#';
				draw(a);
				X = temp;
			}
			break;
		case 'S':
		case 's':
			temp = X + 1;
			if (check_if_max(temp, max_X)) {
				a[temp][Y] = '@';
				a[X][Y] = '#';
				draw(a);
				X = temp;
			}
			break;
		default:
			std::cout << "INCORECT" << std::endl;
			break;
			}
	}
}
