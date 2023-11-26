#include <stdio.h>
int main()
{
    int n;
    int i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int a,b,found=0,small=1000;
    scanf("%d%d",&a,&b);
    for(i=0;i<n;i++)
    {
    	if(arr[i]<a||arr[i]>b)
    	{
    		found=1;
    		if(arr[i]<small)
    		{
    			small = arr[i];
			}
		}
    }
    if(found==0)
    {
    	printf("-1");
	}
	else
	{
		printf("%d",small);
	}
}
