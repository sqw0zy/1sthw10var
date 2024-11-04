#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	double x;
	cout << "Введите действительное число х: "; cin >> x;
	if (x <= 10)
	{
		if (x > -2)
			cout << "f(x) = " << x * x + 4 * x + 5;
		else
			cout << "f(x) = 0";
	}
	else
		cout << "f(x) = " << (1 / (x * x + 4 * x - 5));
	return 0;
}