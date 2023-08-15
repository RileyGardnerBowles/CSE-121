#include <stdio.h>

int main(void)
{
	int a, b, c = 10, d = 9;

	a = (c++) + 10;

	b = (++d) + 10;

	printf("A is %i, B is %i\n", a, b);
}
