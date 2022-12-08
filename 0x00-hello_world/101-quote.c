#include <stdio.h>
#include <unistd.h>
/**
 *main - Write out some quoted texts.
 *Description: Using the main function this program outputs some texts
 *
 * Return: 1
 */
int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
