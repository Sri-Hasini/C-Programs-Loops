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
	int j;
	for(i=0,j=n-1;i<j;i++,j--)
	{
		int t=arr[i];
		arr[i]=arr[j];
		arr[j]=t;
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
