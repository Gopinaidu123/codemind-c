#include<stdio.h>
int main ()
{
    int no,rem,sum;
    scanf("%u",&no);
   sum=no%10;
   while(no>9)
   {
      no=no/10;
   }
   sum=sum+no;
   printf("%d",sum);
    }
