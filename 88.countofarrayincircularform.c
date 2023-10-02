#include <stdio.h>
int main()
{
    int n,count=0;
    int i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=1;i<n-1;i++)
    {
    if(arr[i-1]%2!=0&&arr[i+1]%2==0||arr[i-1]%2==0&&arr[i+1]%2!=0)
    {
       
		count++;
    } 
    }
    if(arr[n-2]%2!=0&&arr[0]%2==0||arr[n-2]%2==0&&arr[0]%2!=0)
    {
    	count++;
	}
	if(arr[n-1]%2!=0&&arr[1]%2==0||arr[n-1]%2==0&&arr[1]%2!=0)
	{
		count++;
	}
    printf("%d",count);
    
}
