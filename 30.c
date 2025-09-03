#include<stdio.h>
int main(){
	int count=0;
	int x;
	double sum=0;
	int number[100];
	scanf("%d",&x);
	while(x!=-1){
		sum+=x;
		number[count]=x;
		count++;
		scanf("%d",&x);
	}
	double average=1.0*sum/count;
	printf("%f\n",average);
	int i;
	for(i=0;i<count;i++){
		if(number[i]>average){
			printf("%d\n",number[i]);
		}
	}
	return 0;
} 
