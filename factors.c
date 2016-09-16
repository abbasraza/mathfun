#include <stdio.h>
#include <stdlib.h>

void print_factors(int number)
{
	printf("Factors of %d are:	", number);

	int i;
	for (i = 1; i < number; ++i)
	{
		if (number % i == 0)
		{
			printf("%d,", i);
		}
	}

	printf("%d\n", number);
}

int main(int argc, char * argv[])
{
	int i;

	for (i = 1; i < argc; ++i)
	{
		int number = atoi(argv[i]);
		if (number)
		{
			print_factors(number);
		}
	}

	return 1;
}
