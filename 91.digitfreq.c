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
	int freq[101]={};
	for(i=0;i<n;i++)
	{
		freq[arr[i]]++;
	}
	for(i=0;i<101;i++)
	{
	printf("%d ",freq[i]);
    }
}
