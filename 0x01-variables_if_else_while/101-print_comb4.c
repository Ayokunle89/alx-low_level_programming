#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: prints all possible different combinations of three digits.
 * Return: 0 (success)
 */

int main(void)
{
	/* Decleration */

	int n1, n2, n3;

	/* Statement */

	for (n1 = '0'; n1 <= '7'; n1++)
	{
		for (n2 = n1 + 1; n2 <= '8'; n2++)
		{
			for (n3 = n2 + 1; n3 <= '9'; n3++)
			{
				putchar(n1);
				putchar(n2);
				putchar(n3);
			if (n1 == '7' && n2 == '8' && n3 == '9')
			break;
			putchar(',');
		putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
