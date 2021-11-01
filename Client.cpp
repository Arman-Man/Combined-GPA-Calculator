#include <iostream>
#include "CombinedGpa.h"
#include <iomanip>
using namespace std;

int main() {
	int size;
	char choice;
	double doubleInput;

	do {

		cout << "Average GPA Calculator\n"
			<< "----------------\n"
			<< "1) Calculate Average GPA\n"
			<< "q) Quit program" << endl;
		cin >> choice;

		if (choice == '1') {

			cout << "\nEnter the number of colleges you've attended: ";
			cin >> size;

			CombinedGpa calculator(size);

			cout << "\nIMPORTANT: ALL UNITS MUST BE OF THE SAME UNIT SYSTEM (Quarter or Semester)" << endl;
		
			for (int i = 0; i < size; i++) {
				cout << "\nPlease enter the # of units for school #" << i + 1 << ": ";
				cin >> doubleInput;
				calculator.setUnits(size, doubleInput, i);
			}

			for (int i = 0; i < size; i++) {
				cout << "\nPlease enter the GPA for school #" << i + 1 << ": ";
				cin >> doubleInput;
				calculator.setGpa(size, doubleInput, i);
			}

			cout << "\n\nCombined GPA is: " << fixed << setprecision(2)
				<< calculator.calcCombinedGpa() << "\n\n" << endl;

		}
		else if (choice == 'q' || choice == 'Q') {
			cout << "\nYou have chosen to quit the program." << endl;
		}
		else {
			cout << "\nInvalid choice. Please try again\n" << endl;
		}

	} while (choice != 'q' && choice != 'Q');

	system("PAUSE");
	return 0;
}