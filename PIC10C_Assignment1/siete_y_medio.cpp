#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>
#include "cards.h"
using namespace std;

// Global constants (if any)


// Non member functions declarations (if any)


// Non member functions implementations (if any)


// Stub for main
int main() {
	/* --STATEMENTS-- */
	Player you(100);
	Player dealer(900);
	//while (you.returnmoney() > 0 && dealer.returnmoney() > 0)
	//{
		int bet = 0;
		char answer = 'y';
		cout << "you have $" << you.returnmoney() << ".  Enter bet: ";
		cin >> bet;
		cout << "\nYour cards: ";
		Hand yourhand;
		cout << "\nyour total is :" << yourhand.returntotalrank();
		cout << "    Do you want another card? (y/n):";
		cin >> answer;

		while (answer == 'y')
		{
			cout << "\n new card: \n";
			yourhand.addcard();
			cout << "\n your cards: \n";
				//insert print cards here
			cout << "\n your total is: " << yourhand.returntotalrank();
			cout << "    Do you want another card? (y/n):";
			cin >> answer;
		}
		cin.get();
		cin.get();



	/*}*/
	return 0;
}