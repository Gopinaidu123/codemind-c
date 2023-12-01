#include<stdio.h>
int main()
{
    int i=0,n;
    scanf("%d",&n);
    while(i<=n)
    {
        if(i%2!=0)
        printf("%d ",i);
        i++;
    }
    
}