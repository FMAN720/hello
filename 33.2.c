#include<stdio.h>
	int search(int x,int a[],int length){//������Ϊ��������ʱ��Ҫ����һ����������ʾ����Ĵ�С�������ڡ����и�����С��Ҳ������sizeof�����������Ԫ�� 
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
		printf("������"); 
	}
	return 0;
}//���� 
