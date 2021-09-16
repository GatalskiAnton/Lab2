#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
	
	int K;
	int c;
	cout << "Enter the number of digits after the decimal point\n";
	cin >> c;
	cout << "Enter K\n";
	cin >> K;
	long double epsilon;
	epsilon = (pow(10, -K) / 2);
	cout << "Enter X∈(-1;1)\n";
	long double x;
	cin >> x;
	long double math_h_result;
	math_h_result = log((1 + x) / (1 - x));
	long double taylor_result = 0;
	float i = 1;

	while (step < epsilon)
	{


		float step;
		step = (pow(x, i) / i);

		
		taelor_res = taylor_res + step;
		i += 2;


	};


	res_2 *= 2;
	cout << "Используя math.h: " << setprecision(c + 1) << math_h_result << endl;
	cout << "Использую ряд Тейлора: " << setprecision(c + 1) << taylor_result;
}
