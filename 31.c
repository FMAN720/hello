#include<stdio.h>
int main(){
	int n;
	int i;
	int count[10];
	for(i=0;i<10;i++){//��δ���==int count��10��={0} 
		count[i]=0;
	}
	scanf("%d",&n);
	while(n!=-1){
		//scanf("%d",&n);���д���⣬��һ������������ᱻ���� 
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
	    //}���Ҫ��count=0����ȥ�����ͼ�����Щ 
	}
	

	return 0;
}
