#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n%2==0||n%3==0||n%5==0)
	{   
		printf("Ugly Number");
	}
	else
	{
		printf("Not Ugly Number");
	}
}
