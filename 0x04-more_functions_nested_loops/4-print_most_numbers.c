#include "main.h"

void print_most_numbers (void)
{
int number;
for (number = 0; number < 10; number++)
{
if ((number == 2) || (number == 4))
{
continue;
}
_putchar (number + '0');
}
_putchar ("\n");
}
