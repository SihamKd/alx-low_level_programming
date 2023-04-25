#include "main.h"
#include <unistd.h>

/**
* print_alphabet - Check description
* 
* Return: Null.
*/
void print_alphabet(void)
{
char i;

for (i = 'a'; i <= 'z'; i++)
{
putchar(i);
}
putchar('\n');
int main(void)
{
print_alphabet();
return (0);
}
}
