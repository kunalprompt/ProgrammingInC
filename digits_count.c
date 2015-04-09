#include <stdio.h>
#include <math.h>
int main()
{
	int n=0, digits=0;
	scanf("%d", &n);
	// The C library function double log10(double x) returns the common logarithm (base-10 logarithm) of x.
	digits = (int)log10(n)+1;
	printf("%d\n", digits);
	return 0;
}
// gcc digits_count.c -lm