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
for (p = 0; p < 10; p++)
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

for (p = 0; p <= 9; p++)
>>>>>>> refs/remotes/origin/master
{
printf("%d", p);
}
printf("\n");
return (0);
}
