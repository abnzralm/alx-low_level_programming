#include <stdio.h>
/**
<<<<<<< HEAD
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int k;

for (k = 97; k <= 122; k++)
{
putchar(k);
}
if (k > 57)
{
for (k = 65; k <= 90; k++)
{
putchar(k);
}
}
putchar('\n');
return (0);
=======
 * main - main block
 * Description:  prints the alphabet in lowercase,
 * and then in uppercase, followed by a new line.
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

	c = 65;

	while (c <= 90)
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
>>>>>>> refs/remotes/origin/master
}
