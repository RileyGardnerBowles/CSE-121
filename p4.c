/*I'm a very flawed type of smart that often forgets important things.
Here, I didn't know basic properties of prime that would WAY speed up this code.*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main(void)
{
	// Goal: Find x amount of prime numbers
	int primeGoal = 0;	  // User input, declares the target prime to be found
	int i = 2;			  // Counter variable, starts at 2 because (anything % 1 = 0)
	int primeCount = 1;	  // Amount of primes found so far. Starts with the first prime, 2.
	int biggestPrime = 2; // Biggest prime found so far. Starts with the first prime, 2.
	int testnumber = 2;	  // The number to test. Starts with 2 to get rid of some redundant calculations
	bool prime = true;	  // Answer to question "True or false: Is this number a prime?"

	printf("Welcome to RGB Primes Dept.\nWhich prime number are you trying to find?: ");
	scanf("%i", &primeGoal);

	while (primeCount < primeGoal)
	{
		++testnumber;
		prime = true;
		for (i = 2; i < testnumber; ++i)
		{
			if (testnumber % i == 0)
			{
				prime = false;
				break;
			}
		}
		if (prime == true)
		{
			biggestPrime = testnumber;
			++primeCount;
		}
	}
	printf("Prime number %i is %i.\n", primeCount, biggestPrime);
	return 0;
}
