#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	int i;
	int f=1;
	for(i=2;i<a;i++){
		if(a%i==0){
			f=0;
			break;/*��������Ļ����������಻��Ҫ��ѭ������������6����i=2ʱ���Ѿ����Խ����ˣ�ȴ��Ҫ����ѭ��*/ 
		}
	}
	if(f==0){
		printf("��������"); 
	}else{
		printf("������"); 
	}
	return 0;
}//ѭ������ 
