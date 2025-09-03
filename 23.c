#include<stdio.h>
int main()
{
	int type;//在switch中一定要是int。 
	scanf("%d",&type);
	switch(type){
		case 1://case是指从哪里开始。所以要有break。没有break就会一直执行直到有break为止。 
			printf("冠军自有其名，其名奥利维拉");
			break;
		case 2://可以是一个常数，也可以是一个常数的表达式，表达式中全是常数，例如1；1+1；如果上面有''const int ORM=2；''也可以接ORM。 
		    printf("别放弃你的梦想，我来证明给你看");
			break;
		case 3:
			printf("oliveral是轻量级冠军");
			break; 
		default:
		    printf("说啥呢你，再说让你飞起来");
			break;
	}
	return 0;
}/*和if-else的区别是：if-else是一个一个去试，试到正确的为止，这个是直接跳到正确的 */
