#include <iostream>
using namespace std;

unsigned factorial(unsigned n)
{
    if(n>1){
    	return n*factorial(n-1);
    }
    else{
    	return 1;
    }
}

int main(){
	unsigned num1,num2,n,m,fact1,fact2,suma1=1,suma2=1;
	while(cin>>n>>m){
		if((n==0) and (m==0)){
			break;
		}
		for(int i=0;i<n;i++){
			cin>>num1;
			fact1=factorial(num1);
			suma1=suma1*fact1;
		}
		unsigned dato1=suma1;
		for(int i=0;i<m;i++){
			cin>>num2;
			fact2=factorial(num2);
			suma2=suma2*fact2;
		}
		unsigned dato2=suma2;
		if((dato1==dato2) and (dato1!=0) and (dato2!=0)){
			printf("%s\n","YES");
			suma1=1;
			suma2=1;
		}
		else{
			printf("%s\n","NO");
			suma1=1;
			suma2=1;
		}
	}
	return 0;
}