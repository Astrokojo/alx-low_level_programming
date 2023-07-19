#include"main.h"
/**
 * print_times_table - nine times table
 *
 */
void times_table(int n)
{
	int i, j, result;

	if(n >= 0 && <=15)
	{

		for (i = 0 ; i <= 9; i++)
		{
			_putchar(48);

			for (j = 1; j <= 9; j++)
			{
				_putchar(',');
				_putchar(' ');

				result = i * j;

				if (result <= 99)
				{
					_putchar(' ');
				}
				else if (result >=100)
				{
					_putchar((result / 100
				else
				{
					_putchar((result / 10) + '0');
				}
				_putchar((result % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
