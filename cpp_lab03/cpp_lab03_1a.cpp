#include <iostream>
using namespace std;
int main()
{
	int cel{}, fr{};
	
	while (cel <= 100)
	{
		cout << cel << " celsium" << "\t";
		while (true) {
			fr = 9 * cel / 5 + 32;
			cout << fr << " farenheit" << endl;
			break;
		}
		cel += 10;
	}
	return 0;
}