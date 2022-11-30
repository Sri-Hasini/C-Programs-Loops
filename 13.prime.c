#include <stdio.h>
int main()
{
	int i,n,f=0;
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			f=1;
			break;
		}                                                                      
    }
	if(f==1)
	{
		printf("NOT PRIME");
	}
	else
	{
		printf("PRIME");
	}
}
