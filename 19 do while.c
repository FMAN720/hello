#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int n=0;
	do {
	n++;
	a/=10;
	}
	while(a>0);
	printf("%d",n);
	return 0;
 } 
