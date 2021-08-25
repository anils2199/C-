#include <iostream>
using namespace std;
int main () {
	int x = 1;
	double S = 0.01;
	cout << "This program indicates a salary being multiplied until a certain level" << endl;
	cout <<"Day	Salary"<< endl;
	while (S < 10600) {
		cout << x << "	" << S << endl;
		x++;
		S = S * 2;
	}
	cout << endl;
	cout << "It would take " << x - 1 << " days to exceed 10000" << endl;
	cout << endl;	
	cout << "Thank you" << endl;
	return 0;
}


