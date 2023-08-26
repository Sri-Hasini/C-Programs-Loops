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
    
    for(i=0;i<n;i++)
    {
    if(arr[i]%2!=0&&arr[i-1]%2==0&&arr[i+1]%2==0)
    {
        count++;
    } 
    }
    printf("%d",count);
    
}
