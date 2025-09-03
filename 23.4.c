#include<stdio.h>
int main()
{
	int i;
	scanf("%d",&i);
	switch(i%3){//括号里也可以是计算式，但结果也要是整数。 
		case 1:
			printf("666");
			break;
		default:
			printf("999");
			break;
	}
	return 0;
 } 
