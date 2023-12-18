<<<<<<< HEAD
#include "stdio.h"
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int p;
for (p = 97; p <= 122; p++)
{
putchar(p);
}
putchar('\n');
return (0);
=======
#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Get a random number and check its last digit, compare it with 5
 * Return: 0
 */
int main(void)
{
	char c = 97;

	while (c <= 122)
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
>>>>>>> refs/remotes/origin/master
}
