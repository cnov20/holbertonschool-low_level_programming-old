#include <stdio.h>

/**
 * main - entry point of program
 *
 * func -
 *
 * putchar -
 *
 * Return: (0) - always - success
 */

int main(void)
{
	int i = 48;
	int ascii[2]  = {44, 32};
		while (i < 58)
		{
			if (i != 57)
			{
				putchar(i);
				putchar(ascii[0]);
			}
			else
			{
				putchar(i);
			}
		i++;
		}

	putchar('\n');
	return (0);

}
