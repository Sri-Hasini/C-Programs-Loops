#include <stdio.h>
int main()
{
	int n,r,sum1=0,sum2=0;
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		if(r%2==0)
		{
			sum1 += r;
		}
		else
		{
			sum2 += r;
		}
		n=n/10;
	}
	printf("%d\n%d ",sum1,sum2);
}
