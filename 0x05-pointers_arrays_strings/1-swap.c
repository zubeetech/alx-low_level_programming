#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: input 1
 * @b: input 2
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
