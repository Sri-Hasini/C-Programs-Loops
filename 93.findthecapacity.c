#include <stdio.h>
int main()
{
	int i,s,t,b;
	scanf("%d%d%d",&s,&t,&b);
	int a=2*s*t*b*512;
	int y=a/1024;
	printf("%dKB",y);
}
