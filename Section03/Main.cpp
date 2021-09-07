#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

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

	//SECTION 3 - VIDEO 4 (Repetition Control Statements)
	int count = 0;
	int count2 = 10;
	int input;

	//SECTION 3 - VIDEO 4 (Repetition Control Statements) - CHALLENGE
	/*
		SumFun
			-> Ask user for input
			-> Add this input in a sum
			-> Repeat until user types any negative number
	*/
	int input2;
	int sum = 0;

	//SECTION 3 - VIDEO 5 (Break and Continue)
	int count3 = 0;

	//SECTION 3 - VIDEO 5 (Break and Continue) - CHALLENGE
	/*
		Short Challenge or something
			-> Use continue statement and print even integers 0 to 10.
			-> Hint: Any operators that help if an integer is divisible by 2
	*/
	int count4 = 0;

	//SECTION 3 - VIDEO 6 (Random Numbers - Side Topic)


	//SECTION 3 - VIDEO 6 (Random Numbers - Side Topic) - CHALLENGE
	/*
		Generating Dices!
			-> Generate a single die (6 sides) roll
			-> Generate 10 dices rolls and print each
	*/
	int val3;

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
	cout << endl << endl;

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

	cout << endl;

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
	cout << endl;

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

	//BREAK
	cout << endl << endl;

	//SECTION 3 - VIDEO 4 (Repetition Control Statements)
	//while -- Doesn't run if the conditions are not checked
	while (count < 10)
	{
		cout << count << endl;
		count++;
	}

	cout << endl;

	//do-while -- Run at least once, then check for conditions
	do
	{
		cout << count2 << endl;
		count2++;
	} while (count2 < 10);

	cout << endl;

	//for
	for (int i = 0; i < 10; i++)
	{
		cout << i << endl;
	}

	//Priming read -- First time for user to read
	cout << "Please, enter a non-negative integer to continue or negative if you want to quit" << endl;
	cin >> input;

	while (input >= 0)
	{
		cout << input << endl;

		cout << "Please, enter a non-negative integer to continue or negative if you want to quit" << endl;
		cin >> input;
	}

	//SECTION 3 - VIDEO 4 (Repetition Control Statements) - CHALLENGE
	cout << "Enter a non-negative integer to add to a sum. Enter a negative number to quit." << endl;
	cin >> input2;

	while (input2 >= 0)
	{
		sum += input2;

		cout << "Enter a non-negative integer to add to a sum. Enter a negative number to quit." << endl;
		cin >> input2;
	}
	cout << "Final SUM: " << sum << endl;
	
	//BREAK
	cout << endl << endl;

	//SECTION 3 - VIDEO 5 (Break and Continue)
	while (count3 < 10)
	{
		if (count3 == 5)
		{
			count3++;
			continue;	//continue goes back to the start? It doesn't execute what's below it?
						//-> The continue statement breaks one iteration(in the loop), if a specified condition occurs, 
						//-> and continues with the next iteration in the loop.
		}
		cout << count3 << endl;
		count3++;
	}
	
	for (int i = 0; i < 10; i++)
	{
		if (i == 5)
		{
			break;		//break the loop and gets out of it.
						//-> Used to "jump out" of a switch statement.
						//-> The break statement can also be used to jump out of a loop.
		}
		cout << i << endl;
	}

	//SECTION 3 - VIDEO 5 (Break and Continue) - CHALLENGE
	for (int i = 0; i <= 10; i++)
	{
		if (i % 2 != 0)
		{
			continue;
		}
		cout << i << endl;
	}

	//BREAK
	cout << endl << endl;

	//SECTION 3 - VIDEO 6 (Random Numbers - Side Topic)
	srand(time(nullptr));

	int val1 = rand() % 10;		//val1 will be >= 0 and < 10

	//shift it
	int val2 = rand() % 10 + 1;	//val2 will be >= 1 and <= 10

	cout << val1 << endl;
	cout << val2 << endl;

	//SECTION 3 - VIDEO 6 (Random Numbers - Side Topic) - CHALLENGE
	//srand(time(nullptr)); //For the challenge

	for (int i = 0; i < 10; i++)
	{
		val3 = rand() % 6 + 1;
		cout << val3 << endl;
	}

	return 0;
}