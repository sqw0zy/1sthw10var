#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int massive[10];
	double sum{ 0 };
	cout << "Введите 10 целых чисел: ";
	for (int i{ 0 }; i < size(massive); i++)
		cin >> massive[i];
	cout << "Второй элемент массива равен " << massive[1] << endl;             //
	cout << "Предпоследcний элемент массива равен " << massive[8] << endl;     // пункт а
	cout << "Элементы с нечетными индексами: ";
	for (int i{ 1 }; i < 10; i += 2) // пункт б 
	{
		if (i < 9)
			cout << massive[i] << ", ";
		else
			cout << massive[i] << '.';
	}
	for (int i{ 0 }; i < 10; i++) // пункт в
		sum += massive[i];
	cout << "\nСреднее арифметическое равно " << sum / 10 << endl;
	int massive2[]{ -2, 4, 3, -7, 0, 12, 9, -2, 4, 2 }; // пункт г
	cout << "Сумма пар элементов массивов с одинаковым индексом: ";
	for (int i = 0; i < 10; i++)
	{
		if (massive[i] < 0)
			cout << '(' << massive[i] << ')' << '+';
		else
			cout << massive[i] << '+';
		if (massive2[i] < 0)
			cout << '(' << massive2[i] << ')' << '=' << massive[i] + massive2[i] << endl;
		else
			cout << massive2[i] << '=' << massive[i] + massive2[i] << endl;
	}
	return 0; 
}