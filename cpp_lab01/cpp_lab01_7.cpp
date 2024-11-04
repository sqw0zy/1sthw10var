#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	int a, b, s;
	cout << "Введите два целых числа, чтобы узнать сумму их последних цифр: ";
	cin >> a >> b;
	s = a % 10 + b % 10;
	cout << "Сумма последних цифр цисел равна " << s;
	return 0;
}