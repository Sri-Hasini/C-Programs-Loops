#include <stdio.h>
int main()
{   
    int x;
    scanf("%d",&x);
    if(x>=0)
    {
    	printf("%d",x/10);
	}
	else
	{
		printf("%d",(x/10)-1);
	}
   
}
