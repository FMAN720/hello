#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	int i;
	int f=1;
	for(i=2;i<a;i++){
		if(a%i==0){
			f=0;
			continue;//�����������9��9��2 % ����==0���ͻ� printf("%d\n",&i);��i=3�� 9��3 % ��==0���ͻ�ִ��f=0��Ȼ�󲻻� printf("%d\n",&i);
			         //��continue�󣬾ͻ����� for(i=2;i<a;i++)
			         //continue������������ѭ����ʣ����䣬��ʼ��һѭ���� 
			//break;/*��������Ļ����������಻��Ҫ��ѭ������������6����i=2ʱ���Ѿ����Խ����ˣ�ȴ��Ҫ����ѭ��*/ 
		}
		printf("%d\n",i);
	}
	if(f==0){
		printf("��������"); 
	}else{
		printf("������"); 
	}
	return 0;
}//ѭ������ 
