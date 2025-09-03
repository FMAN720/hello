#include<stdio.h>
int main()
{
	int price=0;
	printf("请输入金额(元)：");
	scanf("%d",&price);
	int charge=100-price;
	printf("找您的钱%d元",charge);
	return 0;
}
