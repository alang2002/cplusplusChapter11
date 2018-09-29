//Author: Aaron Lang
//9.28.18
#include <iostream>
#include <array>
using namespace std;

int main() {
	array<int, 12> numbers;
	int temp;
	int nextNum;
	int currentNum;

	//Get numbers from user
	for (int i = 0; i < numbers.size(); i++) {
		cout << "Enter a number >> ";
		cin >> numbers[i];
	} //Loop through array and sort numbers, from least to greatest
	for (int z = 0; z < numbers.size(); z++) {
		nextNum = numbers[z + 1];
		currentNum = numbers[z];

		//A second for loop to run the current number and check it against all other numbers in the array
		//Least to greatest --> FORWARD
		for (int y = 0; y < numbers.size(); y++) {
			//Check to see if the next number in the array is smaller than the current one
			if (currentNum > nextNum) {
				//If true, switch numbers in the array
				temp = nextNum;
				numbers[z + 1] = currentNum;
				numbers[z] = temp;
			}
			else {
				break;
			}
			nextNum = numbers[z + 1];
			currentNum = numbers[z];
		} /*
		//Iterate backwards through the array to check greatest to least <-- BACKWARD
		for (auto w = numbers.rbegin(); w < numbers.rend(); ++w) {
			nextNum = numbers[z - 1];
			//Reverse functionality of if statement
			if (currentNum < nextNum) {
				temp = currentNum;
				numbers[z - 1] = currentNum;
				numbers[z] = temp;
			}
			else {
				break;
			}
		}*/
	} //Print out array.
	for (int x = 0; x <= numbers.size() - 1; x++) {
		cout << numbers[x] << endl;
	}

	system("pause");
	return 0;
}