#include<stdio.h>
int main(){
	int a;
	//scanf("%d",&a);
	//int mask=10000;
	int d;
	int t;//��ֹa�����ĵ� 
	//int count=0;
	a=13425;
	t=a;
	int mask=1;
	while(t>9){
		t/=10;
		//count++;
		mask*=10;
	} printf("%d\n",mask);
	//int mask=pow(10,count-1);
	while(mask>0){//�����a>0,��������70000���������ĵߵ� 
		d=a/mask;
		printf("%d",d);
		if(mask>0){
			printf(" ");
		}
		a=a%mask;
		mask/=10;
	}
	return 0;
}
