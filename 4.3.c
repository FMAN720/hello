#include<stdio.h>
int main()
{
	int price=0; 
	 int AMOUNT=0;
	//scanf("%d",&price);放在这的话， 输入金额的时候不会出现 "请输入金额（元）"，而是在输入金额再按回车后与"找您%d元\n"一起出现。见4.2 
	printf("请输入票面(元)");
	scanf("%d",&AMOUNT); 
	printf("请输入金额（元）");
	scanf("%d",&price);
	int change=AMOUNT-price;
	printf("找您%d元\n",change); 
	return 0;
 } //一个scanf可以接多个。见4.4 
