#include<stdio.h>
int main()
{
	int a;
	a=3+4,5+6;
	printf("%d",a);
	return 0;
}//答案为7
/*但如过是
#include<stdio.h>
int main()
{
	int a;
	a=（3+4,5+6）; 
	printf("%d",a);
	return 0;
}
答案就是11，3+4没有意义
因为“，”也是以种运算符，逗号运算，其优先级最低，比赋值还低，所以有括号。
这种运算就是连接两个表达式把“，”右边的值赋值给变量，作为它的结果。 
一般用在for语句中*/ 
 
