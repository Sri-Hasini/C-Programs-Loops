#include <stdio.h>
int main()
{
	int i,x,a;
	scanf("%d%d",&i,&x);
	a=1;
	while(a<=x)
	{
		printf("%d * %d = %d\n",i,a,i*a);
		a++;
	}
}
