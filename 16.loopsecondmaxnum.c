#include <stdio.h>
int main()
{   int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
    	int a,b,c;
    	scanf("%d%d%d",&a,&b,&c);
    	if(a>b)
       {
	   if(a<c)
       {
		printf("%d\n",a);
       }
       else 
       {
       	printf("%d\n",c);
	   }
      }
	else
	{
		printf("%d\n",b);
	}
}
}
