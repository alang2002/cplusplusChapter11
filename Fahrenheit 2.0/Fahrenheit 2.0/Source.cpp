#include <iostream>
using namespace std;

double conversion(double fahrenheitTemp)
{
	double inCelsius = (fahrenheitTemp - 32) / 1.8;
	return inCelsius;
}

int main()
{
	double temperatures[5];
	double output;

	for (int i = 0; i < size(temperatures); i++) {
		cout << "Enter a temperature >> ";
		cin >> temperatures[i];
		output = conversion(temperatures[i]);
		cout << "The temperature conversion is " << output << endl;
	}

	system("pause");
	return 0;
}