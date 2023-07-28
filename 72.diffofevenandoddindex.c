#include <stdio.h>
#include <math.h>
int main()
{
	int n,i,sum=0,sum1=0;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		if(i%2==0)
		{
			sum += arr[i];
		}
		if(i%2!=0)
		{
			sum1 += arr[i];
		}
	}
	printf("%d ",abs(sum-sum1));
}
