#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
srand(time(0));
int number=rand()%100+1;//%100���Ա�֤�������1~100 
int count=0;
int a=0;
printf("���Ѿ������һ��1��100֮�����\n");
do{
	printf("�²����1��100֮�����\n");
	scanf("%d",&a);
	if(a>number){
		printf("��´���\n");
	}else if(a<number){
	printf("���С��\n"); 
	}
} while(a!=number);
printf("��¶���"); 
}
