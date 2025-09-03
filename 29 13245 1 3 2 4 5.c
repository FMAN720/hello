#include<stdio.h>
int main(){
	int a=13425;
	//scanf("%d",&a);
	int mask=10000;
	int d;
	while(mask>0){
		d=a/mask;
		printf("%d",d);
		if(mask>0){
			printf(" ");
		}
		a=a%mask;
		mask/=10;
	}
	return 0;
}//只适用于特定的五位数 
