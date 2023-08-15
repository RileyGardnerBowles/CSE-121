/*Could you imagine the chaos if sizeof() didn't exist?.*/
#include <stdio.h>

int main(void)
{
	printf("Size of _Bool         = %i\n", sizeof(_Bool) );
	printf("Size of char          = %i\n", sizeof(char) );
	printf("Size of short int     = %i\n", sizeof(short int) );
	printf("Size of int           = %i\n", sizeof(int) );
	printf("Size of long int      = %i\n", sizeof(long int) );
	printf("Size of long long int = %i\n", sizeof(long long int) );
	printf("Size of float         = %i\n", sizeof(float) );
	printf("Size of double        = %i\n", sizeof(double) );
	printf("Size of long double   = %i\n", sizeof(long double) );
	return 0;
}
