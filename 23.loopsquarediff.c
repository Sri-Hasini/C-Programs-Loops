#include <stdio.h>
int main()
{
	int n,r,sum1=0,sq1,sq2;
	scanf("%d",&n);
	while(n>0)
	{
	r=n%10;
	sum1 += r;
	sq1=sum1*sum1;
	sq2+=r*r;
	n=n/10;
    }
	printf("%d",sq1-sq2);
}
