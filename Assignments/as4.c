#include <stdio.h>

int main()
{
	int i, power, answer = 1;

	printf("Please enter a number: ");
	scanf("%d", &power);

	i = power;			// sets a new variable i with which is equivalent to power
	while (i != 0){		
	    answer *= 2;
	    i --;
	} 
	
	// sets a new value of i, so the value of power will not change and can be recalled in the print statement
	printf("The product of 2 to the power of %d is %d.", power, answer); 

	return 0;
}
