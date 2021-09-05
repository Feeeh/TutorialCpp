#include <iostream>
#include <string>

using namespace std;

int main()
{
	//SECTION 3 - VIDEO 2 (Introductions to Control Statements)
	int age = 15;

	//SECTION 3 - VIDEO 3 (Selection Control Statements)
	int age2;

	char grade;

	//SECTION 3 - VIDEO 3 (Selection Control Statements) - CHALLENGE
	/*
		Retired Women
			-> Prompt user for AGE and GENDER
			-> age int, gender char
			-> get of f or F and 60 or over
			-> "You qualify for the discount!" or "You do not qualify for the discount"
	*/
	int age3;
	char gender;

	////////////////////////////////////////////////////////////////////////////////////////////////////////

	//SECTION 3 - VIDEO 2 (Introductions to Control Statements)
	cout << age << endl; //Sequencial Statement

	if (age >= 18) //Selection Statement (Or Skipping)
	{
		cout << "You can drive!" << endl;
	}
	else
	{
		cout << "You cannot drive yet!" << endl;
	}

	for (int i = 1; i <= age; i++) //Repetition Statement
	{
		cout << "Happy Birthday! " << i << endl;
	}

	//BREAK
	cout << "" << endl;
	cout << "" << endl;

	//SECTION 3 - VIDEO 3 (Selection Control Statements)
	cout << "Welcome to the Pub and Grille" << endl;
	cout << "Please enter your age" << endl;
	cin >> age2;

	if (age2 >= 18)
	{
		cout << "Here, have a beer!" << endl;
	} else if (age2 >= 16)
	{
		cout << "Here, have a sprite" << endl;
	} else 
	{
		cout << "Here, have a coke!" << endl;
	}

	cout << "Thanks for coming to the Pub and Grille!" << endl;

	cout << "" << endl;

	cout << "Please enter a letter grade" << endl;
	cin >> grade;

	switch (grade)
	{
		case 'A':
		case 'a':
			cout << "Great job!" << endl;
			break;
		case 'B':
		case 'b':
			cout << "Good job!" << endl;
			break;
		case 'C':
		case 'c':
			cout << "You can do better!" << endl;
			break;
		case 'D':
		case 'd':
			cout << "You are close to failing!" << endl;
			break;
		case 'F':
		case 'f':
			cout << "You are failing!" << endl;
			break;
		default:
			cout << "You've entered an invalid grade. Try again!" << endl;
	}
	cout << "" << endl;

	//SECTION 3 - VIDEO 3 (Selection Control Statements) - CHALLENGE
	cout << "What is your age?" << endl;
	cin >> age3;
	cout << "Now, what\'s your gender?" << endl;
	cin >> gender;

	if (age3 >= 60 && (gender == 'f' || gender == 'F'))
	{
		cout << "You qualify for the discount!" << endl;
	}
	else
	{
		cout << "You do not qualify for the discount!" << endl;
	}

	return 0;
}