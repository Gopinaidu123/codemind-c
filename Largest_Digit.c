#include<stdio.h>
int main ()
{
    int n,m,l=0;
    scanf("%d",&n);
    while(n!=0)
    {
        m=n%10;
        if(m>l)
        l=m;
        n/=10;
    }
    printf("%d",l);
}