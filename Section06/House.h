#ifndef HOUSE_H
#define HOUSE_H

#include <iostream>
#include <string>

using namespace std;

class House
{
	public:
		House();

		~House();

		//Constructor with 3 parameters
		House(int numStories, int numWindows, string color);

		void setNumStories(int numStories);

		void setNumWindows(int numWindows);

		void setColor(string color);

		int getNumStories() const;

		int getNumWindows() const;

		string getColor() const;

		void print() const;

	private:
		int numStories;
		int numWindows;
		string color;
};

#endif