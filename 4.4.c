#include<stdio.h>
int main()
{
	int price=0; 
	 int AMOUNT=0;
	//scanf("%d",&price);放在这的话， 输入金额的时候不会出现 "请输入金额（元）"，而是在输入金额再按回车后与"找您%d元\n"一起出现。见4.2
	printf("请输入票面与金额(元)");
	scanf("%d %d",&AMOUNT,&price);  
	int change=AMOUNT-price;
	printf("找您%d元\n",change); 
	return 0;
 } //一个scanf可以接多个。见4.4 可以看作是4.3的简化版。 	scanf("%d %d",&AMOUNT,&price);中有先后顺序不能写成	scanf("%d %d",&price,&AMOUNT); 否则结果会是负数&AMOUNT,&price之间要有逗号 整个程序都是有先后顺序的
 //类似 	int change=AMOUNT-price;要在printf("找您%d元\n",change);前面。 
