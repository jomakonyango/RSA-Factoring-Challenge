#include <stdio.h>
#include "factors.h"

/**
 * factorize - Factorizes a number into two smaller numbers
 * @n: The number to be factorized
 *
 * Return: void
 */
void factorize(int n)
{
int i;

for (i = 2; i <= n / 2; i++)
{
if (n % i == 0)
{
printf("%d=%d*%d\n", n, i, n / i);
return;
}
}
/* If no factors found, print the number itself */
printf("%d=%d*1\n", n, n);
}
