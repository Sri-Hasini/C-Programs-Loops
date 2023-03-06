#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,n;
	scanf("%d",&n);
	int t=n,t1=n;
	int dc=0;
	while(n>0)
	{
		dc++;
		n=n/10;
	}
	int sum=0;
	while(t>0)
	{
		int r=n%10;
		sum += pow(r,dc);
		dc--;
		t=t/10;
	}
	printf("%d ",sum);
}
