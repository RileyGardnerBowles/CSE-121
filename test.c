#include <stdio.h>

int main(void)

{
	int even[] = {2, 4, 6, 8};

	int *int_ptr, data;

	int_ptr = &data;

	int_ptr = *(even + 2);

	printf("%i", int_ptr);
}