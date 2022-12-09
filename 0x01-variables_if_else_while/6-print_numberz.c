/*Prints numbers from 0 to 9 using the ascii value of the numbers*/
#include <stdio.h>
/**
 * main - prints the numbers 0 to 9, using ASCII values
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
