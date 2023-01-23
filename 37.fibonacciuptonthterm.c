#include <stdio.h>
int main() 
{
   int a, b, c=1, i, n;
   scanf("%d",&n);
   a = 0; b = 1;             
   printf("%d %d ",a,b);    
   while(c<=n)     
   {
      printf("%d ",c);
      a = b;
      b = c;
      c = a + b;
   }
}
