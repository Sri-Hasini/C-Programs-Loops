#include <stdio.h>
int main()
{
    int n,sum=0;
    int i,count=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum+=arr[i];
    } 
    for(i=0;i<n;i++)
	{
    if(sum/n<=arr[i])
    {
        count++;
	}
    }
    printf("%d",count);
}
