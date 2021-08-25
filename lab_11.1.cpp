#include <iostream>
using namespace std;
int main () {
	for(int counter = 28, j = 1; counter <388 || j<=10 ;j++){
		cout << counter << " ";
		if (counter % 10 == 7){
			cout << endl;
		}
		counter++;
	}
	return 0;
}
