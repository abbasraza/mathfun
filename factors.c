/* 	Author: Abbas Raza (abbas.raza.1707@gmail.com)
 *
 * Usage: ./factors 15 91 88 192
 *
 * Factors of 15 are:	1,3,5,15
 * Factors of 91 are:	1,7,13,91
 * Factors of 88 are:	1,2,4,8,11,22,44,88
 * Factors of 192 are:	1,2,3,4,6,8,12,16,24,32,48,64,96,192
 */


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
