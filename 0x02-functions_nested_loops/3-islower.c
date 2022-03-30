#include "stdio.h"
#include "ctype.h"
/**
 * _islower- print_alphabet
 *@c : the character
 * Return: 0 or 1
 */
int main(void)
{
    int ch = 'c';
if (islower(ch))
{
    printf("%c is lowercase\n", ch);
}
else 
{
 printf("%c is not lowercase\n", ch);
}
return (0);
}
