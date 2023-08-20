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
    int found=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]==sum/n)
        {
            found=1;
            break;
        }
    }
    if(found==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}
