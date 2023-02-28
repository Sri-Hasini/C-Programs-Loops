#include <stdio.h>
int main()
{
	int a,b,i,j,n,r;
	scanf("%d%d",&a,&b);
	for( i=a;i<=b;i++)
	{
		n=i;
		int rev=0;
		
		  while(n>0)
	    {
		    r=n%10;
		    rev=rev*10+r;
		    n=n/10;
	    }
		
			if(rev==i)
			{
				printf("%d ",i);
			}
		
		
	}
}
