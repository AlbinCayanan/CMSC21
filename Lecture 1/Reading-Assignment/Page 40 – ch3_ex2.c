// Cayanan, A.A.A.
// 2022 - 13990

#include <stdio.h>

int main(void)
{	
	int i;
	float x;
	
	i = 40;
	x = 839.21f;
	
	printf(" |%d|%5d|%-5d|%5.3d|\n", i, i, i, i);
	printf(" |%10.3f|%10.3e|%-10g|\n", x, x, x);
	
	// %d displays i in minimum amount of spaces
	// %5d displays i with minimum spaces of 5 (extra spaces included)
	// %-5d displays i with minimum spaces of 5 (negative sign adds extra spaces afterwards)
	// %5.3d displays i with minimum spaces of 5 and minimum digits of 3 (extra spaces included)
	// %10.3f displays x with minimum spaces of 10 and decimal points of 3 (extra spaces included)
	// %10.3e displays x in exponential form with minimum spaces of 10 (extra spaces included)
	// %-10g displays x in either exponential or fixed decimal form (negative sign adds extra spaces afterwards)

	return 0; 

}