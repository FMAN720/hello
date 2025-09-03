#include<stdio.h>
int main()
{
	int a=-1;
	if(a>0&&a++>1){
		printf("ok\n");
	}printf("%d",a);
	return 0;
}//结果是-1，因为&&的左边不成立就不会执行右边了“||”也同理 
