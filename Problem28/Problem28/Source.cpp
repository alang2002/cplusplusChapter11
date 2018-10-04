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
	int searchScore = 0;
	int total = 0;

	cout << "Enter a score from 0 through 100 (-1 to end): ";
	cin >> searchScore;
	while (searchScore >= 0)
	{
		total = 0;
		//search for score
		for (int x = 0; x < 20; x += 1)
			if (scores[x] == searchScore)
				total += 1;

	//display total
		cout << "Number of students earning a score of "
			<< searchScore << ": "
			<< total << endl << endl;

		cout << "Enter a score from 0 through 100 (-1 to end): ";
		cin >> searchScore;
	} 

	system("pause");
	return 0;
} 