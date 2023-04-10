#include <stdio.h>

int main()
{
	int i, days, start;

	do{
		printf("Enter the number of days: ");
		scanf("%d", &days);

		printf("Enter the starting day of the week (1 = Sun, 7 = Sat): ");
		scanf("%d", &start);	
	} while ((days <= 27 || days >= 32) || (start <= 0 || start >= 8)); // will keep asking for new inputs if the user enters invalid one

	for (i = 1; i < start; i++){		// will print " " if i is less than start 
		printf("   ");
	}

	for (i = 1; i <= days; i++){
		printf("%3d", i);				// will print the value of i with 3 spaces as long as it's less than days
		if((start + i - 1) % 7 == 0)	// if there is seven numbers in a row, prints in new line
			printf("\n");
	}

	return 0;
}

