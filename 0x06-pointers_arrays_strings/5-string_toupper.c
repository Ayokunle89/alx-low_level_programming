#include "main.h"

/**
 * string_toupper - Changes lowercase to uppercase
 * @p: The string to be modified
 *
 * Return: character variable
 */
char *string_toupper(char *p)
{
    /*Decleration*/
	int x = 0;

	while (p[x])
	{
		if (p[x] >= 97 && p[x] <= 122)
		{
			p[x] -= 32;
		}

		x++;
	}

	return (p);
}
