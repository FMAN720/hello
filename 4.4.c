#include<stdio.h>
int main()
{
	int price=0; 
	 int AMOUNT=0;
	//scanf("%d",&price);������Ļ��� �������ʱ�򲻻���� "�������Ԫ��"���������������ٰ��س�����"����%dԪ\n"һ����֡���4.2
	printf("������Ʊ������(Ԫ)");
	scanf("%d %d",&AMOUNT,&price);  
	int change=AMOUNT-price;
	printf("����%dԪ\n",change); 
	return 0;
 } //һ��scanf���ԽӶ������4.4 ���Կ�����4.3�ļ򻯰档 	scanf("%d %d",&AMOUNT,&price);�����Ⱥ�˳����д��	scanf("%d %d",&price,&AMOUNT); ���������Ǹ���&AMOUNT,&price֮��Ҫ�ж��� �������������Ⱥ�˳���
 //���� 	int change=AMOUNT-price;Ҫ��printf("����%dԪ\n",change);ǰ�档 
