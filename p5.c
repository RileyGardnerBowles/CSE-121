#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
bool primeCheck(int);
int main(void)
{
	// Goal: Find x amount of prime numbers
	// Uses more efficient algorithm that counts up by 2 rather than 1
	// This has a caveat that counter variables have to by-default include the first prime, 2
	int primeGoal = 0;	  // User input, declares the target prime to be found
	int primeTest = 3;	  // Counter variable
	int primeCount = 1;	  // Amount of primes found so far. Starts with the first prime, 2.
	int biggestPrime = 2; // Biggest prime found so far. Starts with the first prime, 2.
	bool prime = true;	  // Answer to question "True or false: Is this number a prime?"

	printf("Welcome to RGB Primes Dept.\nWhich prime number are you trying to find?: ");
	scanf("%i", &primeGoal);
	while (primeCount < primeGoal)
	{
		if (primeCheck(primeTest))
		{
			biggestPrime = primeTest;
			++primeCount;
		}
		primeTest = primeTest + 2;
	}
	printf("Prime number %i is %i.\n", primeCount, biggestPrime);
	return 0;
}
bool primeCheck(int testNumber)
{
	int counter = 3;
	if (testNumber < 2) // Numbers less than 2 can be ignored for our purposes
	{
		return false;
	}
	else if (testNumber % 2 == 0)
	{
		return false;
	}
	else
	{
		for (counter = 3; counter < testNumber; counter = counter + 2) // For each number less than testNumber, starting at 3 and counting up by 2...
		{
			if (testNumber % counter == 0) // If a number has no modulo
			{
				return false;
			}
		}
		return true;
	}
}