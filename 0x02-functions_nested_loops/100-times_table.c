#include "main.h"
#include <stdio.h>

/**
* print_times_table - prints the n times table, starting with 0
* @n: number of the times table
*/

void print_times_table(int n)
{
	int i, j;
	if (n < 0 || n > 100)
	{
		return;
	}



	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			printf("%4d", i * j);
		}
		printf("\n");
	}
}
