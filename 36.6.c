#include<stdio.h>
#include<string.h>
int main(){
	char*p="hello world";
	char*k="world";
	char*l=strstr(p,k);
	printf("%s %d",k,l-p);
	//strcasestr �����������Ӵ�Сд 
	return 0;
} 
