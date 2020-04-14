//============================================================================
// Nicholas Baez       : ABA.cpp
// Author      : Nick
// Version     :
// Copyright   : Your copyright notice
// Description : Airgead Banking App in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	//cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	//return 0;

	double initInvAm,monDep,anuInt,months,years;
	double totalAm,intAmt,yearTotInt;

	cout << "*************************" << endl;
	cout << "*************** Data Input ***************" << endl;
	cout << "Initial Investment Amount: " << endl;
	cout << "Monthly Deposit: " << endl;
	cout << "Annual Interest: " << endl;
	cout << "Number of years: " << endl;

	system("PAUSE");

	cout << "**************************" << endl;
	cout << "*************** Data Input ***************" << endl;
	cout << "Initial Investment Amount: $" << endl;
	cin >> initInvAm;
	cout << "Monthly Deposit: $";
	cin >> monDep;
	cout << "Annual Interest: %";
	cin >> anuInt;
	cout << "Number of years: ";
	cin >> years;
	months = years * 12;

	system("PAUSE");

	totalAm = initInvAm;

	cout << endl << "Balance and Interest Without Additional Monthly Deposits << endl";
	cout << "===================================================";
	cout << "Year\t\tYear End Balance\tYear End Earned Interest << endl";
	cout << "-------------------------------------------------- << endl";


	for (int i = 0; i < years; i++) {

		intAmt = (totalAm) * ((anuInt / 100));

		totalAm = totalAm + intAmt;

		//cout << (i + 1) << \t\t$ << fixed << setPrecision(2) << totalAm << \t\t\t$ << intAmt << endl;

	}

	totalAm = initInvAm;

	cout << "\n\nBalance and Interest With Additional Monthly Deposits << endl";
	cout << "==================================================";
	cout << "Year\t\tYear End Balance\tYear End Earned Interest << endl";
	cout << "--------------------------------------------------";

	for (int i = 0; i < years; i++) {

		yearTotInt = 0;

		for (int j = 0; j < 12; j++) {

			intAmt = (totalAm + monDep) * ((anuInt / 100) / 12);

			yearTotInt = yearTotInt + intAmt;

			totalAm = totalAm + monDep + intAmt;
		}

		//cout << (i + 1) << "\t\t$ << fixed << setPrecision(2) << totalAm << "\t\t\t$" << yearTotInt << endl";

		}
		return 0;

	}


