#include<stdio.h>
int main()
{
	printf("请输入英寸和英尺""如输入\"5 7\"表示5英尺7英寸");
	int foot;
	int inch;
	scanf("%d %d",&foot,&inch);
	printf("身高是%f米\n",                //不用%d因为用这个会取整 例如7.1  10/3*3=9
	((foot+inch/12.0)*0.3048));          //用12.0不用12  因为在c语言中“两整数”运算的结果一定是整数 12.0叫浮点数 
	return 0; 
}
