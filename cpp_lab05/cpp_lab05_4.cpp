#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int mas[2][4][3];
	cout << "Введите целые числа для массива 2х4х3:\n";
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			for (int k = 0; k < 3; k++)
			{
				cin >> mas[i][j][k];

			}
		}
	}
	/*for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			for (int k = 0; k < 3; k++)
			{
				cout << mas[i][j][k] << ' ';     просто выводит числа, полученные от пользователя

			}
			cout << endl;
		}
		cout << endl;
	}
	*/
	return 0;
}