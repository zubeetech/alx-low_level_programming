/*The program prints alphabets in lower case*/
#include <stdio.h>
/**
 * main - prints lowercase alphabets,
 * followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);

}
