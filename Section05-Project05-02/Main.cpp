#include <iostream>

using namespace std;

/*
	Return the Sum of Build-in Array Elements
		-> Create a project
		-> Write a function called SumArray
			- 2 Parameters
				- An array of integers
				- The size of the array (an integer)
			- Iterate through the array, summinng the integers in the array
			- Return the sum of these integers
			- Hint: When you pass a 1d array, you don't need to place the size inside the square brackets in the array parameter
*/
int SumArray(int arrayNum[], int arraySize);

int main()
{
	int myArray[]{ 3, 4, 5, 6, 7 };
	int sumArray = SumArray(myArray, 5);

	cout << "The sum of the array is: " << sumArray << endl;

	return 0;
}

int SumArray(int arrayNum[], int arraySize)
{
	int sum = 0;

	for (int i = 0; i < arraySize; i++) {
		sum += arrayNum[i];
	}

	return sum;
}