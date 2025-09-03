#include<stdio.h>
int main(){
	enum color{
		red,yellow,blue,numcolors
	};
	int color;
	char*colornames[numcolors]={"red","yellow","blue"};//也可以自行定义，如red=1,yellow,blue=5,yellow会自动变成1+1即2 
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
