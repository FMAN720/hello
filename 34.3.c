#include<stdio.h>
int a[]={10,4,34,6,45,77,9};
int maxl(int a[],int length){
	int max=0;
	int i;
	for(i=0;i<length;i++){//不能用sizeof 
		if(a[i]>a[max]){
			max=i;
		}
	}
	return max;
} 
int main(){
	int length=sizeof(a)/sizeof(a[0]);
	int i;
	for(i=length-1;i>0;i--){
	int maxid=maxl(a,i+1);
	int t=a[i];
	a[i]=a[maxid];
	a[maxid]=t;
	}
	for(i=0;i<length;i++){
		printf("%d",a[i]);
		if(i!=length-1){
			printf(" ");
		}
	}
	 
	return 0;
}//选择排序 每次选出一个最大的数 把他放到第一个位子 
