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
	//reversing using second array
	int brr[n];
	int j=0;
	for(i=n-1;i>=0;i--)
	{
		brr[j]=arr[i];
		j++;
	}
	for(j=0;j<n;j++)
	{
		printf("%d ",brr[j]);
	}
	
}
