//Aaron Lang
//10.01.18
#include <iostream>
#include <array>
#include <numeric>
using namespace std;

int main() {
	array<double, 10> scoreArray = { 0.0 };
	double average;
	double highScore;
	double lowScore;
	double testScore;

	//Get first test score, use it as starting low score/high score
	cout << "Enter a test score >> ";
	cin >> testScore;
	lowScore = testScore;
	highScore = testScore;

	//Iterate through the scoreArray, and enter values
	for (int i = 0; i < scoreArray.size() - 1; i++) {
		cout << "Enter a test score >> ";
		cin >> testScore;
		scoreArray[i] = testScore;
		
		//Set the low score value to the entered test score value
		if (testScore <= lowScore) {
			lowScore = testScore;
		} //Same thing here but with high score instead
		else if (testScore >= highScore) {
			highScore = testScore;
		} //Make sure the value is valid
		else if (testScore > 100 || testScore < 0) {
			cout << "Not a valid test score" << endl;
		}
	}
	//Use accumulate function to get sum of all numbers in array, then divide it by size of array for average
	average = accumulate(scoreArray.begin(), scoreArray.end(), 0.0) / scoreArray.size();
	//Print high, low and average
	cout << "The highest score is " << highScore << endl;
	cout << "The lowest score is " << lowScore << endl;
	cout << "The average score is " << average << endl;

	system("pause");
	return 0;
}