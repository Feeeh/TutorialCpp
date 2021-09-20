#include <iostream>

using namespace std;

/*
	Return the Product of Three Parameters
		-> Create a project
		-> Write a function called Multiply
			- 3 parameters: all integers
			- Return an int, which is the product of the 3 parameters
			- Remember: Product = *
*/
int Multiply(int num1, int num2, int num3);

int main()
{
	int result = Multiply(3, 4, 5);
	cout << "The result is: " << result << endl;

	return 0;
}

int Multiply(int num1, int num2, int num3)
{
	return num1 * num2 * num3;
}