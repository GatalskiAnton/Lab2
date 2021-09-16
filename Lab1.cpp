#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int K;
	int c;
	cout << "Введите количество цифр после запятой\n";
	cin >> c;
	cout << "Введите K\n";
	cin >> K;
	//cout « "Введите E\n";
	long double e;
	//cin » e;
	e = (pow(10, -K) / 2);
	cout << "Введите X∈(-1;1)\n";
	long double x;
	cin >> x;
	long double res_1;
	res_1 = log((1 + x) / (1 - x));
	long double res_2 = 0;
	float i = 1;

	while (var < e)
	{


		float var;
		var = (pow(x, i) / i);		
		res_2 = res_2 + var;
		i += 2;


	};


	res_2 *= 2;
	cout << "Используя math.h: " << setprecision(c + 1) << res_1 << endl;
	cout << "Использую ряд Тейлора: " << setprecision(c + 1) << res_2;
}
