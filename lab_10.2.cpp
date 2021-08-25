#include <iostream> 
using namespace std;
int main () {
	int num;
	cout << "Please enter the grid size requested by entering a single positive odd integer." ;
	cin >> num;
	while (num%2 == 0 || num <= 0) {
		cout << "You've failed. Please try again." ;
		cin >> num;
	}
	cout << endl;
	for (int r = 1 ; r <= num ; r++) {
		for ( int c = 1 ; c <= num ; c++){
			if (c == ((num + 1)/2) && r == ((num + 1) / 2)){
				cout << "*" ;
			} else if (r == c && r > ((num/2) + num%2)){
				cout << "x" ;
			} else if ((r+c) == (num +1) && r < (num/2) + num%2){
				cout << "x";
			} else if (r == c && r < ((num/2) + num%2)) {
				cout << "+" ;
			} else if ((r+c) == (num + 1) && r > (num/2) + num%2){
				cout << "+" ;
			} else {
			cout << " ";
			}
		}
		cout << endl;
	}
	return 0;
}
