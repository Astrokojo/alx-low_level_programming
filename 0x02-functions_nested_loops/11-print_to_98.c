#include"main.h"
#include <stdio.h>
/**
 * print_to_98 - like it says on the tin
 *
 * @n: input to start count at
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
