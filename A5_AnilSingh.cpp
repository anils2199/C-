#include <iostream>
#include <cmath>

using namespace std;


bool test(int q[]){
	for (int c=0;c<8;c++){
		for(int i=0;i<c;i++){
			if (q[c]==q[i]||(c-i) == abs(q[c]-q[i])) return false;
		}
	}
	return true;
}



int main() {
	int q[8]={0};
	int c = 0;
	for (int q0=0; q0<8; q0++)
		for(int q1=0; q1<8; q1++)
			for (int q2=0; q2<8; q2++)
				for(int q3=0;q3<8;q3++)
					for (int q4=0;q4<8;q4++)
						for (int q5=0;q5<8;q5++)
							for(int q6=0;q6<8;q6++)
								for(int q7=0;q7<8;q7++){
									q[0]=q0;
									q[1]=q1;
									q[2]=q2;
									q[3]=q3;
									q[4]=q4;
									q[5]=q5;
									q[6]=q6;
									q[7]=q7;
									if (test(q)){
										c++;
										cout << c << ":"<<endl;
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
																				
									}
								}

	return 0;
}
