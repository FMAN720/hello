#include<stdio.h>
	int amount[]={10,5,2};
	char *name[]={"a","b","c"};
	int search(int key,int a[],int len){
		int ret=-1;
		int i;
		for(i=0;i<len;i++){
			if(a[i]==key){
				ret=i;
				break;
			}
		}
		return ret;
	} 
	int main(){
	int a;
	scanf("%d",&a);
	int g=search(a,amount,sizeof(amount)/sizeof(amount[0]));
	if(g>-1){
		printf("%s\n",name[g]);
		return 0;
	}
	}//ËÑË÷µÄÀı×Ó 
