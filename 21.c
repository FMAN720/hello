#include<stdio.h>
int main()
{
	int a,b,c;
	int max;
	scanf("%d %d %d",&a,&b,&c);
	if(a>b){
		if(a>c){
			max=a;
		}else{
			max=c;
		}
	}else{
		if(b>c){
			max=b;
		}else{
			max=c;
		}
	}
	printf("%d",max);
	return 0;
 } //Ƕ��ʽif-else��if��Ҳ��if/else��else��Ҳ��if/else�� 
