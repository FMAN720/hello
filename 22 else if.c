#include<stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	if(x<0){
		printf("0");
	}else if(x==0){
		printf("-1"); 
	}else{
	    printf("%d",2*x);
	}
	return 0;
 } //¼¶ÁªµÄif-else 
