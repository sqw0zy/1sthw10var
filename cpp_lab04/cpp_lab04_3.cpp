#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	const int n = 7;
	int x[n], y[n], a[3 * n], b[2 * n];
	cout << "Массив х: ";
	for (int j = 0; j < 2; j++)
	{
		if (j == 1)
			cout << "Массив y: ";
		for (int i = 0; i < n; i++)
		{
			if (j < 1)
			{
				x[i] = rand() % 20;
				cout << x[i] << ' ';
			}
			else
			{
				y[i] = rand() % 20;
				cout << y[i] << ' ';
			}
		}
		cout << endl;
	}
	for (int i = 0; i < n; i++) // пункт а
	{
		a[1 + 3 * i] = y[i];
		a[ 3 * i] = x[i];
		a[2 + 3 * i] = x[i] + y[i];	
	}
	cout << "Результат пункта а: ";
	for (int i = 0; i < 3 * n; i++)
		cout << a[i] << ' ';
	for (int i = 0; i < n; i++)  // пункт б
	{
		if (i == 6)
		{
			b[2 * i] = x[n - i - 1]; 
			b[1 + 2 * i] = y[i] + x[0];
		}
		else
		{
			b[2 * i] = x[n - i - 1];
			b[1 + 2 * i] = y[i] + x[i + 1];
		}
	}
	cout << endl << "Результат пункта б: ";
	for (int i = 0; i < 2 * n; i++)
		cout << b[i] << ' ';
	return 0;
}