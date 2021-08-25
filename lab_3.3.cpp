#include <iostream>
using namespace std;
int main () {
	int num;
	cout << "Please enter a four-digit number: ";
	cin >> num;
	cout << "The Reverse of your number is: ";
	cout << num % 10;
	num = num / 10;
	cout << num % 10;
	num = num / 10;
	cout << num % 10;
	num = num / 10;	
	cout << num << endl;
	cout << "Thank you!" << endl;
	return 0;
}
