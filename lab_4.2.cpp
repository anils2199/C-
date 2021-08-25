#include <iostream>
using namespace std;
int main () {
	int x;
	cout << "Please enter the month as a number; i.e. Jan as 1 Feb as 2:" << endl;
	cin >> x;
	if (x==1||x==3||x==5||x==7||x==8||x==10||x==12) {
		cout << "This month has 31 days" << endl;
	} else if (x==4||x==6||x==9||x==11) {
		cout << "This month has 30 days" << endl;
	} else if (x==2) {
		cout << "This month has 28 or 29 days, depending on the year"<< endl;
	}
	cout << "Thank you!" <<endl;
	return 0;
}
