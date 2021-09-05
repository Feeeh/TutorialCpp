#include <iostream>
#include <string>

using namespace std;

int main()
{
	//SECTION 3 - VIDEO 2 (Introductions to Control Statements)
	int age = 15;

	//SECTION 3 - VIDEO 3


	////////////////////////////////////////////////////////////////////////////////////////////////////////

	//SECTION 3 - VIDEO 2 (Introductions to Control Statements)
	cout << age << endl; //Sequencial Statement

	if (age >= 18) //Selection Statement (Or Skipping)
	{
		cout << "You can drive!" << endl;
	}
	else
	{
		cout << "You cannot drive yet!" << endl;
	}

	for (int i = 1; i <= age; i++) //Repetition Statement
	{
		cout << "Happy Birthday! " << i << endl;
	}

	//BREAK
	cout << "" << endl;
	cout << "" << endl;

	//SECTION 3 - VIDEO 3


	return 0;
}