//Aaron Lang
//10.03.18
#include <iostream>
#include <time.h>
using namespace std;

int main()
{
	srand(time(NULL));
	int randScore = rand() % 100 + 1;
	//declare array
	int scores[20];
	for (int i = 0; i < size(scores); i++) {
		scores[i] = randScore;
		randScore = rand() % 100 + 1;
	}

	//declare variables
	int total = 0;
	int minimumScore;
	int maximumScore;

	cout << "Enter a minimum score to start with: ";
	cin >> minimumScore;
	cout << "Enter a maxmimum score to end with: ";
	cin >> maximumScore;

	if (minimumScore > maximumScore) {
		int temp = maximumScore;
		maximumScore = minimumScore;
		minimumScore = temp;
	}

	while (minimumScore >= 0 || maximumScore >= 0)
	{
		total = 0;
		//search for score
		for (int x = 0; x < 20; x += 1) {
			if (scores[x] > minimumScore && scores[x] < maximumScore) {
				total += 1;
			}
		}
		//display total
		cout << "Number of students earning a score between "
			<< minimumScore << " and " << maximumScore << ": "
			<< total << endl << endl;

		cout << "Enter a minimum score to start with: ";
		cin >> minimumScore;
		cout << "Enter a maxmimum score to end with (-1 to end): ";
		cin >> maximumScore;
	}

	system("pause");
	return 0;
}