#include <stdio.h>

int main() {
	// your code goes here
    int tt;
    scanf("%d", &tt);
    while(tt--)
    {
        int a;
        scanf("%d", &a);
        printf("%d\n", (a*50) - ((a*50)*0.7));
    }
	return 0;
}
