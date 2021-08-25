#include <iostream>
using namespace std;
int main () {
	int num, smallest;
	cout << "Please enter a large integer. ";
	cin >> num;
	smallest = num;
	for (int n = 0 ; n < 3 ; n++) {
		cout << "Please enter an smaller integer than " << num << ". " ;
		cin >> num;
		if (num >= smallest) {
			cout << "Goodbye." ;
			n = n + 6;
		} else {
			cout << "Please enter an smaller integer than " << num << ". " ;
			cin >> num;
			smallest = num;
			n++;
		}
	}
	cout << "Thank you." ;
	return 0;
}
