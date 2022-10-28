#include <stdio.h>
int main()
{
	int a,i,x;
	scanf("%d%d%d",&i,&a,&x);
	while(a<=x)
	{
		printf("%d*%d=%d\n",i,a,i*a);
		a++;
	}
}
