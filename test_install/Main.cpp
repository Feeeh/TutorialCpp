#include <iostream>
#include <string>

using namespace std;

int main()
{
	//SECTION 2 - VIDEO 3 (Variables and Data Types part 1)
	int myInt;
	myInt = 15;
	double myDouble = 3.14159;
	double stateTaxRate = 0.06;

	//SECTION 2 - VIDEO 4 (Variables and Data Types part 2)
	char singleChar = 'a';
	string myName = "Felipe";

	//SECTION 2 - VIDEO 5 (Variables and Data Types part 3)
	bool isRaining = false;
	bool isSunny = true;
	bool isWarm = false;

	//SECTION 2 - VIDEO 6 AND 7 (Comments AND Arithmetic Operators)
	/*
		Arithmetic Operators
		+	addition operator
		-	subtraction operator
		*	multiplication operator
		/	division operator
		%	modulus operator
	*/
	int a = 10;
	int b = 3;
	int sum = a + b;
	int difference = a - b;
	int product = a * b;
	int quotient = a / b;
	int remainder = a % b;
	int result = 10;
	result += 10; //result = result + 10;
	int myIntb = 5;

	//SECTION 2 - VIDEO 7 (Arithmetic Operators) - CHALLENGE
	//Declare a variable myNum = 10. Increase myNum by 5. Double myNum 3 times in different lines. Print it.
	int  myNum = 10;
	myNum += 5;
	myNum *= 2;
	myNum *= 2;
	myNum *= 2;

	//SECTION 2 - VIDEO 8 (Relational Operators)
	/*
		Relational Operators
		>	greater than
		>=	greater than or equal to
		<	less than
		<=	less than or equal to
		==	equal-to (equality)
		!=	not equal-to (equality)
	*/
	int c = 15;
	int d = 20;
	bool areEqual = a == b;

	//SECTION 2 - VIDEO 8 (Relational Operators) - CHALLENGE
	//Declare age to actual age. Print the comparison of my age with 21.
	int age = 23;

	//SECTION 2 - VIDEO 9 (Logical Operators)
	bool isRaining2 = false;
	bool isWarm2 = true;

	////////////////////////////////////////////////////////////////////////////////////////////////////////

	//SECTION 2 - VIDEO 2 (Saying Hello to C++)
	cout << "Hello World!" << endl;

	//BREAK
	cout << "" << endl;
	cout << "" << endl;

	//SECTION 2 - VIDEO 3 (Variables and Data Types part 1)
	cout << myInt << endl;
	cout << myDouble * stateTaxRate << endl;

	//BREAK
	cout << "" << endl;
	cout << "" << endl;

	//SECTION 2 - VIDEO 4 (Variables and Data Types part 2)
	cout << singleChar << endl;
	cout << "Hello " << myName << endl;

	//BREAK
	cout << "" << endl;
	cout << "" << endl;

	//SECTION 2 - VIDEO 5 (Variables and Data Types part 3)
	cout << boolalpha; //boolalpha makes bool true or false instead of 1 or 0 -- ENTIRE PROJECT
	cout << isRaining << endl;
	cout << isSunny << endl;
	cout << isWarm << endl;

	//BREAK
	cout << "" << endl;
	cout << "" << endl;

	//SECTION 2 - VIDEO 7 (Arithmetic Operators)
	cout << "Sum = " << sum << endl;
	cout << "Difference = " << difference << endl;
	cout << "Product = " << product << endl;
	cout << "Quotient = " << quotient << endl;
	cout << "Remainder = " << remainder << endl;
	cout << "Result = " << result << endl;
	cout << "myIntb = " << myIntb << endl;
	myIntb++; //Increments 1
	cout << "myIntb = " << myIntb << endl;
	myIntb--; //Decrements 1
	cout << "myIntb = " << myIntb << endl;

	//SECTION 2 - VIDEO 7 (Arithmetic Operators) - CHALLENGE
	cout << "myNum = " << myNum << endl;

	//BREAK
	cout << "" << endl;
	cout << "" << endl;

	//SECTION 2 - VIDEO 8 (Relational Operators)
	cout << boolalpha; //It's there already, but so I don't forget about it.
	cout << (c < d) << endl;
	cout << (areEqual) << endl;

	//SECTION 2 - VIDEO 8 (Relational Operators) - CHALLENGE
	cout << "Is my age >= than 21? " << (age >= 21) << endl;

	//BREAK
	cout << "" << endl;
	cout << "" << endl;

	//SECTION 2 - VIDEO 9 (Logical Operators)
	cout << boolalpha; //It's there already, but so I don't forget about it.
	cout << "AND: " << (isRaining2 && isWarm2) << endl;
	cout << "OR: " << (isRaining2 || isWarm2) << endl;
	cout << "NOT: " << (!isRaining2) << endl;

	return 0;
}