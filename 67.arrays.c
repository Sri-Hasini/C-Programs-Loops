#include <stdio.h>
int main()
{
	int n;
	printf("Enter array size:");
	scanf("%d",&n);
	int arr[n];
	//Reading array elements
	int i;
	printf("Enter array elements: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	//Accessing array elements
	printf("Entered elements are: \n");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
