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
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return(dest);
}
