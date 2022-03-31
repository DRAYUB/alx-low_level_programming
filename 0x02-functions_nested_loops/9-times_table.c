#include "stdio.h"
/**
 * times_table- print_alphabet
 * Return: 0 or 1
 */
int main()
{
int a, b, result;

for (a = 0; a < 10; a++)
{
for (b = 0; b < 10; b++)
{
result = a * b;
if (b == 0)
{
putchar(result + '0');
}
else if (result >= 10)
{
putchar(' ');
putchar(result / 10 + '0');
putchar(result % 10 + '0');
}
else
{
putchar(' ');
putchar(' ');
putchar(result + '0');
}
if (b != 9)
{
putchar(',');
}
}
putchar('\n');
}
}
