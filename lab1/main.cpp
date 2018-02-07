#include <iostream>
#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;

double calc(double x) {
	const double PI = 3.141592653589793238463;
	return sin(9 * x) + 0, 5 * sin(3 * x + PI / 2);
}

int main()
{
	setlocale(LC_ALL, "Russian");
	double minx, maxx, step;
	cout << "Введите минимальное, максимальное значения и шаг аргумента через Enter\n";
	cin >> minx >> maxx >> step;
	for (double i = minx; i <= maxx; i += step) {
		cout << setw(25) << left << i << calc(i) << endl;
	}
	system("PAUSE");
    return 0;
}


