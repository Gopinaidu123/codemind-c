#include<stdio.h>
int main()
{
    int e,h,x,d;
    scanf("%d%d%d%d",&x,&e,&h,&d);
    d=e*1+h*2;
    if(d>=x)
    printf("Qualify");
    else
    printf("Not Qualify");
}