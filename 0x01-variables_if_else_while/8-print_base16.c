/*Prints all the numbers of base 16 in lowercase.*/
#include <stdio.h>
/**
 * main - prints all hexadecimal numbers in lowercase,
 * followed by new line.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	int n;
	char c;

	for (n = 48; n < 58; n++)
		putchar(n);
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
