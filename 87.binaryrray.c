#include <stdio.h>
int main()
{
    int n,i,found=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    { 
        if(arr[i]!=0&&arr[i]!=1)
        {
    	found=1;
    	break;
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
