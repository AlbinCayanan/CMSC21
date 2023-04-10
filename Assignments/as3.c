#include <stdio.h>

int main()
{
	int i;

	printf("for loop \n");
	for (i = 0; i <= 128; i++)
    {
        printf("%d \n", i + 1);
		i *= 2; 
    }

	
	i = 1;
	printf("while loop \n");
	while (i <= 128){
		printf("%d \n", i);
		i *= 2; 
	}
		
	return 0;
}