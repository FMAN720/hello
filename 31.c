#include<stdio.h>
int main(){
	int n;
	int i;
	int count[10];
	for(i=0;i<10;i++){//这段代码==int count【10】={0} 
		count[i]=0;
	}
	scanf("%d",&n);
	while(n!=-1){
		//scanf("%d",&n);如果写在这，第一个输入的数不会被计入 
		if(n>=0&&n<=9){
			count[n]++;
		}
		scanf("%d",&n);
	}
	for(i=0;i<10;i++){
		//int a=0;
		//if(count[i]==0){
		//	a=1;
		//}
		//if(a==0){
		printf("%d:%d\n",i,count[i]);
	    //}如果要把count=0的数去掉，就加上这些 
	}
	

	return 0;
}
