#include <iostream>

using namespace std;

int main()
{
	/*
		Odds and Evens
			-> Loop through integers 0 to 50 (Inclusive)
			-> "____ is odd" or "____ is even"
	*/

	////////////////////////////////////////////////////////////////////////////////////////////////////////

	for (int i = 0; i <= 50; i++) {
		if (i == 0) {
			cout << i << " is ????." << endl;
		}
		else if (i % 2 == 0) {
			cout << i << " is even." << endl;
		}
		else {
			cout << i << " is odd." << endl;
		}
	}

	return 0;
}