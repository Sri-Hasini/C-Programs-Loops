//spy Number in range
#include<stdio.h>
int main()
{
    int n,r,i;
    scanf("%d",&n);
   int sum=0,mult=1,rem;
    while(n>0)
    {
        rem=n%10;
        sum+=rem;
        mult*=rem;
        n=n/10;
    }

   if(sum==mult)
   {
    printf("Spy Number");
   }
   else
   {
       printf("Not Spy Number");
   }
}
