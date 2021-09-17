#include <iomanip>
#include <math.h>
#include <iostream>

using namespace std;

int main(){

	float number_of_digits_after_do;
	cout << "Enter the number of digits after the decimal point\n";
	cin >> number_of_digits_after_do;
	float K;
	cout << "Enter K\n";
	cin >> K;
	long double epsilon;
	epsilon = pow(10, -K);
	float X;
	cout << "Enter X∈(-1;1)\n";
	cin >> X;
	long double math_h_result;
	math_h_result = log((1 + X) / (1 - X));
	long double step = X;
	float i = 1;
	long double taylor_result = 0;
	while (step > epsilon)
	{
		step = pow(X, i) / i;
		taylor_result += step;
		i += 2;
	};
	taylor_result *= 2;
	cout << "math.h: " << setprecision(number_of_digits_after_do + 1) << math_h_result << endl;
	cout << "Taylor series: " << setprecision(number_of_digits_after_do + 1) << taylor_result;
}
