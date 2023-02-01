#include <stdio.h>
#include <math.h>
//sqrt,pow,ceil,floor,abs,log10
int main()
{
	int n=30;
	float m=sqrt(n);
	printf("%f\n",m);//sqrt
	
	int a=10,b=3;
	int x=pow(b,a);
	printf("%d\n",x);//pow
	
	//ceil-->rounds up the given point value to its nearest integer
	float z=14.9;
	printf("%d\n",(int)ceil(z));
	
	//floor-->rounds down the given point value to its nearest integer
	printf("%d\n",(int)floor(z));
	
	//abs
	printf("%d\n",abs(a-b));
	
	//log10
	printf("%d\n",(int)log10(15)+1);
	}
	
	
	
