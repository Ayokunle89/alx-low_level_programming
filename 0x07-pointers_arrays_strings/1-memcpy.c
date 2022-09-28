#include "main.h"

/**
 * _memcpy - copies memory area.
 * @dest: Pointer to the char dest
 * @src: Pointer to the char src
 * @n: int variable
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	/*decleration*/
	int x, y;
	x = 0;
	y = 0;

	/*Statement*/
	while (n > 0)
	{
		dest[x] = src[y];
		x++;
		y++;
		n--;
	}
	return(dest);
}
