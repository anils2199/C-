#include <iostream>
using namespace std;

//void primeMultTable() {

	int p;
	void prime(int z) {
		
		int q, c = 1;

		for (int n = 1; n < 20; n++){

			bool prime = true;

			for (double d = 2; d < n - 1; d++){

				q = n / d * 10;

				if (q % 10 == 0){
				
					prime = false;
					d = n;
				}
			}
			if (prime == true){
				
				p = n;
				c++;

				if (c >= z){
					break;
				}
			}
		}
	}
	void Table() {
		
		for (int y = 2; y <= 10; y++){

			for (int x = 2; x <= 10; x++){

				prime(x);
				int px = p;
				prime(y);
				int py = p;
				int prdct = px * py;

				if (prdct % 10 == 9){	
					cout << "pop ";
				
				}else if (prdct == 1){
					cout << "    ";
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
//}

int main() {

	Table();

	return 0;
}


