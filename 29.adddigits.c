
#include <stdio.h>
int main()
{
	int n,r,sum=0;
	scanf("%d",&n);
	while (n>0)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
		if(n==0&&sum>9)
		{
			n=sum;
			sum=0;
		}
	}
	printf("%d",sum);
}
