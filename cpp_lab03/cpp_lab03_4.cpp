#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int n;
	double x, sum1{ 0 }, sum2{ 0 };
	cout << "Введите целое число n: "; cin >> n;
	cout << "Введите вещественное число x: "; cin >> x;
	for (int i{ 0 }; i <= n; i++)
	{
		sum1 = cos(x + sum1);
		sum2 = sqrt(x + sum2);
	}
	cout << "При  n = " << n << ", x = " << x << " \n";
	cout << "(Результат для пункта а): cos(x+cos(x+cos(x+...))) = " << sum1 << endl;
	cout << "(Результат для пункта б): sqrt(x + sqrt(x + ...)) = " << sum2;
	return 0;
}