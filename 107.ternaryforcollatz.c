#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	while(n>1)
	{
		n=n%2==0 ? n>>1: 3*n+1;
		printf("%d ",n);
	}
}
