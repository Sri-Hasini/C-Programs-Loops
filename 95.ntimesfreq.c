#include <stdio.h>
int main()
{
	int n,a,found=0;
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
	scanf("%d",&a);
    for(i=0;i<101;i++)
    {
    if(freq[i]==a)
    {   
        found=1;
    	printf("%d ",i);
	}
    }
    if(found==0)
	{
		printf("-1");
	}
}
