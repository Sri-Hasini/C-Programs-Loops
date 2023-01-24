#include <stdio.h>
int main()
{
	int n,m,i=0;
	scanf("%d%d",&n,&m);
	while(1)
	{ 
	    i++;
	    if((n*i)%m==0)
	    {
	    	break;
		}
	}
	 printf("%d ",n*i);
}
