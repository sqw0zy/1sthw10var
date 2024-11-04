#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int number, countmax{0}, max;
	max = INT_MIN;
	while (true)
	{
		
		cout << "Введите натуральное число: ";
		cin >> number;
		if (number != 0)
		{
			if (number > max)
			{
				max = number;
				countmax = 0;
			}
			else if (number == max)
				countmax++;
			else
				continue;
		}
		else
		{
			cout << "Программа завершена.\nКоличество элементов последовательности, равных наибольшему эл-ту (не считая сам эл-т) = " << countmax;;
			break;
		}
		
	}

	return 0;
}