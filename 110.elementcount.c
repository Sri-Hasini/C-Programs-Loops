#include <stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	int arr[n],freq[101]={};
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		freq[arr[i]]++;
	}
	int vis[101]={};
	for(i=0;i<n;i++)
	{
		if(vis[arr[i]]!=1)
		{
			printf("%d %d ",arr[i],freq[arr[i]]);
			vis[arr[i]]=1;
		}
	}
}

