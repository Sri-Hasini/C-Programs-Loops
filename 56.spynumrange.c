//spy Number in range
#include<stdio.h>
int main()
{
    int a,b,i;
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++)
    {
    int n=i;
   int sum=0,mult=1,rem;
    while(n>0)
    {
        rem=n%10;
        sum+=rem;
        mult*=rem;
        n=n/10;
    }

   if(sum==mult)
    printf("%d ",i);
}
}
