#include<stdio.h>
int main()
{
	int i;
	scanf("%d",&i);
	switch(i%3){//������Ҳ�����Ǽ���ʽ�������ҲҪ�������� 
		case 1:
			printf("666");
			break;
		default:
			printf("999");
			break;
	}
	return 0;
 } 
