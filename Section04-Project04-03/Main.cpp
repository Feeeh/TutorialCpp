#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	/*
		Weight Tracking
			-> Use technique called parallel arrays (more correctly, parallel vectors)
				-> Common technique to represent entities at corresponding indices, using more than one array or vector
			-> We use 2 different vectors
				-> One for names, one for weights
			-> Prompt the user for the names and weights of 5 different people
			-> Print out sentences for each person ("{name} weights {weight} kgs")
			-> Hint: use cin.get() for CONSUMING the newline character after obtaining weights, before obtaining the next name
	*/

	const int NUM_PEOPLE = 5;

	vector<string> name;
	vector<int> weight;

	string inputName;
	int inputWeight;

	////////////////////////////////////////////////////////////////////////////////////////////////////////

	for (int i = 0; i < NUM_PEOPLE; i++) {
		cout << "Write a full name" << endl;
		getline(cin, inputName);
		cout << "Write a weight" << endl;
		cin >> inputWeight;

		name.push_back(inputName);
		weight.push_back(inputWeight);

		cin.get();

		cout << endl;
	}

	for (int i = 0; i < NUM_PEOPLE; i++) {
		cout << name[i] << " weights " << weight[i] << " kgs." << endl;
	}

	return 0;
}