#include <iostream>
#include <array>

using namespace std;

/*
	Return the Sum of Array Object Elements
		-> Create a project
		-> Write a function called SumArray
			- This time one parameter, the array object
			- The array object itself has two type parameters
				- The data type and the size
			- Same behavior as Project05-02
			- Iterate through the array summing the integers in the array
			- This time make the array size 10
			- You can use a range-based for-loop this time!
			- Return the sum of these integers
*/
int SumArray(array<int, 10> myArray);

/*
	Retrive the Sum of Array Object Elements
		-> Write an overload of function SumArray
			- First parameter: array object of integers
			- Second parameter: reference to integer to store the sum
		-> Same behavior as before
		-> Store the result in the sum
			- Instead of returning the value, we store it in the sum
			- Make sure to include an integer to pass by reference
*/
void SumArray(array<int, 10> myArray, int& sum);

int main()
{
	array<int, 10> myArray{ 2, 3, 4, 5, 6, 7, 1, 2, 3, 4 };
	int sum = SumArray(myArray);

	cout << "The sum of the object array is: " << sum << endl;

	int sumByRef;
	SumArray(myArray, sumByRef);

	cout << "The sum by reference of the object array is: " << sumByRef << endl;

	return 0;
}

int SumArray(array<int, 10> myArray)
{
	int sum = 0;

	for (int nums : myArray) {
		sum += nums;
	}

	return sum;
}

void SumArray(array<int, 10> myArray, int& sum)
{
	sum = 0;

	for (int nums : myArray) {
		sum += nums;
	}
}