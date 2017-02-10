#include <stdio.h>

/**
 * main - entry of program
 *
 * Return: 0 - always - success
 *
 */

int main(void)
{
  int i;
  int j; 

  for (i = 0; i < 10; i++)
    {
      for (j = 0; j < 10; j++)
	{
	  putchar(i + '0');
	  putchar(j + '0');
	  
	  if (i != 9 || j != 9)
	    {
	      putchar(',');
	      putchar(' ');
	    }
	}
    }
  putchar('\n');
  return (0);
}
