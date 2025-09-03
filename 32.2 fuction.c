#include<stdio.h>
void sum(int begin,int end)
{
	if(begin>end){
		int t;
		t=end;
		end=begin;
		begin=t;
	}
	int sum=0;
	int i;
	for(i=begin;i<end;i++){
		sum+=i;
	}
	printf("begin:%d end:%d sum=%d\n",begin,end,sum);
}
int main(){
	sum(10,30);
	sum(10,52);
	sum(20,1);
	return 0;
}
