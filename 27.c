#include<stdio.h>
int main(){
	int n;
	int i;
	scanf("%d",&n);
	double sum=0.0;
	for(i=1;i<=n;i++){
		sum+=1.0/i;//¼ÇµÃ1.0 
	}
	printf("%f",sum);
	return 0;
}
