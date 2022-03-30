#include "stdio.h"
/**
 * print_alphabet_x10 - print_alphabet
 *
 * Return:void
 */
int main(void)
{
int count;
for (count = 0; count < 10; count++)
{
int x;
for (x = 'a'; x <= 'z'; x++)
{
putchar(x);
}
putchar('\n');
}
}
