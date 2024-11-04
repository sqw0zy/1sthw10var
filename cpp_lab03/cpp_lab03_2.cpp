#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int count{ 0 }, sum{ 0 };
	int min = INT_MAX;
	cout << "Введите 7 целых чисел: ";
	for (int i = 0; i <= 6; i++)
	{
		int number;
		cout << i + 1 << "-ое: ";
		cin >> number;
		if (number < 0)
			count++;
		if ((number <= 99 && number >= 10) || (number >= -99 && number <= -10))
			sum += number;
		if (number < min)
			min = number;
	}
	cout << "Количество отрицательных чисел равно " << count << endl << "Сумма двузначных чисел равна " << sum << endl << "Наименьшее введённое число равно " << min;
	return 0;
}