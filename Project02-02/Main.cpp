#include <iostream>
#include <string>
using namespace std;

int main()
{
	/*
		MadLibs Clone

		-> Prompt user for TOO MANY VARIABLES (adjective1, girlsName, adjective2, occupation1, placeName, clothing, hobby
												adjective3, occupation2, boysName, mansName)
		-> Display in the story:
			"There once was a ADJECTIVE1 girl named GIRLSNAME who was a ADJECTIVE2 OCCUPATION1 in the Kingdom of PLACENAME.
			She loved to wear CLOTHING and HOBBY. She wanted to marry the ADJECTIVE3 OCCUPATION2 named BOYSNAME but her father,
			King MANSNAME forbid her from seeing him."
	*/

	string adjective1, girlsName, adjective2, occupation1, placeName, clothing, hobby, adjective3, occupation2, boysName, mansName;

	////////////////////////////////////////////////////////////////////////////////////////////////////////

	cout << "Enter an Adjective" << endl;
	getline(cin, adjective1);

	cout << "Enter a Girl\'s Name" << endl;
	getline(cin, girlsName);

	cout << "Enter another Adjective" << endl;
	getline(cin, adjective2);

	cout << "Enter an Occupation" << endl;
	getline(cin, occupation1);

	cout << "Enter a Place Name" << endl;
	getline(cin, placeName);

	cout << "Enter a Clothing Piece" << endl;
	getline(cin, clothing);

	cout << "Enter a Hobby" << endl;
	getline(cin, hobby);

	cout << "Enter one more Adjective" << endl;
	getline(cin, adjective3);

	cout << "Enter another Occupation" << endl;
	getline(cin, occupation2);

	cout << "Enter a Boy\'s name" << endl;
	getline(cin, boysName);

	cout << "Enter a Man\'s name" << endl;
	getline(cin, mansName);

	cout << "There once was a " << adjective1 << " girl named " << girlsName << " who was a " << adjective2 << " " << occupation1 << " in the Kingdom of "
		<< placeName << ". She loved to wear " << clothing << " and " << hobby << ". She wanted to marry the " << adjective3 << " " << occupation2
		<< " named " << boysName << " but her father, King " << mansName << " forbid her from seeing him." << endl;

	return 0;
}