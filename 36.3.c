#include<stdio.h>
#include<string.h>
int main(){
	char*s="title";
	char*t;
	t=s;//�ַ�����ֵ 
	char word1[8];
	char word2[8];
	scanf("%7s",word1);
	scanf("%7s",word2);
	printf("%s##%s",word1,word2);//����7����ֻ�ܶ�7�����������7���ֽھ�ȥ�������Ĳ��֣���Ϊ����һ��0 
	                            //�����һ��������12345678����ô��һ�λس��ͻ����1234567##8�������8���Զ����ڶ��� 
	return 0;
} 
/*����дchar*string;
        scanf("%s",string);
		�Ⲣû�г�ʼ������ֻ��һ��ָ��
char b[100]=""���ַ���,b[0]=\0
char b[]="" �Ų����κ�һ���ַ��� 
