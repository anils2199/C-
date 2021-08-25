#include <iostream>
using namespace std;
int main () {
	int num1, num2;
	cout << "Please enter two positive integers." << endl;
	cin >> num1;
	cin >> num2;
	while (num1 < 0 || num2 < 0) {
		cout << "No, Try again." << endl;
		cin >> num1;
		cin >> num2;
	}
	if (num1 <= num2) {
		for (int c = 0;c < num1; c++) {
		       cout << "X" ;
		}
	} else { 	
		for (int c = 0; c < num2; c++) {
			cout << "X" ;
		}
	}
	cout << "	" << endl;
	cout << "Thank you." << endl;
	return 0;
}	
