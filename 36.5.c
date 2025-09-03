#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	/*char *p="hello";
	strchr(p,'l');
	int a;
	a=strchr(p,'l');
	printf("%s",a);输出llo*/
	char s[]="hello";
	char*p=strchr(s,'l');//字符串中寻找单个字符 
	/*1*/char c=*p;
	*p='\0';
	//char*t="###";
	//strcpy(t,s);只能读，不能改
	
	char*t=(char*)malloc(strlen(s)+1);
	strcpy(t,s);
	printf("%s\n",t);
	free(t);
	*p=c;
	printf("%s",p);//把l还给p 
	
	//p=strchr(p+1,'l');//找第二个 
	/*3*///printf("%s\n",p);
	
	/*2*///char*k=strrchr(s,'l');
	//printf("%s\n",k); //从右边开始找 
	//返回NULL,表示没找到 
	
	
	return 0;
}
