#include <iostream>
#include <string>
#include <array>
#include <vector>

using namespace std;

int main()
{
	//SECTION 4 - VIDEO 2 (Built-in Arrays)
	const int ARRAY_SIZE = 5;
	int myArray[ARRAY_SIZE]; //count the indexes from 0
	string names[4]{ "Bob", "Sally", "John", "Ed" };

	//SECTION 4 - VIDEO 2 (Built-in Arrays) - CHALLENGE
	/*
		MoreArrayFun
			-> Use a regular loop to populate an array
				-> Array size should be 10
				-> Populate the array with the numbers 1 through 10
			-> With a separate loop, print out the values of the array you just populated
	*/
	const int CHALLENGE_ARRAY_SIZE = 10;
	int challengeArray[CHALLENGE_ARRAY_SIZE];

	//SECTION 4 - VIDEO 3 (The Array Class)
	array<int, 5> myIntArray{};			//Empty curly brackets makes the values of the cells of the array = 0
	//array<int, 5> myIntArray{ 1, 2 };	//If initialized less values than the array size, the values will be assigned to the first cells and the rest = 0

	//SECTION 4 - VIDEO 3 (The Array Class) - CHALLENGE
	/*
		Twice Numbers
			-> int array object of size 10
			-> Regular loop to initialize the array elements to multiples of 2 for the integers 0 through 9
				-> Do NOT manually store the numbers like we did in the example!
			-> Use size() function to your advantage when using the regular for loop
			-> Use a range-based for loop for printing out the elements you stored
	*/
	array<int, 10> myChallengeArray{};

	//SECTION 4 - VIDEO 4 (The Vector Class)
	//Vector is a array without size-limit, it can add more elements
	vector<int> intVec;
	vector<string> stringVec(3);

	//SECTION 4 - VIDEO 4 (The Vector Class) - CHALLENGE
	/*
		VectorPractice
			-> Create a vector and add names of five friends, family, pets - or whatever I want
			-> After adding those five, insert the instructors nmame (John Baugh) as the THIRD element of the vector
			-> After, remove the last element of the vector
			-> Print the elements
	*/
	vector<string> challengeVector;

	//SECTION 4 - VIDEO 5 (Multi-dimension Arrays)
	int myNums[2][3]{
		{1, 2, 3},
		{4, 5, 6}
	};
	//SECTION 4 - VIDEO 5 (Multi-dimension Arrays) - CHALLENGE
	/*
		2DArrayFun extension
			-> Add new lines
			-> Use a nested loop to print the numbers in the 2d array above backwards
	*/

	////////////////////////////////////////////////////////////////////////////////////////////////////////

	//SECTION 4 - VIDEO 2 (Built-in Arrays)
	myArray[0] = 15;
	myArray[1] = 20;
	myArray[2] = 22;
	myArray[3] = 13;
	myArray[4] = 6;

	for (int i = 0; i < ARRAY_SIZE; i++) {
		cout << myArray[i] << endl;
	}

	cout << endl;

	/*for (int i = 0; i < 4; i++) {
		cout << names[i] << endl;
	}*/

	for (auto name : names) {	//auto = let the compiler figure the variable type.
		cout << name << endl;	//name : names = read as name in names.
	}

	//BREAK
	cout << endl << endl;

	//SECTION 4 - VIDEO 2 (Built-in Arrays) - CHALLENGE
	for (int i = 0; i < CHALLENGE_ARRAY_SIZE; i++) {
		challengeArray[i] = i + 1;
	}

	for (int number : challengeArray) {
		cout << number << endl;
	}

	//BREAK
	cout << endl << endl;

	//SECTION 4 - VIDEO 3 (The Array Class)
	myIntArray[0] = 2;
	myIntArray[1] = 5;
	myIntArray[2] = 10;
	myIntArray[3] = 1;
	myIntArray[4] = 17;

	for (int a : myIntArray) {
		cout << a << endl;
	}

	cout << "size of the array: " << myIntArray.size() << endl;

	cout << endl;

	//section 4 - video 3 (the array class) - challenge
	for (int i = 0; i < myChallengeArray.size(); i++) {
		myChallengeArray[i] = i * 2;
	}

	for (int numbers : myChallengeArray) {
		cout << numbers << endl;
	}

	//SECTION 4 - VIDEO 4 (The Vector Class)
	intVec.push_back(1);	//.push_back add to the end of the vector
	intVec.push_back(2);
	intVec.push_back(3);

	cout << "intVec size: " << intVec.size() << endl;

	stringVec[0] = "John";
	stringVec[1] = "Bob";
	stringVec[2] = "Sally";

	stringVec.push_back("Shannon");

	for (int val : intVec) {
		cout << val << endl;
	}

	cout << endl;

	for (string name : stringVec) {
		cout << name << endl;
	}

	cout << endl;

	cout << "Front and back: " << endl;
	cout << "Front: " << stringVec.front() << endl;	//.front() gets the value of the first cell of the vector
	cout << "Back: " << stringVec.back() << endl;	//.back() gets the value of the last cell of the vector

	stringVec.pop_back();							//.pop_back() removes the last cell of the vector
	stringVec.insert(stringVec.begin(), "Don");		//.insert inserts a value in a specific location of the vector
													//.begin() gets the number of the first cell of the vector

	cout << "Now, front is: " << stringVec.front() << endl;
	cout << "Now, back is: " << stringVec.back() << endl;

	//BREAK
	cout << endl << endl;

	//SECTION 4 - VIDEO 4 (The Vector Class) - CHALLENGE
	challengeVector.push_back("Felipe");
	challengeVector.push_back("Gustavo");
	challengeVector.push_back("Gabriel");
	challengeVector.push_back("Zelda");
	challengeVector.push_back("Vinicius");

	challengeVector.insert(challengeVector.begin() + 2, "John Baugh");
	challengeVector.pop_back();

	for (string val : challengeVector) {
		cout << val << endl;
	}

	//SECTION 4 - VIDEO 5 (Multi-dimension Arrays)
	cout << myNums[0][2] << endl;

	myNums[1][0] = 14;

	cout << myNums[1][0] << endl;

	for (int row = 0; row < 2; row++) {
		for (int col = 0; col < 3; col++) {
			cout << myNums[row][col] << " ";
		}
		cout << endl;
	}

	//SECTION 4 - VIDEO 5 (Multi-dimension Arrays) - CHALLENGE
	cout << endl;

	for (int row = 1; row >= 0; row--) {
		for (int col = 2; col >= 0; col--) {
			cout << myNums[row][col] << " ";
		}
		cout << endl;
	}

	return 0;
}