#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	/*char *p="hello";
	strchr(p,'l');
	int a;
	a=strchr(p,'l');
	printf("%s",a);���llo*/
	char s[]="hello";
	char*p=strchr(s,'l');//�ַ�����Ѱ�ҵ����ַ� 
	/*1*/char c=*p;
	*p='\0';
	//char*t="###";
	//strcpy(t,s);ֻ�ܶ������ܸ�
	
	char*t=(char*)malloc(strlen(s)+1);
	strcpy(t,s);
	printf("%s\n",t);
	free(t);
	*p=c;
	printf("%s",p);//��l����p 
	
	//p=strchr(p+1,'l');//�ҵڶ��� 
	/*3*///printf("%s\n",p);
	
	/*2*///char*k=strrchr(s,'l');
	//printf("%s\n",k); //���ұ߿�ʼ�� 
	//����NULL,��ʾû�ҵ� 
	
	
	return 0;
}
