#include <stdio.h>
int main()
{
	int n,found=0;
	scanf("%d",&n);
	int arr[n];
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		if(i%2==0)
		{   if(arr[i]%2!=0)
	    	{
		    	found=1;
		    	break;
	    	}
		}
	}
	if(found==1)
	{
		printf("False");
	}
	else
	{
		printf("True");
	}
}
