#include <iostream>
#include <cmath>

using namespace std;

bool test(int b[8][8]){
	int i, r, c;
	for (c=0; c<8;c++){
		r=0;
		while(b[r][c] != 1) r++;
		for(i=0;i<c;i++){
			if(b[r][i] == 1) return false;
		}
		for(i=1;(r-i)> -1 && (c-i)> -1; i++){
			if(b[r-i][c-i] == 1) return false;
		}
		for(i=1;(r+i)<8 && (c-i)>=0;i++){
			if(b[r+i][c-i] == 1) return false;
		}
	}
	return true;
}

void print(int b[8][8], int c){
	cout << c << ":" << endl;
	cout << endl;
	for(int i=0;i<8;i++){
		for(int z=0; z<8; z++){
			cout << b[i][z] << " ";
		}
		cout << endl;
	}
	cout << endl;
}


int main() {
	int b[8][8]={0};
	int c = 0;
	for (int i =0; i<8; i++)
		for(int j =0; j<8; j++)
			for (int k =0; k<8; k++)
				for(int l =0; l<8;l++)
					for (int m =0;m<8;m++)
						for (int n=0;n<8;n++)
							for(int o=0;o<8;o++)
								for(int p=0;p<8;p++){
									b[i][0]=1;
									b[j][1]=1;
									b[k][2]=1;
									b[l][3]=1;
									b[m][4]=1;
									b[n][5]=1;
									b[o][6]=1;
									b[p][7]=1;
									
									if(test(b)){
										print(b, ++c);
									}
									for(int r=0;r<8;r++){
										for(int t=0;t<8;t++){
											b[r][t] = 0;
										}
									}
								}

	return 0;
}
