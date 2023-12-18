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
for (p = 122; p >= 97; p--)
{
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
int p;
p = 122;
while (p >= 97)
{
putchar(p);
p--;
>>>>>>> refs/remotes/origin/master
}
putchar('\n');
return (0);
}
