#include <stdio.h>

int main()
{
	int i;

	// while loop
	i = 1;
	printf("while loop \n");
	while (i < 10)
	{
		printf("%d \n", i);
		i += 1;
	} 

	// for loop
	printf("for loop \n");
	for (int i = 1; i < 10; ++i)
	{
		printf("%d \n", i);
		i += 1;
	}

	// do while loop
	i = 1;
	printf("do while loop \n");
	do
	{
		printf("%d \n", i);
		i += 1;
	} while (i < 10);

	return 0;
}