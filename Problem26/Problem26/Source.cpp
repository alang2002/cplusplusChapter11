//Aaron Lang
//10.02.18
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cout << fixed << setprecision(2);

	double prices[10] = { 10.5, 25.5, 9.75, 6.0, 35.0, 100.4, 10.65, .56, 14.75, 4.78 };
	double increase = 0.0;

	//update prices
	cout << "Enter increase percentage (for example, enter 15 for 15%): ";
	cin >> increase;
	increase = (increase / 100) + 1;

	for (int i = 0; i < size(prices); i++) {
		prices[i] = prices[i] * increase;
	}
	//end for

	//display contents of array
	for (int x = 0; x < size(prices); x++) {
		cout << prices[x] << endl;
	}
	//end for

	system("pause");
	return 0;
} //end of main function