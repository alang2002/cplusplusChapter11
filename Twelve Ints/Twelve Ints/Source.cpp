//Author: Aaron Lang
//9.28.18
#include <iostream>
#include <array>
using namespace std;

int main() {
	array<int, 12> numbers;
	
	//Get numbers from user
	for (int i = 0; i < numbers.size(); i++) {
		cout << "Enter a number >> ";
		cin >> numbers[i];
	}

	//Sort numbers in ascending order
	sort(numbers.begin(), numbers.end());

	//Print out array.
	for (int num : numbers) {
		cout << num << endl;
	}

	//Break line
	cout << "" << endl;

	//Reverse the order of the array
	reverse(numbers.begin(), numbers.end());

	//Print out numbers in descending order
	for (int num : numbers) {
		cout << num << endl;
	}

	system("pause");
	return 0;
}