#include<stdio.h>
#include<string.h>
int main(){
	//看字符串的长度，不算'\0' 
	char a[]="hello";
	printf("strlen=%d\n",strlen(a));
	printf("sizeof=%d\n",sizeof(a));
//字符串比较大小 
	char a1[]="abc";
	char a2[]="abc";
	printf("%d\n",strcmp(a1,a2));//相等 0. 
	printf("%d\n",strncmp(a1,a2,3));//加一个n，只判断前n个大小会不会相同 
		
	//不能写printf("%d",a1==a2);两者地址不一样，这样写一定错误 
	
	char a3[]="abc";
	char a4[]="bbc";
	printf("%d\n",strcmp(a3,a4));//不相等 <-1   >1. 
	
	char a5[]="abc";
	char a6[]="Abc";
	printf("%d\n",strcmp(a5,a6));//小写的a>大写的A 
	printf("%d\n",'a'-'A');//答案为32 
	
	char a7[]="abc";
	char a8[]="abc ";//这有一个空格 a7<a8 空格在ASC||表中是32，所以结果应该是-32 
	printf("%d\n",strcmp(a7,a8)); 
	
	//char a9[]="hello";
	//char a10[10];
	//strcpy(a10,a9);
	//printf("%s",a10); //不会检查目标数组大小，会导致缓冲区溢出，不算最安全的方法 
	char a9[]="hello";
	char a10[10];
	strncpy(a10,a9,sizeof(a10)-1);//更安全 
	printf("%s\n",a10);//%c是处理单个字符 
	
	
	//char a11[50]="hello";
	//char a12[]="world";
	//strcat(a11,a12);//也有安全问题 
	//printf("%s",a11);
	char a11[50]="hello";
	char a12[]="world";
	char b=a11;
	strncat(a11,a12,sizeof(a11)-sizeof(b)-1);
	printf("%s",a11);
	
	return 0;
} 
