#include "main.h"

/**
* _islower - Check main
*@c: An input
* Return: 1 if c is lowercase or 0 if is uppercase
*/
int _islower(int c)
{
char i;
int lowerc = 0;

for (i = 'a'; i <= 'z'; i++)
{
if (i == c)
lowerc = 1;
}

return (lowerc);
}
