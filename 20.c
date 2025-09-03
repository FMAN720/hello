#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int fact=1;
	for(;n>1;n--){//n>1前面的；不能去掉 
		fact*=n;
	}
	printf("%d",fact);
	return 0;
 } 
