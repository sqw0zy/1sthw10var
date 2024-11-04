#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	double n1, n2, result;
	char sign;
	cout << "Введите два вещественных числа: ";
	cin >> n1 >> n2;
	cout << "Введите знак арифметической операции: ";
	cin >> sign;
	switch (sign) {
	case '*': result = n1 * n2;
		cout << n1 << " * " << n2 << " = " << result;
		break;
	case '+': result = n1 + n2;
		cout << n1 << " + " << n2 << " = " << result;
		break;
	case '-': result = n1 - n2;
		cout << n1 << " - " << n2 << " = " << result;
		break;
	default: cout << "Неверные данные";
	}
	return 0;
}