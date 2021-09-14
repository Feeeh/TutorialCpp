#include <iostream>
#include <string>

using namespace std;

//SECTION 5 - VIDEO 2 (Function Prototypes and Definitions)
void PrintSomething(); //Function Prototype -- Initialize it to use it in main

//SECTION 5 - VIDEO 2 (Function Prototypes and Definitions) - CHALLENGE
/*
	Print My Name
		-> Add a function called PrintMyName
		-> The funcition should be void and doesn't need parameters
		-> Print your name into the console
		-> Don't forget to actually call the function!

		++ Added arguments, just to make it cool :sunglasses:
*/
void PrintMyName(string name);

//SECTION 5 - VIDEO 3 (Function Return Types and Parameters)
//Funcions with parameters are called parameterized and without void return, is value returning
void PrintHello();
void PrintNumber(int a);
int GiveMe10();
int AddThese(int num1, int num2);

//SECTION 5 - VIDEO 3 (Function Return Types and Parameters) - CHALLENGE
/*
	Square
		-> Add a funcion called Square
		-> Return a int result
		-> Takes a single int parameter
		-> Squares the number passed

		++ Oops, added user input and it wasn't supposed to do that lol
*/
int Square(int number);

//SECTION 5 - VIDEO 4 (Parameter Passing: Pass-by-Value and Pass-by-Reference)
void ValueChanged1(int someNum);	//Without &, it passes the value, so if the variable passed is changed, it's only inside the function
void ValueChanged2(int& someNum);	//With &, it passes the reference, so the variable passed is changed everywhere

//SECTION 5 - VIDEO 4 (Parameter Passing: Pass-by-Value and Pass-by-Reference) - CHALLENGE
/*
	ThreeTimesN
		-> Function with:
			- void Function
			- Takes 2 parameters
		-> The parameters:
			- input, integer passed by value
			- output,  integer passed by reference
		-> Store the input multiplied by 3 into the output variable

		++ Again, asked for user input when not needed. Ossada.
*/
void ThreeTimesN(int input, int& output);

int main()
{
	//SECTION 5 - VIDEO 2 (Function Prototypes and Definitions)
	PrintSomething();

	//SMOL BREAK
	cout << endl;

	//SECTION 5 - VIDEO 2 (Function Prototypes and Definitions) - CHALLENGE
	cout << "Write your name!" << endl;
	string name;
	cin >> name;
	PrintMyName(name);
	
	//BREAK
	cout << endl << endl;

	//SECTION 5 - VIDEO 3 (Function Return Types and Parameters)
	int num1 = 120;
	int num2 = 580;

	PrintHello();
	PrintNumber(676);

	int someData = GiveMe10();
	cout << someData << endl;

	int totalValue = AddThese(num1, num2);
	cout << totalValue << endl;

	PrintNumber(AddThese(num1, 50));

	//SMOL BREAK
	cout << endl;

	//SECTION 5 - VIDEO 3 (Function Return Types and Parameters) - CHALLENGE
	cout << "Write a number to square!" << endl;
	int number;
	cin >> number;
	cout << "Here is your squared number: " << Square(number) << endl;

	//BREAK
	cout << endl << endl;

	//SECTION 5 - VIDEO 4 (Parameter Passing: Pass-by-Value and Pass-by-Reference)
	int myNumber = 20;

	cout << "Before ValueChanged1 call, myNumber is: " << myNumber << endl;
	ValueChanged1(myNumber);
	cout << "After ValueChanged1 call, myNumber is: " << myNumber << endl;

	//SMOL BREAK
	cout << endl;

	cout << "myNumber is currently: " << myNumber << endl;
	ValueChanged2(myNumber);
	cout << "After ValueChanged2 call, myNumber is: " << myNumber << endl;

	//BREAK
	cout << endl << endl;

	//SECTION 5 - VIDEO 4 (Parameter Passing: Pass-by-Value and Pass-by-Reference) - CHALLENGE
	int input;
	int output = 0;
	cout << "Output is: " << output << endl;
	cout << "Write an input and makes it triple!" << endl;
	cin >> input;
	ThreeTimesN(input, output);
	cout << "Output now is: " << output << endl;


	return 0;
}

//SECTION 5 - VIDEO 2 (Function Prototypes and Definitions)
void PrintSomething()
{
	cout << "Hey! Look I'm here!" << endl;
}

//SECTION 5 - VIDEO 2 (Function Prototypes and Definitions) - CHALLENGE
void PrintMyName(string name)
{
	cout << "Hey " << name << endl;
}

//SECTION 5 - VIDEO 3 (Function Return Types and Parameters)
void PrintHello()
{
	cout << "Hello there!" << endl;
}

void PrintNumber(int a)
{
	cout << "The number is: " << a << endl;
}

int GiveMe10()
{
	return 10;
}

int AddThese(int num1, int num2)
{
	return num1 + num2;
}

//SECTION 5 - VIDEO 3 (Function Return Types and Parameters) - CHALLENGE
int Square(int number)
{
	return number * number;
}

//SECTION 5 - VIDEO 4 (Parameter Passing: Pass-by-Value and Pass-by-Reference)
void ValueChanged1(int someNum)
{
	someNum = 100;
}

void ValueChanged2(int& someNum)
{
	someNum = 100;
	cout << "Inside ValueChanged2 function, someNum is: " << someNum << endl;
}

//SECTION 5 - VIDEO 4 (Parameter Passing: Pass-by-Value and Pass-by-Reference) - CHALLENGE
void ThreeTimesN(int input, int& output)
{
	output = input * 3;
}