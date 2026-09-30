// Lab_03_1.cpp
// Криворучко Анастасія
// Розгалуження задане однією формулою: функція одніє змінної
// Варіант 16

#include <iostream>
#include <cmath>

using namespace std;

int main() {

	double x;
	double y;
	double A;
	double B;

	cout << "x = "; cin >> x;

	A = 5 * exp(3 * x);

	// розгалуження в скороченій формі

	if (x < -1)
		B = sqrt(2) * pow(x, 3) - 7;

	if (x >= -1 && x < 3)
		B = 2 * log10(1 - (x / 4));

	if (x >= 3)
		B = cos(abs(x)) + 3;

	y = A - B;

	cout << endl;
	cout << "1) y = " << y << endl;


	// розгалуження в повній формі

	if (x < -1)
		B = sqrt(2) * pow(x, 3) - 7;
	else
		if (x >= -1 && x < 3)
			B = 2 * log10(1 - (x / 4));
		else
			B = cos(abs(x)) + 3;

	y = A - B;

	cout << endl;
	cout << "2) y = " << y << endl;

	cin.get();
	return 0;

}