#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int a[5][5]; // пункт а
	cout << "пункт а: \n";
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (j == i)
				a[i][j] = 1;
			else
				a[i][j] = 0;
		}
	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
			cout << a[i][j] << ' ';
		cout << endl;
	} 
	//пункт б
	cout << "пункт б: \n";
	int n = 6; 
	int b[6][6];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			switch (j - i)
			{
			case 0: 
				b[i][j] = n;
				break;
			case 1: 
				b[i][j] = n - 1;
				break;
			case 2:
				b[i][j] = n - 2;
				break;
			case 3: 
				b[i][j] = n - 3;
				break;
			case 4: 
				b[i][j] = n - 4;
				break;
			case 5: 
				b[i][j] = n - 5; 
				break;
			default:
				b[i][j] = 0;
				break;
			}
		}
	}
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 6; j++)
			cout << b[i][j] << ' ';
		cout << endl;
	} 
	//пункт в
	cout << "пункт в: \n";
	n = 5;
	int c[5][5];
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			switch (i + j + 2)
			{
			case 10: c[i][j] = n; break;
			case 9: c[i][j] = n-1; break;
			case 8: c[i][j] = n-2; break;
			case 7: c[i][j] = n-3; break;
			case 6: c[i][j] = n-4; break;
			default: c[i][j] = 0; 
			}
			cout << c[i][j] << ' ';
		}
		cout << endl;
	}
	//пункт г
	cout << "пункт г: \n";
	n = 8; 
	int d[8][8];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if ((i + j) & 1)
				d[i][j] = 0;
			else
				d[i][j] = 1;
			cout << d[i][j] << ' ';
		}
		cout << endl;
	}
	//пункт д
	cout << "пункт д: \n";
	n = 10;
	int e[10][10];
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (true)
				e[i][j] = 4;
			if ((i >= 1 && i <= 8) && (j >= 1 && j <= 8))
				e[i][j] = 3;
			if ((i >= 2 && i <= 7) && (j >= 2 && j <= 7))
				e[i][j] = 2;
			if ((i >= 3 && i <= 6) && (j >= 1 && j <= 8))
				e[i][j] = 1;
			if ((i >= 4 && i <= 5) && (j >= 4 && j <= 5))
				e[i][j] = 0;
			cout << e[i][j] << ' ';
		}
		cout << endl;
	}

	return 0;
}