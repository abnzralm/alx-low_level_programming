#include <stdio.h>
<<<<<<< HEAD

/**
 * main - prints all possible combinations of two two-digit numbers.
 *
 * Return: 0
 */

int main(void)
{
	int i;
	int j;

	for (i = 0; i < 100; i++)
	{
		for (j = 0; j < 100; j++)
		{
			if (j > i)
			{
				putchar(i / 10 + '0');
				putchar(i % 10 + '0');
				putchar(' ');
				putchar(j / 10 + '0');
				putchar(j % 10 + '0');

				if (i * 100 + j != 9899)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

=======
/**
*main - Prints all combinations of two two digits with,
* and space followed by new line
*
*Return: returns 0
*/
int main(void)
{
	int x, y;

	for (x = 0; x <= 98; x++)
	{
		for (y = x + 1; y <= 99; y++)
		{
			putchar((x / 10) + '0');
			putchar((x % 10) + '0');
			putchar(32);
			putchar((y / 10) + '0');
			putchar((y % 10) + '0');

			if (x / 10 != 9 || x % 10 != 8)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar(10);
>>>>>>> refs/remotes/origin/master
	return (0);
}
