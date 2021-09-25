#include <iostream>
#include "Rectangle.h"

using namespace std;

int main()
{
	Rectangle r1;
	Rectangle r2(5.0, 2.0);

	cout << "R1 area is: " << r1.area() << endl;
	cout << "R2 area is: " << r2.area() << endl;

	r1.setLength(22);
	r1.setWidth(12);

	cout << "R1 lenght is now: " << r1.getLength() << endl;
	cout << "R1 width is now: " << r1.getWidth() << endl;
	cout << "R1 area is now: " << r1.area() << endl;
	cout << "R1 perimeter is: " << r1.perimeter() << endl;

	return 0;
}