#include <stdio.h>
int main()
{
	int r,n,count1=0,count2=0;
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		if(r%2==0)
		{
		count1++;
		}
		else
		{
		count2++;
		}
		n=n/10;
	}
	printf("%d %d",count1,count2);
}
