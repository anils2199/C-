#include <iostream>
using namespace std;
int main () {
	int Num , Sum, Avg, Inc;
	cout << "This Program Asks the User for input of a Numerical list of grades and produces an Average." << endl;
	cout << "Please input the First Grade, Upon completion of the list please enter a negative value." << endl;
	cin >> Num;
	Sum = 0;
	while (Num >= 0) {
		Sum = Sum + Num;
		Inc++;
		cout << "Next?" << endl;
		cin >> Num;
	}
	cout << "The average score is " << (Sum / Inc) << "." << endl;
	return 0;
}
		
