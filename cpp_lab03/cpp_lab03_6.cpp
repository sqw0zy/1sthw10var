#include <iostream>
using namespace std;
int main()
{
	setlocale(0 , "");
	int sum{}, count{}, countch{};
	while (true)
	{
		int slag;
		char y;
		cout << "Введите целое слагаемое: "; cin >> slag;
		sum += slag;
		cout << "Если вы желаете закончить, то напишите английскую y, если желаете продолжить, введите ОДИН любой символ: ";
		cin >> y;
		count++;
		if ((slag & 1) == 0)
			countch++;
		if (y == 'y' || y == 'Y')
			break;
	}
	cout << "Сумма равна " << sum << endl << "общее количество введенных чисел равно " << count << endl;
	cout << "Количество введенных четных чисел равно " << countch;
	return 0;
}