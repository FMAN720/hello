#include<stdio.h>
int main()
{
	int amount;
	int price;
	scanf("%d %d",&amount,&price);
	if(amount-price>=0){
	printf("%d",amount-price);
	}else{
		printf("not enough");
	}
	return 0;
 } /*ÕâÊÇ³¤¶Î×¢ÊÍ*/ 
