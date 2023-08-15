#include <stdio.h>

int main(void)
{
	printf("Size of _Bool         = %zu\n", sizeof(_Bool) );
	printf("Size of char          = %zu\n", sizeof(char) );
	printf("Size of short int     = %zu\n", sizeof(short int) );
	printf("Size of int           = %zu\n", sizeof(int) );
	printf("Size of long int      = %zu\n", sizeof(long int) );
	printf("Size of long long int = %zu\n", sizeof(long long int) );
	printf("Size of float         = %zu\n", sizeof(float) );
	printf("Size of double        = %zu\n", sizeof(double) );
	printf("Size of long double   = %zu\n", sizeof(long double) );
	return 0;
}
