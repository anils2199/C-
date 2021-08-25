#include <iostream>
using namespace std;
int main () {
	int n;
	int data [100] [100];
	cout << "Please enter an integer (at most 100): ";
	cin >> n;
	for (int r = 0; r < n; r++) {
		cout << "Please enter " << n << " integers: ";
		for (int c = 0; c < n; c++) {
			cin >> data[r][c];
		}
	}
	cout << "The averages of each column are: ";
	for (int v=0; v<n; v++) {
		double avg = 0.0, sum;
		sum = 0;
		for (int g=0; g<n; g++){
			sum+=data[g][v];}
		avg = sum / n;
		cout << avg << " ";}
	return 0;
}
