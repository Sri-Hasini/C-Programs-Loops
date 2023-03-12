#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	int r,n,i,sq;
	for(i=a;i<=b;i++)
	{
		sq=i*i;
		int sum=0;
		while(sq>0)
		{
			r=sq%10;
			sum += r;
			sq=sq/10;
		}
		if(sum==i)
		{
			printf("%d ",i);
		}
	}
}
