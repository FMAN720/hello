#include<stdio.h>
int main()
{
	int type;//��switch��һ��Ҫ��int�� 
	scanf("%d",&type);
	switch(type){
		case 1://case��ָ�����￪ʼ������Ҫ��break��û��break�ͻ�һֱִ��ֱ����breakΪֹ�� 
			printf("�ھ�������������������ά��");
			break;
		case 2://������һ��������Ҳ������һ�������ı��ʽ�����ʽ��ȫ�ǳ���������1��1+1�����������''const int ORM=2��''Ҳ���Խ�ORM�� 
		    printf("�����������룬����֤�����㿴");
			break;
		case 3:
			printf("oliveral���������ھ�");
			break; 
		default:
		    printf("˵ɶ���㣬��˵���������");
			break;
	}
	return 0;
}/*��if-else�������ǣ�if-else��һ��һ��ȥ�ԣ��Ե���ȷ��Ϊֹ�������ֱ��������ȷ�� */
