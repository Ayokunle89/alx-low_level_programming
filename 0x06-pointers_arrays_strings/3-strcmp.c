#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: Integer value
 */
int _strcmp(char *s1, char *s2)
{
    /*Decleration*/
	int x = 0, y = 0, c = 0, r = 0, lm;

    /*Statement*/
	while (s1[x])
	{
		x++;
	}

	while (s2[y])
	{
		y++;
	}

	if (x <= y)
	{
		lm = x;
	}
	else
	{
		lm = y;
	}

	while (c <= lm)
	{
		if (s1[c] == s2[c])
		{
			c++;
			continue;
		}
		else
		{
			r = s1[c] - s2[c];
			break;
		}

		c++;
	}

	return (r);
}
