#include<stdio.h>
int main()
{
	int count;
	scanf("%d",&count);
	if(count>20&&count<50){
		count=count-10;
	}else{
		count=count-5;
	}
	if(count<10){
		count=count+10;
	}else{
		count=count+5;
	}
	printf("%d",count);
	return 0;
 } //count=(count>20)?(count<50)?count-10:count-5:(count<10)?count+10:count+5;
