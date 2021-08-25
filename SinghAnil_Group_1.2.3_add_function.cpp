#include <iostream>
using namespace std;

int validate(int x){
  while (x % 5 != 0 || x< 100 || x>700) {
		if (x%5 != 0 && x<100) {
			cout << "The number entered is not a multiple of 5 and is less than 100. Try again. " << endl;
			cin >> x;
		} else if (x%5 !=0 && x>700) {
			cout << "The number entered is not a multiple of 5 and is greater than 700. Try agian. " << endl;
			cin >> x;
		} else if (x%5 !=0) {
			cout << "The number entered is not a multiple of 5. Try again." << endl;
			cin >> x;
		} else if (x<100) {
			cout << "The number entered is less than 100. Try again. " << endl;
			cin >> x;
		} else if (x>700) {
			cout << "The number entered is greater than 700. Try again. " << endl;
			cin >> x;
		}
	}
  return x;
}
int main () {
	int x;
	cout << "Please enter a number between 100 and 700 that is a multiple of 5." << endl;
	cin >> x;
	x = validate(x);
  cout << "Nice job. That number qualifies." << endl;
	return 0;
}
