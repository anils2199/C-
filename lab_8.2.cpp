#include <iostream>
using namespace std;
int main() {
	int Num, Square, Inc;
	cout << "This Program asks the user input an integer above 100, and prints all integers whose square is less than the user's provided integer."<<endl;
	Square = 1;
	Inc = 1;
	cout << "Please enter an integer above 100."<< endl;
	cin >> Num;
	while (Inc * Inc <= Num) {
		Square = Inc * Inc;
		cout << Inc << "^2 = " << Square << endl;
		Inc ++;
	}
	cout << "Thank You." << endl;
	return 0;
}

