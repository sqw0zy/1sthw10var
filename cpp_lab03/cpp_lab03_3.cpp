#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int n;
	double s{};
	cout << "Введите целое число: "; cin >> n;
	for (int i = 1; i <= n; i++)
	{
		s += 1. / (2 * i);

	}
	cout << "S = " << s; 
	return 0;
}