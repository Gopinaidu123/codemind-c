#include<stdio.h>
int main()
{
	int t,n,rem,rev=0;
	scanf("%d",&n);
t=n;
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	printf("%d",rev);
}