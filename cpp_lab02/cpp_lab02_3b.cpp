#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	double x;
	cout << "Введите действительное число х: "; cin >> x;
	if (x <= 0)
	{
		if (x > -2)
			cout << "f(x) = " << x * x + 4 * x + 5;
		else
			cout << "f(x) = 0";
	}
	else 
	{
		if ((x * x + 4 * x - 5) != 0)
			cout << "f(x) = " << (1 / (x * x + 4 * x - 5));
		else
			cout << "По правилам математики на ноль делить нельзя, получен нечисловой результат";
	}
	return 0;
}