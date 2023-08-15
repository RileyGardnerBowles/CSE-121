//P6, but with documentation.
#include <stdio.h>
#include <stdlib.h>
#define MAXLEN 100
#define DEBUG 0 // Increases the verbosity of the program - End users will only see debug statements if they're nosy

int stringchars(char[]);
void memTest(char[]);
void alphabetize(char[]);
void lowercase(char[]);
void palindrome(char[], char[]);

int main(void)
{
	char *input;
	char *inputCopy;
	input = (char *)calloc(MAXLEN, sizeof(char));
	inputCopy = (char *)calloc(MAXLEN, sizeof(char));
	if (DEBUG)
	{
		memTest(input);
		memTest(inputCopy);
	}

	// user input
	printf("Welcome to RGB Palindrome dept.\nInput a string that's %i characters or less:", MAXLEN - 1);
	fgets(input, MAXLEN, stdin);
	input[stringchars(input) - 1] = '\0'; // Removes remnant line-break from stdin
	sprintf(inputCopy, "%s", input);	  // Copies input into input copy
	if (DEBUG)
	{
		printf("String is [%s]\n", input);
		printf("Copy of string is [%s]\n", inputCopy);
	}

	palindrome(input, inputCopy);
	return 0;
}
int stringchars(char lenStr[]) // Retrieves how many characters are in a string (does not include terminator)
{
	for (int i = 0; i < MAXLEN; i++)
	{
		if (lenStr[i] == '\0')
		{
			if (DEBUG)
				printf("STRINGLENGTH\n String length is %i\n", i);
			return i;
		}
	}
}
void alphabetize(char alphaStr[]) // Culls a string to only alphanumeric characters
{
	if (DEBUG)
		printf("ALPHABETIZE\n Initial string is %s", alphaStr);
	int compare;
	for (int read = 0, write = 0; read < MAXLEN; read++)
	{
		compare = (int)alphaStr[read]; // Retrieves ASCII code of read point
		if (alphaStr[read] == '\0')
		{
			alphaStr[write++] = alphaStr[read];
			if (DEBUG)
				printf(" Alphabetized string is %s\n", alphaStr);
			return;
		}
		else if ((compare >= 65 && compare <= 90) || (compare >= 97 && compare <= 121))
		{
			alphaStr[write++] = alphaStr[read];
		}
	}
}
void lowercase(char lowerStr[])
{
	if (DEBUG)
		printf("LOWERCASE\n Initial string is %s\n", lowerStr);
	int compare;
	int terminal = stringchars(lowerStr);
	for (int i = 0; i < terminal; i++)
	{
		compare = (int)lowerStr[i]; // Retrieves ASCII code of at point i of array
		if (DEBUG)
			printf("  Comparing point %c...\n", lowerStr[i]);
		if (compare >= 65 && compare <= 90) // ASCII codes for "A" and "Z"
		{
			if (DEBUG)
				printf("   Uppercase %c detected!\n", lowerStr[i]);
			compare += 32; // Because letters are in proper order in ASCII, we can add 32 to to ASCII code of any capital letter to get its lowercase letter.
			lowerStr[i] = (char)compare;
		}
	}
	if (DEBUG)
		printf(" Lowercase string is %s\n", lowerStr);
}
void palindrome(char palStr[], char copyStr[])
{
	alphabetize(palStr);
	lowercase(palStr);
	int palLen = stringchars(palStr);
	int end = palLen - 1;
	if (DEBUG)
	{
		printf("PALINDROME\n");
		printf(" palindrome length is %i\n", palLen);
	}
	if ((palLen % 2) == 1)
	{
		if (DEBUG)
			printf("palinLen is odd! Decreasing by 1...\n");
		--palLen;
	}
	palLen = palLen / 2;
	if (DEBUG)
		printf(" After odd-check, palinLen is %i\n", palLen);
	for (int start = 0; start < end; start++, end--)
	{
		if (DEBUG)
			printf(" Checking characters %c and %c:", palStr[start], palStr[end]);
		if (palStr[start] == palStr[end])
		{
			if (DEBUG)
				printf("these are the same\n");
		}
		else
		{
			printf("This is not a palindrome\n");
			return;
		}
	}
	printf("%s is a palindrome\n", copyStr);
}
void memTest(char memStr[])
{

	if (memStr != NULL)
	{
		printf("Memory for input successfully allocated\n");
	}
	else
	{
		printf("ERROR: MEMORY NOT ALLOCATED\n");
	}
}