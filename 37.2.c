#include<stdio.h>
int main(){
	enum color{
		red,yellow,blue,numcolors
	};
	int color;
	char*colornames[numcolors]={"red","yellow","blue"};//Ҳ�������ж��壬��red=1,yellow,blue=5,yellow���Զ����1+1��2 
	char *colorname=NULL;
	scanf("%d",&color);
	if(color>=0&&color<numcolors){
		colorname=colornames[color];
	}else{
		colorname="unknow";
	}
	printf("%s",colorname);
	return 0;
}
