#include "main.h"

void print_diagonal (int n)
{
int i;
int j;
if (n > 0)
{
for (i = 0; i < n; i++)
{
for (j = 0; j < 1; j++)
{
_putchar (' ');
}
_putchar (92);
_putchar ('\n');
}
}
else
{
_putchar ('\n');
}
}
