#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int digit;
	int ret=0;
	while(a>0){
		digit=a%10;
	    printf("%d",digit);//����ȥ������������������700�������007�� 
		//ret=ret*10+digit;
		//printf("a=%d,digit=%d,ret=%d\n",a,digit,ret);
		a/=10;
	}
	//printf("%d",ret); 
	return 0;
 } 
