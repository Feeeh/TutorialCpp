#include <iostream>
#include <string>

using namespace std;

class House
{
	public:
		void setNumStories(int numStories)
		{
			this->numStories = numStories;
		}

		void setNumWindows(int numWindows)
		{
			this->numWindows = numWindows;
		}

		void setColor(string color)
		{
			this->color = color;
		}

		int getNumStories() const
		{
			return numStories;
		}

		int getNumWindows() const
		{
			return numWindows;
		}

		string getColor() const
		{
			return color;
		}

	private:
		int numStories;
		int numWindows;
		string color;
};

/*
	Create a function to print the House data!
		-> Write a function
			- Takes a House object as a parameter
			- Prints out the color, number of stories and number of windows
			- Call the function from the main function
		-> This challenge is about refactoring our current code!
*/
void theHouse(const House& house);

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

	theHouse(myHouse);

	cout << endl << endl;

	theHouse(yourHouse);

	return 0;
}

void theHouse(const House& house)
{
	cout << "The house is " << house.getColor() << ", has "
		<< house.getNumStories() << " stories and "
		<< house.getNumWindows() << " windows." << endl;
}