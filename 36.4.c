#include<stdio.h>
#include<string.h>
int main(){
	//���ַ����ĳ��ȣ�����'\0' 
	char a[]="hello";
	printf("strlen=%d\n",strlen(a));
	printf("sizeof=%d\n",sizeof(a));
//�ַ����Ƚϴ�С 
	char a1[]="abc";
	char a2[]="abc";
	printf("%d\n",strcmp(a1,a2));//��� 0. 
	printf("%d\n",strncmp(a1,a2,3));//��һ��n��ֻ�ж�ǰn����С�᲻����ͬ 
		
	//����дprintf("%d",a1==a2);���ߵ�ַ��һ��������дһ������ 
	
	char a3[]="abc";
	char a4[]="bbc";
	printf("%d\n",strcmp(a3,a4));//����� <-1   >1. 
	
	char a5[]="abc";
	char a6[]="Abc";
	printf("%d\n",strcmp(a5,a6));//Сд��a>��д��A 
	printf("%d\n",'a'-'A');//��Ϊ32 
	
	char a7[]="abc";
	char a8[]="abc ";//����һ���ո� a7<a8 �ո���ASC||������32�����Խ��Ӧ����-32 
	printf("%d\n",strcmp(a7,a8)); 
	
	//char a9[]="hello";
	//char a10[10];
	//strcpy(a10,a9);
	//printf("%s",a10); //������Ŀ�������С���ᵼ�»���������������ȫ�ķ��� 
	char a9[]="hello";
	char a10[10];
	strncpy(a10,a9,sizeof(a10)-1);//����ȫ 
	printf("%s\n",a10);//%c�Ǵ������ַ� 
	
	
	//char a11[50]="hello";
	//char a12[]="world";
	//strcat(a11,a12);//Ҳ�а�ȫ���� 
	//printf("%s",a11);
	char a11[50]="hello";
	char a12[]="world";
	char b=a11;
	strncat(a11,a12,sizeof(a11)-sizeof(b)-1);
	printf("%s",a11);
	
	return 0;
} 
