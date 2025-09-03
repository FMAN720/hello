#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	int i;
	int f=1;
	for(i=2;i<a;i++){
		if(a%i==0){
			f=0;
			continue;//例如输入的是9，9与2 % 不会==0，就会 printf("%d\n",&i);当i=3， 9与3 % 会==0，就会执行f=0，然后不会 printf("%d\n",&i);
			         //到continue后，就会跳到 for(i=2;i<a;i++)
			         //continue的作用是跳过循环的剩下语句，开始下一循环。 
			//break;/*不加这个的话，会进行许多不必要的循环，比如输入6，当i=2时就已经可以结束了，却还要继续循环*/ 
		}
		printf("%d\n",i);
	}
	if(f==0){
		printf("不是素数"); 
	}else{
		printf("是素数"); 
	}
	return 0;
}//循环控制 
