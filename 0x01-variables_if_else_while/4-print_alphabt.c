/*Prints lowercase alphabets with the exception of e & q*/
#include <stdio.h>
/**
 * main - prints out lowercase alphabets,
 * except e & q, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
			putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);

}
