#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random passwords
 *
 * Return: integer on success
 */
int main(void)
{
	int pass[1000];
	int i;
	int counter;
	int s;

	counter = 0;

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		pass[i] = rand() % 78;
		counter += (pass[i] + '0');
		putchar(pass[i] + '0');

		if ((2772 - counter) - '0' < 78)
		{
			s = 2772 - counter - '0';
			counter += s;
			putchar(s + '0');
			break;
		}

	}
	return (0);
}
