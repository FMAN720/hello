#include<stdio.h>
int main(){
	int x;
	scanf("%d",&x);
	int one,two,five;
	int b=0;
	for(one=0;one<=x*10;one++){
		for(two=0;two<=x*10/2;two++){
			for(five=0;five<=x*10/5;five++){
				if(1*one+2*two+5*five==x*10){
					printf("%d个一毛 %d个两毛 %d个五毛可以凑成%d元\n",one,two,five,x);
					b=1;
					break; 
					//return 0;//用break只能跳出所在循环，就是最后一个for然后回到第二个for
					         //但是还有另一个解法。 
				}
			}if(b==1)break;//要加一个b的变量，因为不加的话无论什么情况第二个循环都会跳过，然后第三个循环也会跳过。 
		}if(b==1)break;
	}
	return 0;
} //接力break 
