#include <iostream>
using namespace std;
int main () {
	int num,counter; 
	cout << "Please enter a positive integer. ";
	cin >> num;
	while (num < 0) {
		cout << "No, Try again." << endl;
		cin >> num;
	}
	int c = num;
	cout << "Now enter " << c << " more integers. " << endl;
	for (int d = 1; d <= c; d++) {
		cin >> num;
		if (num % 2 == 1) {
			counter++;
		}
	}
	cout << "	"<< endl;
	cout << counter << " were odd."<< endl;
	return 0;
}

