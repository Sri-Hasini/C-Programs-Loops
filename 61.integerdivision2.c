#include <stdio.h>
#include <math.h>
int main()
{   int n,r;
    scanf("%d",&n);
    while(n>0)
    { 
        r=n%10;
        n=n/10;
    }
    if(n>0)
        {
	       printf("%d\n",(int)ceil(n+1));
        }
	    else
	    {
	       printf("%d\n",(int)floor(n-1));
        }
}
