#include<stdio.h>
int main ()
{
    int n,i,m;
    scanf("%d%d",&n,&m);
    for( i=m;i>=n;--i)
    {
        printf("%d ",i);
    }
}