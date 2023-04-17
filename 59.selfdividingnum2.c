#include <stdio.h>
int main()
{
	int a,b,i,r,n,x;
	scanf("%d%d",&a,&b);
	for(i=a;i<=b;i++)
	{   int count=0,sum=0;
	    while(count>0)
		{
	        r=n%10;
		    count++;
		    n=n/10;
	        count*r;
	        (count-1)*r;
	        (count-2)*r;
	        sum += count;
	    }
	    printf("%d",sum);
	    
	}
	
}
