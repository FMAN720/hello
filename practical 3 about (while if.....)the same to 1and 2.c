#include<stdio.h>
int main()
{
	int number;
	int count=0;
	int sum=0;
	scanf("%d",&number);
	while(number!=-1){
		sum+=number;
		count++; 
		scanf("%d",&number);
	}
	printf("%lf",(double)sum/count);//也可以用1.0*sum 
	return 0;
}
/*#include<stdio.h>
int main()
{
    int number;
	int count=0;
	int sum=0;
	do{
	scanf("%d",number);
	if(number!=-1){ 
	count++;
	sum+=number;}
	while(number!=-1)
	printf("%d",number);
	return 0;
}do while结构*/ 
