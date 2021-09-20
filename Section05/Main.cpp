#include <iostream>
#include <string>
#include <cmath>

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

//SECTION 5 - VIDEO 5 (Variable Scope and Lifetime)
void SomeFunction(int aParam);
double myGlobalDouble = 3.14159;

//SECTION 5 - VIDEO 5 (Variable Scope and Lifetime) - CHALLENGE
/*
	ScopeChallenge
		-> Create a function called ModifyGlobal
			- void and parameterless
		-> Create a global variable called counter and initialize it to 0
		-> Inside ModifyGlobal, increment counter by 1
		-> Inside main, call ModifyGlobal inside a for loop
			- Iterate 100 times
		-> Print out the value of counter before and after the for loop
*/
void ModifyGlobal();
int counter = 0;

//SECTION 5 - VIDEO 6 (Function Overloading)
//Function overloading creates multiple functions with the same name, but with different signatures
int GetResult(int num1, int num2);
string GetResult(string str1, string str2);

//SECTION 5 - VIDEO 6 (Function Overloading) - CHALLENGE
/*
	Add a function to GetResult
		-> Add an overload of the GetResult function
			- Take a single integer parameter
			- Return the cube (n^3) of the parameter
		-> Call it in main
*/
int GetResult(int num1);

//SECTION 5 - VIDEO 8 (Recursion)
void CountDownFrom(int num);
int SumValues(int num);

//SECTION 5 - VIDEO 8 (Recursion) - CHALLENGE
/*
	FactorialFun Challenge
		-> Create a function called Factorial
		-> Matematical definition of factorial is	n! = n * (n-1)! for n > 1
													1				for n == 1
		-> An iterative approach to the solution would look like:
			- 5! = 5 * 4 * 3 * 2 * 1 = 120
*/
int Factorial(int num);

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

	//BREAK
	cout << endl << endl;

	//SECTION 5 - VIDEO 5 (Variable Scope and Lifetime)
	int localToMain = 20;
	cout << "The localToMain variable is: " << localToMain << endl;
	cout << "The myGlobalDouble (in main) is: " << myGlobalDouble << endl;

	SomeFunction(25);
	SomeFunction(28);
	SomeFunction(32);

	//BREAK
	cout << endl << endl;

	cout << counter << endl;
	for (int i = 0; i < 100; i++) {
		ModifyGlobal();
	}
	cout << counter << endl;

	//BREAK
	cout << endl << endl;

	//SECTION 5 - VIDEO 6 (Function Overloading)
	int resultNum = GetResult(30, 20);
	string resultName = GetResult("Felipe", "Brandao");

	cout << "resultNum is: " << resultNum << endl;
	cout << "resultName is: " << resultName << endl;

	//BREAK
	cout << endl << endl;

	//SECTION 5 - VIDEO 6 (Function Overloading) - CHALLENGE
	int challengeNum = GetResult(3);
	cout << "challengeNum is: " << challengeNum << endl;

	//SECTION 5 - VIDEO 7 (The <cmath> Library)
	//DON'T FORGET TO #include <cmath>
	int powResult = pow(2, 3);		//pow1^pow2 = result;
	int sqrtResult = sqrt(25);		//x*x = sqrtValue;
	int ceilResult = ceil(4.2);		//up the nearest integer
	int floorResult = floor(4.2);	//down the nearest integer

	cout << "2^3 is: " << powResult << endl;
	cout << "Sqrt of 25 is: " << sqrtResult << endl;
	cout << "Ceiling of 4.2 is: " << ceilResult << endl;
	cout << "Floor of 4.2 is: " << floorResult << endl;

	//BREAK
	cout << endl << endl;

	//SECTION 5 - VIDEO 7 (The <cmath> Library) - CHALLENGE
	/*
		Use log2 function!
			-> Use the log2 function to find the binary logarithm of 512, and print that result to the console
			-> Logarithms answer the question, "To what power..."
				- In our case, "To what power would you take 2 in order to get 512 as the answer?"
			-> Print out the result
	*/
	int log2Result = log2(512);
	cout << "To what power would you take 2 in order to get 512 as the answer?" << endl;
	cout << "The answer is: " << log2Result << endl;

	//BREAK
	cout << endl << endl;

	//SECTION 5 - VIDEO 8 (Recursion)
	CountDownFrom(10);

	int totalSum = SumValues(10);
	cout << "The sum is: " << totalSum << endl;

	//BREAK
	cout << endl << endl;

	int factorialOfSix = Factorial(6);
	cout << "Factorial of 6 is: " << factorialOfSix << endl;

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

//SECTION 5 - VIDEO 5 (Variable Scope and Lifetime)
void SomeFunction(int aParam)
{
	int myLocalNum = 100;
	static int myStatic = 500;	//static means that the variable will be "alive" for the entire runtime -- NEED TO DECLARE TO BEHAVE LIKE A STATIC!
	myLocalNum++;
	myStatic++;
	myGlobalDouble++;

	cout << "myLocalNum is: " << myLocalNum << endl;
	cout << "The aParam is: " << aParam << endl;
	cout << "myGlobalDouble (in SomeFuncion) is: " << myGlobalDouble << endl;
	cout << "myStatic value is: " << myStatic << endl;
}

//SECTION 5 - VIDEO 5 (Variable Scope and Lifetime) - CHALLENGE
void ModifyGlobal()
{
	counter++;
}

//SECTION 5 - VIDEO 6 (Function Overloading)
int GetResult(int num1, int num2)
{
	return num1 * num2;
}

string GetResult(string str1, string str2)
{
	return str1 + " " + str2;
}

//SECTION 5 - VIDEO 6 (Function Overloading) - CHALLENGE
int GetResult(int num1)
{
	return num1 * num1 * num1;
}

//SECTION 5 - VIDEO 8 (Recursion)
void CountDownFrom(int num)
{
	if (num >= 0) {
		cout << num << endl;
		CountDownFrom(num - 1);
	}
}

int SumValues(int num)
{
	if (num >= 1) {
		return num + SumValues(num - 1);
	}

	return num;
}

int Factorial(int num)
{
	if (num > 1) {
		num = num * Factorial(num - 1);
	}

	return num;
}
