#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	const int n = 8;
	int f[n];
	f[0] = 0, f[1] = 1, f[2] = 1;
	for (int i = 3; i < n; i++)
	{
		f[i] = f[i - 2] + f[i - 1];
	}
	cout << "Последовательность чисел Фибоначчи: \n";
	for (int i = 0; i < n; i++)
		cout << f[i] << endl;
	return 0;
}