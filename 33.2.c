#include<stdio.h>
	int search(int x,int a[],int length){//数组作为函数参数时，要用另一个函数来表示数组的大小，不能在【】中给出大小，也不能用sizeof来计算数组的元素 
	int ret=-1;
	int i;
	for(i=0;i<length;i++){
		if(a[i]==x){
		ret=i;
		break;
	}
	}
	return ret;
}
int main(){
	int a[]={1,2,3,4,5,6,7,8,9,};
	int x;
	scanf("%d",&x);
	int loc;
	loc=search(x,a,sizeof(a)/sizeof(a[0]));
	if(loc!=-1){
		printf("%d",loc);
	}else{
		printf("不存在"); 
	}
	return 0;
}//搜索 
