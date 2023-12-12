#include <stdio.h>
int main()
{
    int n,l,b,c,w,x=0;
    scanf("%d",&n);
    int arr[n];
    scanf("%d%d%d",&l,&b,&w);
    int d=4*(l+b+w);
    c=d/2;
    printf("%d",c);
}
