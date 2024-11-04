#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int mass[2][3];
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			mass[i][j] = rand() % 31;
		}

	}
	int count{}, count2{}, mult{1};
	for (int i{}; i < 2; i++)
	{
		for (int j{}; j < 3; j++)
		{
			cout << mass[i][j] << ' ';
			count += mass[i][j];
			if (mass[i][j] <= 9 && mass[i][j] >= 2)
			{
				count2 += mass[i][j];
				mult *= mass[i][j];
			}
		}
		cout << endl;
	}
	if (count & 1) 
		cout << "сумма элементов матрицы является нечётным числом.";
	else 
		cout << "сумма элементов матрицы является чётным числом.";
	cout << "\nсумма элементов, лежащих в диапазоне [2, 9]= " << count2 << endl;
	cout << "произведение элементов, лежащих в диапазоне [2, 9]= " << mult;

	return 0;
}