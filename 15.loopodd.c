#include <stdio.h>
int main()
{
	int i=0,a,b;
	printf("\n  Enter 2 numbers");
	scanf("%d%d",&a,&b);
	printf("The odd numbers are \n");
	for(i=a;i<=b;i++)
	{
		if(i%2!=0)
		{
				printf("%d ",i);
			}
    }
}
	
