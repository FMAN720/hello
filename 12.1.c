#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	int max=b;
	if(a>b){
		max=a;
	}
	printf("%d",max);
	return 0;
}
