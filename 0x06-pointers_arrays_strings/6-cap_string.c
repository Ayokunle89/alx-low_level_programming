#include "main.h"

/**
 * cap_string - ....
 * @x: ...
 *
 * Return: character value
 */
char *cap_string(char *x)
{
    /*Decleration*/
	int y = 0, z;
	int spa = 13;
	char spc[] = {32, 9, '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

    /*Statement*/
	while (x[y])
	{
		z = 0;
		while (z < spa)
		{
			if ((y == 0 || x[y - 1] == spc[z]) && (x[y] >= 97 && x[y] <= 122))
				x[y] = x[y] - 32;
			z++;
		}
		y++;
	}
	return (x);
}
