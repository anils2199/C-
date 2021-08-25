#include <iostream>
using namespace std;

int main() {
	int b[8][8], r, c=0;
	b[0][0] = 1;
NC:	c++;
	if(c == 8) goto Print;
	r=-1;
NR:	r++;
	if(r==8) goto B;
	//row test
	for (int i = 0; i<c ;i++){
		if(b[r][i]==1) goto NR;
	}
	//up diagonal test
	for(int i = 1;(r-i)>-1 && (c-i)>-1;i++){
		if(b[r-i][c-i]==1) goto NR;
	}
	//Down Diagonal test
	for(int i = 1;(r+i)<=8 && (c-i)>=0;i++){
		if(b[r+i][c-i]==1) goto NR;
	}
	b[r][c] = 1; // place
	goto NC;
B:	c--;
	if(c==-1) return 0;
	r=0;
	while (b[r][c] != 1){
		r++;
	}
	b[r][c] = 0;
	goto NR;
Print:	for (int i=0;i<=7;i++){
		for(int j=0; j<=7; j++){
			cout << b[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	goto B;
}
