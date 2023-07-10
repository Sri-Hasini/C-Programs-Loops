#include <stdio.h>
int main()
{
	int a,b,i,r,rev=0;
	scanf("%d%d",&a,&b);
	for(i=a;i<=b;i++)
	{
		int n=i;
		int t=n;
		while(n>0)
		{
			r=n%10;
			rev=rev*10+r;
			n=n/10;
		}
		if(t==rev)
		printf("%d ",t);
    }
}
