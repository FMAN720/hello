#include<stdio.h>
int main()
{
	int max;
	int a,b;
	scanf("%d %d",&a,&b);
	if(a>b){
		max=a;
	}else if(a<b){
		max=b;
	}else{
		max=a=b;
	}
	printf("%d",max);
	return 0;
 } 
