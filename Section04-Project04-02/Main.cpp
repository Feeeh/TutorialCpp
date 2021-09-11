#include <iostream>
#include <vector>

using namespace std;

int main()
{
	/*
		Vector Data
			-> Very similar to last project
				-> User input
				-> Only accept negative numbers
				-> Store them in a vector
				-> End the loop when a user enters a negative number
				-> Print twice the value of the elements in the loop

			-> Hint: Do a priming read before a while loop.
	*/

	vector<int> myVector;
	int input;

	////////////////////////////////////////////////////////////////////////////////////////////////////////

	cout << "Write a number and exit writting a negative number." << endl;
	cin >> input;

	while (input >= 0)
	{
		myVector.push_back(input);

		cout << "Write a number and exit writting a negative number." << endl;
		cin >> input;
	}

	cout << endl;

	for (int val : myVector) {
		cout << val * 2 << endl;
	}

	return 0;
}