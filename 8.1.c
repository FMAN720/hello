#include<stdio.h>
int main()
{
	int hour1,minute1;
	int hour2,minute2;
	scanf("%d %d",&hour1,&minute1);
	scanf("%d %d",&hour2,&minute2);
	int h=hour1-hour2;
	int m=minute1-minute2;
	if(m<0){
		m+=60;
		h-=1;
	} 
	printf("%d %d",h,m);
	return 0;
 } 
