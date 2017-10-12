/* Overall changes: 
Added date
Comments on printing ascending, descending, and neither to clarify what happens
Altered the ints to decrease the amount of lines
Comments on cin and pause to clarify what happens
Added comments for what is included in the libraries
*/

/*
Ved Nigam-Period 3-Computer Science 1 October 5, 2017
In this assignment, we will split a 3 digit number into 3 different numbers with the same characters as the 3 digit number. We will then run a tets to see if the numbers are
"Descending," "Ascending," or "Neither."
*/
// Added date

//Libraries
#include <iostream> // gives access to cin, cout, endl, <<, >>, boolalpha, noboolalpha 
#include <conio.h> // gives access to _kbhit() and _getch() for pause()
// Added comments

//Namespaces
using namespace std;

//Functions
void pause() {
	cout << "Press Any Key to Continue . . .";
	while (!_kbhit());
	_getch();
	cout << '\n';
}

void main() {
	for (int i = 0; i < 30; i++) {
		int x;

		cout << "Enter a 3 Digit Number . . ." << endl;
		cin >> x; // 'x' is the variable that stores the three digit number that the user types in.
		// Added comments 

		int c = x % 10; // Isolates the digit in the 1's place
		int b = x / 10 % 10; // Isolates the digit in the 10th's place
		int a = x / 100; // Isolates the digit in the 100th's place
		// Altered : Placed int c, int b, and int a in one area

		if (a > b && b > c) {
			cout << "Descending" << endl;
		} // If the digits of 'x' are presented in a descending order from left to right, print 'descending'.
		// Added comment for what it does
		else if (a < b && b < c) {
			cout << "Ascending" << endl;
		} // If the digits of 'x' are presented in a ascending order from left to right, print 'ascending'.
		// Added comment for what it does
		else {
			cout << "Neither" << endl;
		} // If the digits of 'x' aren't present in either a descending or ascending order from left to right, print 'neither'
		// Added comment for what it does

		pause(); // Ends function, prints "Press any key to continue..."
		// Added comment for what it does
	}
}



