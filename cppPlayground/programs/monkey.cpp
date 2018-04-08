#include <iostream>
#include <stdlib.h>
const int max_X = 10;
const int max_Y = 20;

using namespace std;
void  board(char array[][max_Y]);
void draw(char array[][max_Y]);
bool check_if_positive(char);
bool check_if_max(char,char);



bool check_if_positive(char number) {
	bool res = true;
	if (number < 0) {
		cout << "Board Edge! ";
		res = false;
	}
	return res;
}
	
bool check_if_max(char number, char max) {
		bool res = true;
		if (number >= max) {
			cout << "Board Edge! ";
			res = false;
		}
		return res;
}

void board(char array[max_X][max_Y]) {

	for (int x = 0; x < 10; x++)
	{
		for (int y = 0; y < 20; y++)
		{
			array[x][y] = 219;
		}
	}


}
void draw(char array[max_X][max_Y]) {
	system("cls");
	for (int x = 0; x < 10; x++)
	{
		for (int y = 0; y < 20; y++)
		{
			cout << array[x][y];
			
		}
		cout << endl;
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

	char wejscie;
	char temp;
	while (true) {
		cout << "X: " << X << " ";
		cout << "Y: " << Y << endl;
		cin >> wejscie;
		if (wejscie == 'a')
		{
			temp = Y - 1;
			if (check_if_positive(temp)) {
				a[X][temp] = '@';
				a[X][Y] = '#';
				draw(a);
				Y = temp;
			}
			
		
		}
		if (wejscie == 'd')
		{			
			temp = Y + 1;
			if (check_if_max(temp,max_Y)) {
				a[X][temp] = '@';
				a[X][Y] = '#';
				draw(a);
				Y = temp;
			}
		}
		if (wejscie == 'w')
		{
			temp = X - 1;
			if (check_if_positive(temp)) {
				a[temp][Y] = '@';
				a[X][Y] = '#';
				draw(a);
				X = temp;
			}
		}
		if (wejscie == 's')
		{
			temp = X + 1;
			if (check_if_max(temp,max_X)) {
				a[temp][Y] = '@';
				a[X][Y] = '#';
				draw(a);
				X = temp;
			}
		}
	}
}
