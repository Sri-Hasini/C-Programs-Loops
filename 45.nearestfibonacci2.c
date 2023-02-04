#include <stdio.h>
int main()
{
   int a, b, c=1, i, n,x,y;
   scanf("%d",&n);
   a = 0; b = 1;
      while(c<=n)
   {
      a = b;
      b = c;
      c = a + b;
   }
   if(n-b>c-n)
   {
   	printf("%d ",c);
   }
   else if(n-b<c-n)
   {
   	printf("%d ",b);
   }
   else
   {
   	printf("%d %d",b,c);
   }
}

