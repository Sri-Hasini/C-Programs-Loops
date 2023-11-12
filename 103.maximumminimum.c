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
	int found=0;
	for(i=0;i<n;i++)
	{
		freq[arr[i]]++;
	}
	for(i=1;i<101;i++)
	{
		
		if(freq[i]==i)
		{    
		    found=1;
			printf("%d",i);
			break;
		}
	}
	for(i=101;i>0;i--)
	{
		if(freq[i]==i)
		{
			found=1;
			printf("%d",i);
			break;
		}
	}
	if(found==0)
	{
		printf("-1");
	}
}
