#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	/*
		Guess the Number
			-> The computer will randomly select and integer between 1 and 100 (inclusive)
				- The user will try and guess the computer's number
				- Must also count the number of guesses

			-> Four possibilities
				- If the user guesses correctly, print "Congratulations! You guessed the number in <#guesses>! Thanks for playing"
				  and the program exits
				- If the user selects a number too low, print out "Your guess is too low!"
				- If the user selects a number too high, print out "Your guess is too high!"
				- If the user selects a number lower than 1 or higher than 100, tell the user it was a wasted guess
				  and to pick between 1 and 100
	*/

	int randomNumber;
	int userGuess;
	int userCountGuesses = 0;

	////////////////////////////////////////////////////////////////////////////////////////////////////////

	srand(time(nullptr));

	randomNumber = rand() % 100 + 1;

	cout << "Pick a number between 1 and 100 and try to guess the number!" << endl;
	cin >> userGuess;
	while (userGuess != randomNumber) {
		if (userGuess < 1 || userGuess > 100) {
			cout << "Wasted guess! Pick a number between 1 and 100." << endl;
		}
		else {
			if (userGuess < randomNumber) {
				cout << "Your number is too low!" << endl;
			}
			else {
				cout << "Your number is too high!" << endl;
			}
		}
		userCountGuesses++;

		cout << "Pick a number between 1 and 100 and try to guess the number!" << endl;
		cin >> userGuess;
	}
	
	cout << "Congratulations! You guessed the number in " << userCountGuesses << " guesses! Thanks for playing!" << endl;

	return 0;
}