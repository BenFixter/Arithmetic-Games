#include <iostream>
#include <time.h>
#include <string>

using namespace std;

int main()
{
	srand((int)time(NULL));

	int num1;
	int num2;
	int answer;
	int guess;
	int correct;
	
	for (int i = 0; i < 11; i++)
	{
			num1 = rand() % 10;
			num2 = rand() % 10;
			cout << "Question " << i << ":" << " What is " << num1 << " + " << num2 << "? \n";
			cin >> guess;
			answer = num1 + num2;

			if (guess == answer) {
				cout << "Correct :) \n";
				correct++;
			}
			else {
				cout << "Wrong - the answer is " << answer << "\n";
			}
		}
	
	cout << "You got " << correct << " out of 10";

	return 0;
}
