#include <stdio.h>
int main()
{
	int n,r,sum=0;
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		if(r%2==0)
		{
			sum += r;
		}
		n=n/10;
	}
	printf("%d ",sum);
}
