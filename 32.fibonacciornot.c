#include <stdio.h>
int main() 
{
   int a, b, c,f, n;
   scanf("%d",&n);
   a = 0; 
   b = 1;
   f=0;
   while(a<=n)
   {
   	    if(a==n)
   	    {
   			f=1;
   			break;
	    }
      	c = a + b;
      	a = b;
     	b = c;
}
   if(f==1)
   {
       printf("True");
   }
   else
   {
       printf("False");
   }
}
