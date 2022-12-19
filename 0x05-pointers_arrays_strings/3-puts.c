#include "main.h"

/**
 * _puts - prints out a string followed by new line
 * @str: - stores the string to be printed
 *
 * Return: string (str)
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
