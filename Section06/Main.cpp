#include <iostream>
#include <string>
#include "House.h"

using namespace std;

/*
	Create a function to print the House data!
		-> Write a function
			- Takes a House object as a parameter
			- Prints out the color, number of stories and number of windows
			- Call the function from the main function
		-> This challenge is about refactoring our current code!
*/
//void theHouse(const House& house);

int main()
{
	House myHouse;
	House yourHouse;

	myHouse.setNumStories(2);
	myHouse.setNumWindows(6);
	myHouse.setColor("red");

	yourHouse.setNumStories(3);
	yourHouse.setNumWindows(10);
	yourHouse.setColor("blue");

	myHouse.print();

	cout << endl << endl;

	yourHouse.print();

	return 0;
}