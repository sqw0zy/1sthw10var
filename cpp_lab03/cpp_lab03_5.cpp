#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	double smallnumber, sum{};
	int n{ 1 }, count{};
	cout << "Введите малое положительное число: "; cin >> smallnumber;
	while (true)
	{
		if (count % 2 == 0) 
		{
			sum += 1. / n;
			cout << '+' <<1. / n << endl;
		}
		else
		{
			sum -= 1. / n;
			cout << -1. / n << endl;
		}
		count += 1;
		if (abs(1. / n) < smallnumber)
		{
			//cout << "\nКоличество слагаемых равно " << count << endl;
			break;
		}
		n += 2;
	}
	cout << "Результат равен " << sum << endl;
	
	return 0;
}