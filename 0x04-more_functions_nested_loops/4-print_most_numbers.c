#include "main.h"
void print_most_numbers(void)
{
int n;
for (n = 0; n <= 9; n++)
{
if ((n >= 0 && n < 2) || (n == 3) || (n >= 5 && n <= 9))
{
_putchar (n + '0');
}
}
_putchar ('\n');
}
