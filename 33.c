#include<stdio.h>
int main(){
	int a[]={2,5,6,5,8,78,89,12,1};//数组的集成初始化，【】里可以没有东西， 
	{
	    printf("%lu\n",sizeof (a)) ;//结果是32，就是32个字节，一个数字4个字节 
	    printf("%lu\n",sizeof (a[0])) ;
		int i;
		for(i=0;i<sizeof(a)/sizeof(a[0]);i++){
			printf("%d\t",a[i]);
		}
		printf("\n");
	}
	return 0;
}
/*if int a[13]={2},那么第一个值就会被赋值为2，其余的为0。
int a[10]={[0]=2,[2]=3,5,} 这表示数组中第一个是2，第三个和第四个是3，5.其余是0.如果10这个数字没了，那么数组大小会默认为4个因为最大是a【3】
数组不能赋值*/ 
