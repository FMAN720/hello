#include<stdio.h>
int main(){
	int n;
	int i;
	scanf("%d",&n);
	double sum=0.0;
	int sign=1;
	for(i=1;i<=n;i++){
		sum+=sign*1.0/i;//¼ÇµÃ1.0
		sign=-sign; 
	}
	printf("%f",sum);
	return 0;
}//1-1/2+1/3-1/4......
