#include<stdio.h>
    //const int red=0;
	//const int yellow=1;
	//const int blue=2; 
	enum color{
		red,yellow,blue//ö�٣�Ĭ��0.1.2����˳����ȥ 
	};
int main(){
	int color=-1;
	char*colorname=NULL;
	scanf("%d",&color);
	switch(color){
	case red:colorname="red";break;
	case yellow:colorname="yellow";break;
	case blue:colorname="blue";break;
	default:colorname="unknow";break;
	}
	printf("%s",colorname);
	return 0;
} 
