#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

bool test(int q[], int c) {
	for(int i=0; i<c; i++)
		if(q[c]==q[i] || (c-i)==abs(q[c]-q[i]))
			return false;
	return true;
}

void backtrack (int &c) {
	c--;
	if(c==-1){
		exit(1);
	}
}
void print(int q[]){
	static int count=0;
	cout << ++ count<< endl <<endl;
	for (int i=0; i<8; i++)
		cout <<q[i]<<" ";
	cout<<endl<<endl;
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
}

int main () {
	int q[8];
	int c=1;
	q[0]=0;
	bool from_backtrack=false;
	while (true){
		while(c<8){
			if(!from_backtrack)q[c]=-1;
			from_backtrack=true;
			while(q[c]<8){
				q[c]++;

				if(q[c]==8){
					from_backtrack=true;
					backtrack(c);
					break;
				}
				if(test(q,c)){
					from_backtrack=false;
					c++;
					break;
				}
			}
		}
		print(q);
		from_backtrack=true;
		backtrack(c);
	}
}

