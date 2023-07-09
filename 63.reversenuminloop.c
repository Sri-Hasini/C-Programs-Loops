#include <stdio.h>
int main()
{
	int a,b,i,r,n;
	scanf("%d%d",&a,&b);
	for(i=a;i<=b;i++)
	{    
	   while(n>0)
	   {
		r=n%10;
		
		n=n/10;
	   }
	   printf("%d ",i);
	}
}
