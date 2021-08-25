#include <iostream> 
using namespace std;
int main () {
	int n;
	int data [100] [100];
	cout << "Please enter an integer (at most 100): "; // weird place to put this but i apologize for missing the last two labs, there was a death in the family.
	cin >> n;
	for (int r = 0; r < n; r++) {
		cout << "Please enter " << n << " integers: ";
		for (int c = 0; c < n; c++) {
			cin >> data[r][c];
		}
	}
	cout << "The highest value in each row is : ";
	for (int g = 0; g < n ; g++) {
		int max = -999;
		for (int v = 0; v<n; v++) {
			if (data[g][v] > max) max = data[g][v];
		}
		cout << max << " ";
	}
	return 0;
}
