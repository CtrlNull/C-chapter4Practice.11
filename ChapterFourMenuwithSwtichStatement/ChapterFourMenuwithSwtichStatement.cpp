// ChapterFourMenuwithSwtichStatement.cpp : Defines the entry point for the console application.

/*
	This program uses a switch statement to determine
	the items selected form a menu
*/

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//----Variables--------------------------------------------------------
	int choice;				// Holds a menu choice
	int months;				// To hold the number of months
	double charges;			// To hold the monthly charges

	//--Constants for membership rates
	const double	ADULT = 40.0,
					CHILD = 20.0,
					SENIOR = 30.0;

	//--Constants for menu choices
	const int	ADULT_CHOICE = 1,
				CHILD_CHOICE = 2,
				SENIOR_CHOICE = 3,
				QUIT_CHOICE = 4;

	//----Display the menu and get a choice---------------------------------
	cout	<< "\t\Health Club Membership Menu\n \n"
			<< "1. Standard Adult Membership\n"
			<< "2. Child Membership\n"
			<< "3. Senior Citizen Membership\n"
			<< "4. Quit the Program\n \n"
			<< "Enter your choice: ";
	cin >> choice;

	//--Display(set) the numeric output formatting
	cout << fixed << showpoint << setprecision(2);
	
	//--Respond to user's menu selection-------------------------------------
	switch (choice)
	{
	case ADULT_CHOICE:
		cout << "For how many months? ";
		cin >> months;
		//--EQ
		charges = months * ADULT;
		cout << "The total charges are $" << charges << endl;
		break;

	case CHILD_CHOICE:
		cout << "For how many months? ";
		cin >> months;
		//--EQ
		charges = months * CHILD;
		cout << "The total charges are $" << charges << endl;
		break;

	case SENIOR_CHOICE:
		cout << "For how many months? ";
		cin >> months;
		//--EQ
		charges = months * SENIOR;
		cout << "The total charges are $" << charges << endl;

	case QUIT_CHOICE:
		cout << "Program ending. \n";
		break;

	default:
		cout << "the valid choices are one through four. Run the\n"
				<< "program again and select one of those.\n";
	}
    return 0;
}

