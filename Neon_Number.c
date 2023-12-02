#include<stdio.h>
#include<math.h>
int main ()
{
    int sum=0,n,sq,rem;
    scanf("%d",&n);
    sq=n*n;
    while(sq!=0)
    {
        rem=sq%10;
        sum=sum+rem;
        sq/=10;
    }
    if(n==sum)
    printf("Neon Number");
    else
    printf("Not Neon Number");
}