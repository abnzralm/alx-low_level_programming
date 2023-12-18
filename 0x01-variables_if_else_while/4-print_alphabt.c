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
if (p == 113 || p == 101)
{
continue;
}
putchar(p);
=======
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int y;

for (y = 97; y <= 122; y++)
{
if (y == 101 || y == 113)
continue;
else
{
putchar(y);
}
>>>>>>> refs/remotes/origin/master
}
putchar('\n');
return (0);
}
