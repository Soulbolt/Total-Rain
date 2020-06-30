// sentinel.cpp : This file contains the 'main' function. Program execution begins and ends there.
//This program illustrates the use of a sentinel in a while loop.
//The user is asked for monthly rainfall totals until a sentinel
//value of -1 is entered. Then the total rainfall i displayed.

//Cesar Cervantes

#include <iostream>
using namespace std;

int main()
{
	//Fill in the code to define and initialize to 1 the variable month
	float total = 0, rain;
	int month = 1;

	cout << "Enter the total rainfall for month " << month << endl;
	cout << "Enter -1 when you are finished" << endl;
	cin >> rain;
	//Fill in the code to start a while loop that iterates
	//while rain does not equal -1
	while (rain != -1) {
		//Fill in the code to update total by adding it to rain
		//Fill in the code to increment month by one
		total = total + rain;
		month++;

		cout << "Enter the total rainfall in inches for month " << month << endl;
		cout << "Enter -1 when you are finished" << endl;
		//Fill in the code to read in the value for rain
		cin >> rain;
	}

	if (month == 1)
		cout << "No data has been entered" << endl;

	else
		cout << "The total rainfall for the " << month-1 << " months is " << total << " inches." << endl;

	return 0;
}

//Response to Exercise 5: Calculations are correct, if -1 is entered first the program ends with message of "no data has been entered."
//if only Zeros are entered or some, it will calculate correctly, if long numbers are entered program will calculate as 1.123456 even
//even when decimals are not used.
//Response to Exercise 6: the purpose of the code above is to reflect no value was entered and program was simply terminated.
//Otherwise, print the accumulated value of rain over the months entered.


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
