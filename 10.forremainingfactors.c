#include <stdio.h>
int main()
{
	int n,i,fc=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			fc++;
		}
    }
	printf("%d",fc);
}
