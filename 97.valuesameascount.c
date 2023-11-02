#include <stdio.h>
int main()
{
	int n,cnt=0;
	scanf("%d",&n);
	int arr[n];
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int vis[101]={};
	int found=0,j;
	for(i=0;i<n;i++)
	{
		int count=0;
		for(j=0;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				count++;
			}
		}
		if(arr[i]==count&&vis[arr[i]]!=1)
		{
			cnt++;
		}
		vis[arr[i]]=1;
		
	}
	printf("%d",cnt);
	
}
