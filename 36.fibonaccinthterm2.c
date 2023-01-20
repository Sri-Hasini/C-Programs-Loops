#include <stdio.h>

int main() {
   int a, b, c, i, n;
   scanf("%d",&n);
   a = 0; b = 1;
   
   for(i = 1; i <= n-2; i++) 
   {
      c = a + b;
      a = b;
      b = c;
      
   }
   printf("%d ",b);
   
   
}
