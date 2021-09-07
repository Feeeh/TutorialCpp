#include <iostream>

using namespace std;

int main()
{
	/*
		Jam of the Month
			-> Users join a club offering jams
			-> They get a certain number of these per month, and extras on top of that cost more

			-> First prompt the user for which package they have
				-> Package A:
					- $8/month
					- Includes 2 jams per month
					- Each additional jam on top of the 2 is $5 each
				-> Package B:
					- $12/month
					- Includes 4 jams per month
					- Each additional jam on top of the 4 is $4 each
				-> Package C:
					- $15/month
					- Includes 6 jams per month
					- Each additional jam on top of the 6 is $3 each

			-> Secondly prompt the user for how many jams they purchased this month, in total
			-> Tell the user the total cost
			-> If jams < monthly package, only own the monthly fee
			-> If jams >, they charge for the monthly fee PLUS the charge for each additional jam at their package's rate
	*/

	char userInput1;
	int userInput2;
	int total = 0;

	////////////////////////////////////////////////////////////////////////////////////////////////////////

	cout << "Please, write your package (A: $8/month, B: $12/month, C: $15/month)" << endl;
	cin >> userInput1;

	cout << "How many jams did you purchased this month?" << endl;
	cin >> userInput2;

	switch (userInput1) {
		case 'A':
		case 'a':
			if (userInput2 <= 2) {
				total = 8;
			}
			else {
				userInput2 -= 2;
				total = 8 + (userInput2 * 5);
			}
			break;
		case 'B':
		case 'b':
			if (userInput2 <= 4) {
				total = 12;
			}
			else {
				userInput2 -= 4;
				total = 12 + (userInput2 * 4);
			}
			break;
		case 'C':
		case 'c':
			if (userInput2 <= 6) {
				total = 15;
			}
			else {
				userInput2 -= 6;
				total = 15 + (userInput2 * 3);
			}
			break;
		default:
			cout << "You didn't choose a package." << endl;
			break;
	}

	cout << "Your total is: $" << total << endl;

	return 0;
}