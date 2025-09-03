#include<stdio.h>
void swap(int a,int b){//每个函数都有自己的变量空间  比如main函数，swap函数 
	int t=a;
	a=b;
	b=t;
}
int main(){
	int a=5;
	int b=6;
	if(a>b){
		int i=10;//出了这个大括号，i就不存在了，因为i的作用域在大括号内，在块外面定义的变量在块内依然可以用
		         //比如可以在这个大括号内加一个printf（”%d“，a）；a依然可以输出5
				 //如果在块内定义一个a=10，则a=10；但是不能在同一个块内定义同一个变量
				 //比如int a=10，int a=100； 
	} 
	swap(a,b);
	printf("a=%d,b=%d",a,b);
	return 0; 
}//并没有将a与b的值颠倒过来，在函数中的a和b与main中的a和b没有任何的关系，唯一的关系是将他们的值传给函数， 
