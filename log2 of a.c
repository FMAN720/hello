#include<stdio.h>
int main()
{
	int a;
	int ret=0;
	scanf("%d",&a);
	int t=a;
	while(a>1){
		a/=2;
		ret++;
	}
	printf("log2 of %d is %d",t,ret);
	return 0;
 } 
