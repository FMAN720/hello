#include<stdio.h>
int main()
{
	printf("请输入英寸和英尺""如输入\"5 7\"表示5英尺7英寸");
	double foot;
	double inch;                            //inch是定义为int类型的变量，如果把int换成double，我们就把它改为double类型的浮点数变量了。●double的意思是“双”，它本来是“双精度浮数"的第一个单词，人们用来表示浮点数类型。除了double，还有float(意思就是浮点!)表示单精度浮点数。 
	scanf("%lf %lf",&foot,&inch);          //改成%lf后 就可以不用12.0了 
	printf("身高是%f米\n",                //不用%d因为用这个会取整 例如7.1  10/3*3=9
	((foot+inch/12.0)*0.3048));          //用12.0不用12  因为在c语言中“两整数”运算的结果一定是整数 12.0叫浮点数 
	return 0; 
}
