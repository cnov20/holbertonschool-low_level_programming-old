#include<stdio.h>

/**
 * main - entry point of program
 *
 * for - iterate through all base 10 numbers
 *
 * putchar - print new line, outside of for loop
 *
 * Return: (0) - always - success
 *
 */

int main(void)
{

	int i;

	for (i = 0; i < 10; i++)
	{

		printf("%d", i);
	}

	putchar('\n');

	return (0);
}
