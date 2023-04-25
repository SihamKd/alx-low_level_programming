#include <stdio.h>

/**
 *main - prints _putchar
 *
 *Return: 0
 */

int main(void)
{
char word[8] = "_putchar";
int i;
for (i = 0; i < 9; i++)
{
putchar(word);
}
putchar('\n');
return (0);
}
