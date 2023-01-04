#include "main.h"

/**
 * reverse_array - Reverses an array
 * @a: An array of integers
 * @n: Number of elements to reverse
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
    /*Decleration*/
	int *x, y, temp, z;

	x = a;

	for (y = 1; y < n; y++)
	{
		x++;
	}

	for (z = 0; z < y / 2; z++)
	{
		temp = a[z];
		a[z] = *x;
		*x = temp;
		x--;
	}
}
