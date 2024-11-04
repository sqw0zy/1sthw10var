#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	const int n = 10;
	int mas[n], w{};
	cout << "Введите 10 чисел, которые будут входить в массив: \n";
	for (int i = 0; i < n; i++)
	{
		cout << i + 1 << "-ый элемент массива = ";
		cin >> mas[i];
	}
	cout << "Введите целове число w: ";
	cin >> w;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 9; j > i; j--)
		{
			if (w == mas[i] + mas[j] && j != i)
				cout << "пара элементов массива: " << mas[i] << ", " << mas[j] << "\tиндексы массива: " << i << ", " << j << endl;
		}
	}
	return 0;
}