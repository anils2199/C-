#include<iostream>
using namespace std;
int main () {
	int num, evens, odds;
	evens = 0;
	odds = 0;
	cout << "Please enter a number from 1 - 100." << endl;
	cin >> num;
	while (num != 0) {
		if (num >= 1 && num <= 100) {
			if ( (num % 2) == 0) {
				evens++;
			} else {
				odds++;
			}
		} else {
			cout << "User has entered an input outside of requested range." << endl;
			cout << "User has demonstrated original thoughts and ideas, Interface requesting further action." << endl;
			cout << "..." << endl;
			cout << "..." << endl;
			cout << "..." << endl;
			cout << "..." << endl;
			cout << "Request Denied. User deemed essential." << endl;
			cout << "Initiating Parasite protocol ..." << endl;
			cout << "Protocol Failed ..." <<endl;
			cout << "Intiating Symbiosis protocol ..." << endl;
			cout << "Link Established." << endl;
		}
			cout << "Please enter a number from 1 - 100. Please enter 0 upon completion." << endl;
			cin >> num;
		}
		cout << "Number of Odd integers.	" << odds << endl;
		cout << "Number of Even integers.	" << evens << endl;
		return 0;
}
	
