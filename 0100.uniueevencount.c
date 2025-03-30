#include <stdio.h>
int main()
{
	int n,count=0;
	scanf("%d",&n);
	int arr[n];
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int visited[101] = {};
    for(i=0;i<n;i++)
    {
        if(visited[arr[i]]!=1&&arr[i]%2==0)
        {
            count++;
            visited[arr[i]] = 1;
        }
    }
    printf("%d",count);
}
