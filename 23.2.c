#include<stdio.h>
int main()
{
int grade;
scanf("%d",&grade);
grade/=10;
switch(grade){
	case 10:
		printf("A");
		break;
	case 9:
		printf("B");
		break;
	case 8:
		printf("C");
		break;
	case 7:
		printf("D");
		break;
	case 6:
		printf("E");
		break;
	default:
		printf("F");
		break; 
}	
return 0;	
 } //�ɼ�ת���ɵȼ���Ҳ������if-else������� 
