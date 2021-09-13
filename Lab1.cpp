#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int K;
	cout <<"Введите количество цифр после запятой\n";
	cin >> K;
	//cout « "Введите E\n";
	float e;
	//cin » e;
	e = pow(10, -K);
	cout << "Введите X∈(-1;1)\n";
	float x;
	cin >> x;
	float res_1;
	res_1 = log((1 + x) / (1 - x));
	float res_2 = 0;
	float i = 1;

	while (true)
	{


		float var;
		var = (pow(x, i) / i);

		if (var < e) {

			break;
		};
		res_2 = res_2 + var;
		i += 2;


	};


	res_2 *= 2;
	cout << "Используя math.h: " << setprecision(K+1) << res_1 << endl;
	cout <<"Использую ряд Тейлора: " << setprecision(K+1) << res_2;
}