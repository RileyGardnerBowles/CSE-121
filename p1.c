#include <stdio.h>

//A classic addition script.. The way strings are formatted here let me really appreciate python's f-strings.

int main(void) {
	int a, b, c;

	a = 10;
	b = 20;

	c = a + b;

	printf("%i + %i = %i\n", a, b, c);
	printf("That was easy!\n");

	return 0;
}
