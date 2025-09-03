#include<stdio.h>
int main(){
	int a,b;
	int i;
	int min;
	int ret;
	scanf("%d %d",&a,&b);
	if(a>b){
	min=b;}
	else if(a<b){
	min=a;}
	for(i=1;i<min;i++){
		if(a%i==0){
			if(b%i==0){
				ret=i;
			}
		}
	}
	printf("%d",ret);
	return 0;
}//最小公约数 
