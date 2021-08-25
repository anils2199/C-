#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

bool test(int q[], int col){
	int mp[3][3]={
		{0, 2, 1},
		{0, 2, 1},
		{1, 2, 0} };
	int wp[3][3]={
		{2, 1, 0},
		{0, 1, 2},
		{2, 0, 1} };
	
	int cman, cwoman, nman, nwoman;
	for(int i=0; i<col; i++){
		cman=i;
		cwoman=q[i];
		nman=col;
		nwoman=q[col];
		if(nwoman==cwoman){
			return false;
		}
	}
	for(int i=0; i<col; i++){
		cman=i;
		cwoman=q[i];
		nman=col;
		nwoman=q[col];
		if(mp[cman][cwoman]>mp[cman][nwoman] && wp[nwoman][cman]<wp[nwoman][nman]){
			return false;
		}
		if(mp[nman][cwoman]<mp[nman][nwoman] && wp[cwoman][nman]<wp[cwoman][cman]){
			return false;
		}
	}
	return true;
}

void backtrack(int &col){
	col--;
	if(col==-1){
		exit(1);
	}
}

void print(int q[]){
	static int count=0;
	cout << "Solution " << ++count << endl;
	cout << "Man Woman" << endl;
	for(int i=0; i<3; i++){
		cout << " " << i << "    " << q[i] << endl;
	}
	cout << endl;
	cout << endl;
}


int main(){
	int q[3]; q[0]=0;
	int c=0;
	
	bool from_backtrack=false;
	while(true){
		while(c<3){
			if(!from_backtrack)
				q[c]=-1;
			while(q[c]<3){
				q[c]++;
				if(q[c]==3){
					backtrack(c);
					continue;
				}
				if(test(q,c)) break;
			}
			c++;
			from_backtrack=false;
		}
		print(q);
		backtrack(c);
		from_backtrack=true;
	}
return 0;
}
