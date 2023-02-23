#include <stdio.h>
/**
 * main - prints the first 98 Fibonacci numbers
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int i, bef = 1, aft = 2, sum;
	unsigned long int bef1, bef2, aft1, aft2, sum1, sum2;

	printf("%lu, %lu", bef, aft);

	for (i = 3; i <= 98; i++)
	{
		sum = bef + aft;
		bef = aft;
		aft = sum;

		if (i < 91)

		{
			printf(", %lu", sum);
		}
		else
		{
			bef1 = bef / 1000000000;
			bef2 = bef % 1000000000;
			aft1 = aft / 1000000000;
			aft2 = aft % 1000000000;
			sum1 = sum / 1000000000;
			sum2 = sum % 1000000000;

			printf(", %lu%09lu", sum1, sum2);
		}
	}

	printf("\n");

	return (0);
}
