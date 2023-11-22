#include<stdio.h>
int main()
{
    int L;
    scanf("%d",&L);
    if(L<3)
    printf("LIGHT");
    else if(L>=3&&L<7)
    printf("MODERATE");
    else if(L>=7)
    printf("HEAVY");
}