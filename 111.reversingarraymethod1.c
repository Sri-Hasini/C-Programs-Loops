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
	//printing backwards
	for(i=n-1;i>=0;i--)
	{
		printf("%d",arr[i]);
	}
}
