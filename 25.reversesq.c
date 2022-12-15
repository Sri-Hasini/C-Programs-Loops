#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int t=n;
	int rev=0,r,a;
	while(n>0)
	{
		r=n%10;
		rev=rev*10+r;
		a=rev*rev;
		n=n/10;
	}
	printf("%d",a);
}
