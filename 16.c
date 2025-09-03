#include<stdio.h>
int main()
{
	int count;
	scanf("%d",&count);
	if(count<20){
		count=count-10;
	}else{
		count=count+10;
	}
	printf("%d",count);
	return 0;
 } //还有另一种解法，见16.2 
