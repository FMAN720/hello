#include<stdio.h>
int main(){
	int x;
	scanf("%d",&x);
	int one,two,five;
	for(one=0;one<=x*10;one++){
		for(two=0;two<=x*10/2;two++){
			for(five=0;five<=x*10/5;five++){
				if(1*one+2*two+5*five==x*10){
					printf("%d��һë %d����ë %d����ë���Դճ�%dԪ\n",one,two,five,x);
					return 0;//��breakֻ����������ѭ�����������һ��forȻ��ص��ڶ���for
					         //���ǻ�����һ���ⷨ�� 
				}
			}
		}
	}
	return 0;
} 
