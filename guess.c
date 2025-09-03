#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
srand(time(0));
int number=rand()%100+1;//%100可以保证这个数是1~100 
int count=0;
int a=0;
printf("我已经想好了一个1到100之间的数\n");
do{
	printf("猜猜这个1到100之间的数\n");
	scanf("%d",&a);
	if(a>number){
		printf("你猜大了\n");
	}else if(a<number){
	printf("你猜小了\n"); 
	}
} while(a!=number);
printf("你猜对了"); 
}
