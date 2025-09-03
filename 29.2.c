#include<stdio.h>
int main(){
	int a=13425;
	//scanf("%d",&a);
	//int mask=10000;
	int d;
	int count=0;
	while(a>0){
		a/=10;
		count++;
	} 
	int mask=pow(10,count-1);
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
}
