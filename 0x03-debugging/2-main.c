#include "main.h"

/**
* largest_number - returns the largest of 3 numbers
* @a: first integer
* @b: second integer
* @c: third integer
* Return: largest number
*/

int largest_number(int a, int b, int c)
{
int largest;

if (a >= b && a >= c)
{
largest = a;
}
else if (b >= a && b >= c)
{
largest = b;
}
else
{
largest = c;
}

return (largest);
}

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/
void print_remaining_days(int month, int day, int year)
{
int days;

if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
{
if (month >= 3 && day >= 60)
{
day++;
}

days = 366 - day;
printf("Day of the year: %d\n", day);
printf("Remaining days: %d\n", days);
}
else
{
if (month == 2 && day == 60)
{
printf("Invalid date: February 30th\n");
}
else
{
if (month >= 3 && day >= 60)
{
day++;
}

days = 365 - day;
printf("Day of the year: %d\n", day);
printf("Remaining days: %d\n", days);
}
}
}

