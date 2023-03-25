#include <stdio.h>

/**
 * main - Prints the first 50 fibonacci numbers.
 * Return: 0 if successful.
 */

int main(void)
{
int i = 0;
long j = 0, k = 1, temp;

while (i < 50)
{
printf("%ld", k);
if (i != 49)
printf(", ");
temp = k;
k += j;
j = temp;
i++;
}
printf("\n");

return (0);
}

