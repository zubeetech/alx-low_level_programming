/*Print all single didgits numbers of base 10 starting from 0*/
#include <stdio.h>
/**
 * main - prints single digit numbers from 0 to 9,
 * followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	printf("%d", n);
	printf("\n");
	return (0);
}
