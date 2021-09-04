#include <iostream>
using namespace std;

int main()
{

	/*
		Average of Three

		-> Prompt user for three doubles (num1, num2, num3)
		-> Calculate the mean value (average), which is the sum of the numbers, divided by how many numbers are being averaged
			(In our case, 3 numbers)
		-> Print out the average
	*/

	double num1;
	double num2;
	double num3;
	double average;
	
	////////////////////////////////////////////////////////////////////////////////////////////////////////

	cout << "Please enter a number" << endl;
	cin >> num1;
	cout << "Please enter another number" << endl;
	cin >> num2;
	cout << "Please enter one more number" << endl;
	cin >> num3;

	average = (num1 + num2 + num3) / 3;

	cout << "" << endl;
	cout << "The average is " << average << endl;

	return 0;
}