#include<stdio.h>
	int isPrime(int i)//设置一个自己的函数。 
	{
		int k;
		int ret=1;
		for(k=2;k<i-1;k++){
			if(i%k==0){
				ret=0;
				break;
			}
		}
		return ret;//pay attation
	}
	int main(){
	int sum=0;
	int count=0;
	int n,m;
	scanf("%d %d",&n,&m);
	int i;
	if(n==1)n=2;
	for(i=n;i<=m;i++){
		if(isPrime(i)){//return 的值给了这个isPrime 
			sum+=i;
			count++; 
		}
	}
	
	printf("%d %d",sum,count);
	return 0;
} 
