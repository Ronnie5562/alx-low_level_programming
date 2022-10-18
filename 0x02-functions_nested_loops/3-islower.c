#include "main.h"

/**
 * _islower - Entry point
 * Desciption: checks if a letter is lowercase
 * @c: the integer value it receives
 * Return: 1 if true. 0 if false
 */
int _islower(int c)
{
int x;

for (x = 'a'; x <= 'z'; x++)
{
/* from the _islower function (int c)*/
if (c == x)
{
return (1);
}
}
return (0);
}
