#include <iostream> 
using namespace std;
int main () {
	int Num, Point;
	cout << "This Program provides the user with 20 multiples of the entered integer." <<endl;
	cout << "Please enter the integer the user wishes to test." << endl;
	cin >> Num;
	Point = 1;
	cout << "The multiples of your entered integer are:" << endl;
	while (Point < 21) {
		cout << Num * Point << " ";
		Point ++;
	}
	cout << endl;
	cout << "Thank you." << endl;
	return 0;
}
