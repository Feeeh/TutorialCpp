#include <iostream>
#include <string>

using namespace std;

int main()
{
	//SECTION 4 - VIDEO 2 (Built-in Arrays)
	const int ARRAY_SIZE = 5;
	int myArray[ARRAY_SIZE]; //count the indexes from 0
	string names[4]{ "Bob", "Sally", "John", "Ed" };

	//SECTION 4 - VIDEO 2 (Built-in Arrays) - CHALLENGE
	/*
		MoreArrayFun
			-> Use a regular loop to populate an array
				-> Array size should be 10
				-> Populate the array with the numbers 1 through 10
			-> With a separate loop, print out the values of the array you just populated
	*/
	const int CHALLENGE_ARRAY_SIZE = 10;
	int challengeArray[CHALLENGE_ARRAY_SIZE];

	////////////////////////////////////////////////////////////////////////////////////////////////////////

	//SECTION 4 - VIDEO 2 (Built-in Arrays)
	myArray[0] = 15;
	myArray[1] = 20;
	myArray[2] = 22;
	myArray[3] = 13;
	myArray[4] = 6;

	for (int i = 0; i < ARRAY_SIZE; i++) {
		cout << myArray[i] << endl;
	}

	cout << endl;

	/*for (int i = 0; i < 4; i++) {
		cout << names[i] << endl;
	}*/

	for (auto name : names) {	//auto = let the compiler figure the variable type.
		cout << name << endl;	//name : names = read as name in names.
	}

	//BREAK
	cout << endl << endl;

	//SECTION 4 - VIDEO 2 (Built-in Arrays) - CHALLENGE
	for (int i = 0; i < CHALLENGE_ARRAY_SIZE; i++) {
		challengeArray[i] = i + 1;
	}

	for (int number : challengeArray) {
		cout << number << endl;
	}

	return 0;
}