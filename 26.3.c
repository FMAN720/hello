#include<stdio.h>
int main(){
	int x;
	scanf("%d",&x);
	int one,two,five;
	for(one=0;one<=x*10;one++){
		for(two=0;two<=x*10/2;two++){
			for(five=0;five<=x*10/5;five++){
				if(1*one+2*two+5*five==x*10){
					printf("%d个一毛 %d个两毛 %d个五毛可以凑成%d元\n",one,two,five,x);
					goto out;//out是标号，自己设置。 
				}
			}
		}
	}
	out: 
	return 0;
} 
