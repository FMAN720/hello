#include<stdio.h>
#include<string.h>
int main(){
	char*s="title";
	char*t;
	t=s;//字符串赋值 
	char word1[8];
	char word2[8];
	scanf("%7s",word1);
	scanf("%7s",word2);
	printf("%s##%s",word1,word2);//数字7代表只能读7个，如果超过7个字节就去掉超过的部分，因为还有一个0 
	                            //如果第一个就输入12345678，那么按一次回车就会输出1234567##8，多出的8会自动给第二个 
	return 0;
} 
/*不能写char*string;
        scanf("%s",string);
		这并没有初始化，这只是一个指针
char b[100]=""空字符串,b[0]=\0
char b[]="" 放不下任何一个字符串 
