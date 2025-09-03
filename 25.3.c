#include<stdio.h>
int main(){
	int x;
	for(x=2;x<=100;x++){
		int i;
		int f=1;
		for(i=2;i<x;i++){
			if(x%i==0){
			f=0; 
			break;
			}
		}
		if(f==1){
			printf("%d",x);
			printf(" ");
		}
	}
	return 0;
} //100中有多少个素数 
