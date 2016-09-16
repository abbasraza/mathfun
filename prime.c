/* 	Author: Abbas Raza (abbas.raza.1707@gmail.com) 
 *
 * Usage: ./prime 11 12 13 14 15 16 17 18 19 20 73
 * 
 *  Number 11 is prime
 *  Number 12 is not prime
 *  Number 13 is prime
 *  Number 14 is not prime
 *  Number 15 is not prime
 *  Number 16 is not prime
 *  Number 17 is prime
 *  Number 18 is not prime
 *  Number 19 is prime
 *  Number 20 is not prime
 *  Number 73 is prime
 */

#include <stdio.h>
#include <stdlib.h>

void print_prime(int number)
{
	printf("Number %d is", number);

	int i;
	for (i = 2; i < number; ++i)
	{
		if (number % i == 0)
		{
			printf(" not prime\n");
			return;
		}
	}

	printf(" prime\n");
}

int main(int argc, char * argv[])
{
	int i;

	for (i = 1; i < argc; ++i)
	{
		int number = atoi(argv[i]);
		if (number)
		{
			print_prime(number);
		}
	}

	return 1;
}
