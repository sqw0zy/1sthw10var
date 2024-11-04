#include <iostream>
using namespace std;
int main() 
{
	setlocale(0, "");
	cout << "Введите числа для двумерного массива 3 х 4: \n";
	int mas[3][4], min{999999999}, stringmin, columnmin;
	for (int i = 0; i < 3; i++) 
	{
		cout << "Элемент " << i + 1 << "-ый строки, ";
		for (int j = 0; j < 4; j++)
		{
			cout << j+1 << "-ого столбца: ";
			cin >> mas[i][j];
			if (mas[i][j] < min)
			{
				min = mas[i][j];
				stringmin = i;
				columnmin = j;
			}
		}
	}
	//
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
			cout << mas[i][j] << " ";
		cout << endl;
	}//для самопроверки
	cout << "a)\nНаименьший элемент равен " << min << endl;
	cout << "Номер строки, на которой находится наименьший элемент= " << stringmin + 1 << endl;
	cout << "Номер столбца, на котором находится наименьший элемент= " << columnmin + 1 << endl;
	int val[3];
	for (int i = 0; i < 3; i++)
	{
		val[i] = mas[i][columnmin];
		mas[i][columnmin] = mas[i][3];
		mas[i][3] = val[i];
	}
	cout << "б) Последний столбец и столбец с минимальным элементом поменяны местами: " << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
			cout << mas[i][j] << " ";
		cout << endl;
	}
	int x[4]{ 0, 0, 0, 0 };
	cout << "в) \nМассив х: \n";
	for (int j = 0; j < 4; j++)
	{
		for (int i = 0; i < 3; i++)
		{
			if (mas[i][j] >= 0)
				x[j] += mas[i][j];
		}
		cout << x[j] << ' ';
	}
	for (int j = 0; j < 4; j++)
	{
		mas[0][j] = min;
	}
	cout << "\nг) Все элементы первой строчки заменены на минимальный элемент массива а:\n";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
			cout << mas[i][j] << ' ';
		cout << endl;
	}
	return 0;
}