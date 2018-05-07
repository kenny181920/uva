#include <iostream>
using namespace std;

int main(){
	int n,m,num1,num2;
	while(cin>>n>>m){
		if(n==0 or m==0){
			break;
		}

		int numN[10]={0,0,0,0,0,0,0,0,0,0};
		int numM[10]={0,0,0,0,0,0,0,0,0,0};

		for(int i=0;i<n;i++){
			cin>>num1;
			for(int j=2;j<=num1;j++){
				numN[j]++;
			}
		}

		for(int i=0;i<m;i++){
			cin>>num2;
			for(int j=2;j<=num2;j++){
				numM[j]++;
			}
		}

		numN[2]+=2*numN[4]+numN[6]+3*numN[8];
		numN[3]+=2*numN[9]+numN[6];
		numN[4]=numN[6]=numN[8]=numN[9]=0;
		numM[2]+=2*numM[4]+numM[6]+3*numM[8];
		numM[3]+=2*numM[9]+numM[6];
		numM[4]=numM[6]=numM[8]=numM[9]=0;
		int op=1;
		for(int i=0;i<10;i++){
			op&=numN[i]==numM[i];
		}
		printf("%s\n",op? "YES" : "NO");
	}
	return 0;
}