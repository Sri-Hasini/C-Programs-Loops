#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int freq[100001]={},found=0;
	for(i=0;i<n;i++)
	{
		freq[arr[i]]++;
	}
	for(i=0;i<100001;i++)
    {
    if(freq[i]==1)
    {   
    	printf("%d ",i);
    	break;
	}
    }
}
