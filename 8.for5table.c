#include <stdio.h>
int main()
{
	int t,s,e;
	scanf("%d%d%d",&t,&s,&e);
	for(; s<=e; s++)
	{
		printf("%d*%d=%d\n",t,s,t*s);
	}
}
