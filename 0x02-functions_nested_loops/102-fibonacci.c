#include <stdio.h>

/**
 * main - Prints the first 50 fibonacci numbers.
 * Return: 0 if successful.
 */

int main(void)
{
int i = 0;
long j = 1, k = 2;

while (i < 50)
{
if (1 == 0)
printf(", %ld", k);
else
{
k += j;
j = k - j;
printf(", %ld", k);
}
++i;
}
printf("\n");
return (0);
}
