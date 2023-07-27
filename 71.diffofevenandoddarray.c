#include <stdio.h>
#include <math.h>
int main()
{
    int n,sum=0,sum1=0,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            sum+=arr[i];
        }
        if(arr[i]%2!=0)
        {
        	sum1 += arr[i];
		}
    }
    int m=abs(sum1-sum);
    printf("%d %d\n",sum1,sum);
    printf("%d",m);
}
