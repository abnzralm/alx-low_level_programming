#include <stdio.h>
<<<<<<< HEAD
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int k;

for (k = 48; k <= 57; k++)
{
putchar(k);
}
if (k > 57)
{
for (k = 97; k <= 102; k++)
{
putchar(k);
}
}
putchar('\n');
return (0);
=======

/**
* main - prints all the numbers of base 16 in lowercase
*
* Description: The numbers are all single digits
* Return: Always(0) Success
*/

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (i = 'a'; i <= 'f'; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
>>>>>>> refs/remotes/origin/master
}
