#include<stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	int g;
	if(x<0)g=1;
	else if(x>0)g=2;
	else g=3;
	switch(g){
		case 1:
			printf("%d",-1);
			break;
		case 2:
			printf("%d",2*x);
			break;
		default:
			printf("0");
			break;
	}
	return 0;
 } //��switch���22�ֶκ������⡣ 
 /*����ֱ����if-else��*/ 
