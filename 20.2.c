#include<stdio.h>
int main()
{
	int i=10;
	for(i=10;i>1;i/=2){
	printf("%d\n",i++);
}
return 0;
} //输出结果是10 5 3 2 
 /*为什么第一个数不是11，如果改成++i,那就对了
 i++是先打印再加一
 ++i是先加一再打印 
