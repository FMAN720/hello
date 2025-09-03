#include<stdio.h>
#include<math.h>
int main()
{
    int h,r;
    scanf("%d %d", &h, &r);
    double pi=3.14;
    double v=pi*r*r*h;
    int bucket=ceil(20000/v);
    printf("%d\n",bucket);
    return 0;
}
