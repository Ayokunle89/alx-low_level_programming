#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: program that prints all possible combinations of single-digit
 * Return: 0 (success)
 */

int main(void)
{
	/* Decleration */
	int comb;

	/*Statement */
	for (comb = 48; comb <= 57; comb++)
	{
		putchar(comb);
		if (comb < 57)
		{
			putchar(',');
				putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
