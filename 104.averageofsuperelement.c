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
    int sum=0,count=0;
    for(i=1;i<101;i++)
    {
    	if(freq[i]==i)
    	{
    		found=1;
    		sum=sum+i;
    		count++;
		}
	}
	if(found==0)
	{
		printf("-1");
	}
	else
	{
	    printf("%.2f",(float)sum/count);
	}
}
