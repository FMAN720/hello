#include<stdio.h>
int main()
{
	int price=0; 
	 int AMOUNT=0;
	//scanf("%d",&price);������Ļ��� �������ʱ�򲻻���� "�������Ԫ��"���������������ٰ��س�����"����%dԪ\n"һ����֡���4.2 
	printf("������Ʊ��(Ԫ)");
	scanf("%d",&AMOUNT); 
	printf("�������Ԫ��");
	scanf("%d",&price);
	int change=AMOUNT-price;
	printf("����%dԪ\n",change); 
	return 0;
 } //һ��scanf���ԽӶ������4.4 
