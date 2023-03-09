#include<stdio.h>
int main()
{
    int a,b,i;
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++)
    {
   int sq=i*i;
    int sum=0,rem;
    while(sq!=0)
    {
        rem=sq%10;
        sum+=rem;
        sq/=10;
    }

   if(sum==i)
    printf("%d ",i);
}
}
