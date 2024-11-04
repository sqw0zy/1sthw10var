#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int n;
	cout << "Введите желаемый размер шахматной доски: ";
	cin >> n;
	for (int i{ 1 }; i <= n; i++)
	{
		for (int j{ 1 }; j <= n; j++)
		{
			if (((j+i) & 1) == 0) {
				cout << "x "; // x в качестве черных клеток
			}
			else {
				cout << "o "; //о в качестве белых клеток
			}
			
		}
		cout << endl;
	}

	return 0;
}