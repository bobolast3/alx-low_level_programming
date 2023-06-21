#include "main.h"
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
if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
{
if (month > 2 || (month == 2 && day == 29))
{
printf("Day of the year: %d\n", (31 * (month - 1) - ((4 * (month - 1) + 23) / 10)) + day);
printf("Remaining days: %d\n", 366 - ((31 * (month - 1) - ((4 * (month - 1) + 23) / 10)) + day));
}
else if (month == 2 && day == 29)
{
printf("Day of the year: %d\n", 60);
printf("Remaining days: %d\n", 366 - 60);
}
else
{
printf("Day of the year: %d\n", (31 * (month - 1) - ((4 * (month - 1) + 23) / 10)) + day);
printf("Remaining days: %d\n", 365 - ((31 * (month - 1) - ((4 * (month - 1) + 23) / 10)) + day));
}
}
else
{
printf("Day of the year: %d\n", (31 * (month - 1) - ((4 * (month - 1) + 23) / 10)) + day);
printf("Remaining days: %d\n", 365 - ((31 * (month - 1) - ((4 * (month - 1) + 23) / 10)) + day));
}
}
