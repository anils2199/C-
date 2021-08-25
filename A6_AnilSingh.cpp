#include <iostream>
#include <cmath>

using namespace std;

int main () {
	int q[8],c=0,count=0;
	q[0]=0;
NC:	c++;
	if (c==8) goto Print;
	q[c]=-1;
NR:	q[c]++;
	if(q[c]==8) goto B;
	// Row+Up+Down Diagonal test
	for (int i=0; i<c;i++){
		if(q[i]==q[c]||(c-i)==abs(q[c]-q[i]))goto NR;
	}
	goto NC;
	// BackTrack
B:	c--;
	if(c==-1)return 0;
	goto NR;
Print:	count++;
	cout << count << ":"<<endl;
	for (int i=0; i<8; i++){
		cout << q[i] << " ";
	}
	cout << endl;
	for (int i=0; i<16; i++){
		cout << "_";
	}
	cout << endl;
	for (int i = 0; i<8;i++){
		for(int j=0; j<8;j++){
			if(q[i]==j){
				cout <<"1"<<" ";
			}else{
				cout <<"0"<<" ";
			}
		}
		cout << endl;
		cout << endl;
	}
	goto B;
}
