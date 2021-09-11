#include <iostream>
#include <array>

using namespace std;

int main()
{
	/*
		Array Data
			-> Read in five integers into the array
			-> Loop through the array of integers and print twice their amount
	*/

	array<int, 5> arrayInt{};

	////////////////////////////////////////////////////////////////////////////////////////////////////////

	for (int i = 0; i < 5; i++) {
		cout << "Write a number: " << endl;
		cin >> arrayInt[i];
	}

	cout << endl;

	for (int val : arrayInt) {
		cout << val * 2 << endl;
	}

	return 0;
}