#include <stdio.h>
#include <ctype.h>


/**
 * _islower- print_alphabet
 *@c : the character
 * Return: 0 or 1
 */
int main(void)
{
    char ch ='a';
if (isalpha(ch))
{
    printf("%c is alphabet\n", ch);
}
else 
{
 printf("%c is not alphabet\n", ch);
}
return (0);
}
