#include<stdio.h>
#include<string.h> 
int main(){
	char word={'H','E','L','L','O','\0'};//0标志的字符串的结束，但是不是字符串的一部分 
											//计算字符串的长度不算这个0， 
											//字符串以数组的形式存在 以数组或指针的形式访问 
											//主要是以指针 
	//char*s="hello";
	//s[0]='b';不能改，一种保护机制 改成数组就可以改 
	//printf("%c\n",s[0]);
	char s[]="hello";
	s[0]='b';
	printf("%c",s[0]); 
	return 0;
}/* "hello"是一个字符串常量（字符串的字面量），两个相邻字符串中间没有别的东西，会被自动连接起来，哪怕是（“A”“B”）*/
//不能用运算符对字符串进行计算 字符串的字面量可以初始化字符数组char a[]="hello" char*s="hello"
