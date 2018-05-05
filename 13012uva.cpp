#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
	int d;
		while(scanf("%d", &d)==1){
			int x;
			int cont=0;
			for(int i=0;i<5;i++){
				scanf("%d", &x);
				if(d == x){
					cont=cont+1;
				} 
			}
		printf("%d\n", cont);
	}
	return 0;	
}
