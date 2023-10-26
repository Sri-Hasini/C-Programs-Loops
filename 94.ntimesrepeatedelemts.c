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
	int freq[11]={};
	for(i=0;i<n;i++)
	{
		freq[arr[i]]++;
	}
	int a;
	
	   scanf("%d",&a);
    if(freq[i]==a)
    {
    	printf("%d",freq[arr[i]]);
	}
}
