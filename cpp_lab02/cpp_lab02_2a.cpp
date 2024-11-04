#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int number;
	cout << "Введите число: "; cin >> number;
	if (number > 0)
		cout << "Число положительное";
	else if (number == 0)
		cout << "Число равно нулю";
	else
		cout << "Число отрицательное";

	return 0;
}