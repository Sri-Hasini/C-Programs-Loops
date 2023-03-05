#include <stdio.h>
int main()
{
    int r,a,b,i,n;
    scanf("%d%d",&a,&b);
    
    for(i=a;i<=b;i++)
{
	int sq=n*n,sum=0;
    while(sq>0)
    {
        r=sq%10;
        sum=sum+r;
        sq=sq/10;
    }
if(sum==n)
{

    printf("%d",i);
}
}
}
    
