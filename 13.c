#include<stdio.h>
int main()
{
	const int pass_score=60; 
	double you_score;
	scanf("d",you_score);
	if(you_score>=pass_score)
	printf("congratulation");
	else
	printf("work more hard,my friend"); 
	return 0;
}/*if else这些后面可以没有大括号*/ 
