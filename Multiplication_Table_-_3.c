#include<stdio.h>
int main ()
{
    int n,i,m,g;
    scanf("%d%d%d",&n,&m,&g);
    for(i=m;i<=g;i++)
    printf("%d x %d = %d
",n,i,n*i);
    
}