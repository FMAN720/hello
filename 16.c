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
 } //������һ�ֽⷨ����16.2 
