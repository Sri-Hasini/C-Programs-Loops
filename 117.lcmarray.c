#include <stdio.h>
int main()
{
	int n,m,i;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
	    scanf("%d",&arr[i]);
	}
	while(1)
	{   
	    if((i*i)%arr[i]==0)
	    {
	    	break;
		}
	}
	 printf("%d ",i*i);
}
