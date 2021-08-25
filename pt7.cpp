#include <iostream>
using namespace std;

// not sure if I over complicated this by using a funciton that generates the prime number according to position
// on the multiplication table
// I also realized after that the prime20 function should be inside the ptTable function so it's a single function
// I will fix that for phase three of the project since this code outputs correctly

int p;

void prime20(int z) {

	int q, c = 1;
	
	
	for (int n = 1; n < 20; n++){
			

		bool prime = true;
	

		for (double d = 2; d < n-1; d++){
				
			q = n/d*10;

			if (q % 10 == 0){
				prime = false;
				d = n;
			}
		}
		if (prime == true){
			p = n;
			
			//cout << x << ", ";
			
			c++;
			if (c >= z){
				break;
			}
			//cout << c << "|" ;
					
		}

	}
	//cout << p;
	
}	

void pmTable() {
	
	for (int y = 2; y <= 10; y++){
		for (int x = 2; x <= 10; x++){
			
			
			prime20(x);
			int px = p;
			prime20(y);
			int py = p;
			int prdct = px * py;

			if (prdct % 10 == 9){
				cout << "pop ";
			}else{
				if (prdct < 10){
					cout << prdct << "   ";
					
				}else if (prdct < 100){
					cout << prdct << "  ";
				}else{
					cout << prdct << " ";
				}
			}
			if (x == 10){
				cout << endl;
			}
		}	
	}

}

int main() {
	pmTable();
	return 0;
}

