#include<stdio.h>
int main()
{
	int price=0; 
	const int AMOUNT=100;
		scanf("%d",&price);
	//scanf("%d",&price);������Ļ��� �������ʱ�򲻻���� "�������Ԫ��"���������������ٰ��س�����"����%dԪ\n"һ����֡���4.2 
	printf("�������Ԫ��");
	int change=AMOUNT-price;
	printf("����%dԪ\n",change); 
	return 0;
 } 
