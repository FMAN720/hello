#include<stdio.h>
int main(){
	int x;
	scanf("%d",&x);
	int one,two,five;
	int b=0;
	for(one=0;one<=x*10;one++){
		for(two=0;two<=x*10/2;two++){
			for(five=0;five<=x*10/5;five++){
				if(1*one+2*two+5*five==x*10){
					printf("%d��һë %d����ë %d����ë���Դճ�%dԪ\n",one,two,five,x);
					b=1;
					break; 
					//return 0;//��breakֻ����������ѭ�����������һ��forȻ��ص��ڶ���for
					         //���ǻ�����һ���ⷨ�� 
				}
			}if(b==1)break;//Ҫ��һ��b�ı�������Ϊ���ӵĻ�����ʲô����ڶ���ѭ������������Ȼ�������ѭ��Ҳ�������� 
		}if(b==1)break;
	}
	return 0;
} //����break 
