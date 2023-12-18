<<<<<<< HEAD
#include "stdio.h"
/**
 * main - Entry point
=======
#include <stdio.h>

/**
 * main - Print all possible combinations of single digit numbers
>>>>>>> refs/remotes/origin/master
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
<<<<<<< HEAD
int k;
k = 48;
while (k <= 57)
{
putchar(k);
if (k < 57)
{
putchar(',');
putchar(' ');
}
k++;
}
putchar('\n');
return (0);
=======
		int number;

		for (number = 0; number <= 9; number++)
		{
		putchar(number + '0');
		if (number < 9)
		{
		putchar(',');
		putchar(' ');
		}
		}
		putchar('\n');

	return (0);
>>>>>>> refs/remotes/origin/master
}
