#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int n;
	cout << "Введите количество углов: ";
	cin >> n;
	if (n >= 3)
	{
		double dist{};
		double x1, y1, y, x, x1st, y1st, ylast, xlast;
		for (int i{ 1 }; i <= n; i++)
		{
			if (i == 1)
			{
				cout << "Введите координаты точки: ";
				cin >> x1st >> y1st;
			}
			if (((i & 1) == 0) && i != 1)
			{
				cout << "Введите координаты точки: ";
				cin >> x1 >> y1;
				if (i == n)
				{
					xlast = x1;
					ylast = y1;
				}
			}
			else if (i != 1)
			{
				cout << "Введите координаты точки: ";
				cin >> x >> y;
				if (i == n)
				{
					xlast = x;
					ylast = y;
				}
			}
			if (i == 2)
				dist += sqrt((x1 - x1st) * (x1 - x1st) + (y1 - y1st) * (y1 - y1st));
			else if (i > 2)
				dist += sqrt((x - x1) * (x - x1) + (y - y1) * (y - y1));
		}
		dist += sqrt((xlast - x1st) * (xlast - x1st) + (ylast - y1st) * (ylast - y1st));
		cout << dist;
	}
	else
		cout << "Слишком мало углов.";
	return 0;
}