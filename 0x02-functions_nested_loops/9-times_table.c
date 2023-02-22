#include "main.h"
#include <stdio.h>
/**
* times_table - prints the 9 times table, starting with 0
*/
void times_table(void)
{
	int i, j, k;

	for (int i = 0; i <= 9; i++)
	{
		for (int j = 0; j <= 9; j++)
		{
			int k = i * j;
			
			if (j == 0)

			{
				putchar('0');
			}

			else if (k < 10)
			{
				putchar(');
				putchar(k + '0');
			}

			else if (k >= 10)
			{
				putchar(');
				putchar(k + '0');
			}

			if (j != 9)
			{
				putchar(',');
				putchar(' ');

			}
		}
		putchar('\n');
	}
}
