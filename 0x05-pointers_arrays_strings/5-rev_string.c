#include "main.h"

/**
 * rev_string - reverses a string
 * @s: stores string to be reversed
 *
 * Return: reversed string
 */
void rev_string(char *s)
{
	int x;
	char reversed = s[0];
	int counter = 0;

	while (s[counter] != '\0')
	{
		counter++;
	}

	for (x = 0; x < counter; x++)
	{
		counter--;
		reversed = s[x];
		s[x] = s[counter];
		s[counter] = reversed;
	}

}
