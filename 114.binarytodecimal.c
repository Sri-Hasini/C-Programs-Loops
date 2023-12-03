#include <stdio.h>
int main()
{
	int n,i,r,rev=0;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int x = 1;
	int sum = 0;
	for(i=n-1;i>=0;i--)
	{
		sum += x * arr[i];
		x = x * 2;
	}
	printf("%d", sum);
}
