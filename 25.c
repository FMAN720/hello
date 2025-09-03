#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	int i;
	int f=1;
	for(i=2;i<a;i++){
		if(a%i==0){
			f=0;
			break;/*不加这个的话，会进行许多不必要的循环，比如输入6，当i=2时就已经可以结束了，却还要继续循环*/ 
		}
	}
	if(f==0){
		printf("不是素数"); 
	}else{
		printf("是素数"); 
	}
	return 0;
}//循环控制 
