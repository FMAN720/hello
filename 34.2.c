#include<stdio.h>
int a[]={1,3,4,5,6,87,6};
int search(int x,int a[],int length){
	int left=0;
	int right=length-1;
while(right>left){
	int mid=(right+left)/2;
	int ret=-1;
	if(x==a[mid]){
		ret=mid;
		break;
	}else if(x>a[mid]){
		left=mid+1;
	}else{
		right=mid-1;
	}
	return ret;
}
}
int main(){
	int k;
	scanf("%d",&k);
	int g=search(k,a,sizeof(a)/sizeof(a[0]));
	if(g==-1){
		printf("no");
	}else{
		printf("%d",a[g]);	
	}
	return 0;
}//¶þ·Ö·¨ 
