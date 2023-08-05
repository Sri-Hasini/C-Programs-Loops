#include <stdio.h>
int main()
{
    int n,sum=0;
    int i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum+=arr[i];
    } 
    if(sum/n==arr[i])
    {
    	printf("True");
	}
	else
	{
		printf("False");
	}
}
