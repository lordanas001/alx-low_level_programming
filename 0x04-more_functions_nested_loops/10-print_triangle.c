#include "main.h"


void print_triangle(int size)
{
int i=1, ii;
while (i<= size && size > 0)
{
ii = 0;
while (ii < size - i)
{
_putchar(' ');
ii++;
}
ii = 0;
while (ii <  i)
{
__putchar('#');
ii++;
}

_putchar('\n');
i++;
}
if (i == 1)
_putchar('\n');
}
