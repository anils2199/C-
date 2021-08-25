#include <iostream> 
#include <cmath>
using namespace std;
int main () {
	double num,result,g;
	int r = 10;
	cout << "Please enter an integer between 1 and 20. " ;
	cin >> num;
	cout << endl;
	if (num > 20 || num < 1) {
	       for (int n = 1 ;n <= 10 ; n++){
		       cout << "No please try again. I require an integer between 1 and 20. " ;
		       cin >> num;
		       if (num <= 20 && num >= 1) {
			       n = 11;
		       }
		       g = n;
	       }
	       if (g == 10) {
		       num = r;
		       cout << "You failed an integer input task 10 times. The cube of your score is " << pow(num, 3);
	       } else {
		       result = pow(num,3);
		       cout << "Your reult is " << result << "." << endl;
	       }
	}else {
	result = pow(num,3);
	cout << "Your result is " << result << "." << endl; }
	return 0;
}

		
