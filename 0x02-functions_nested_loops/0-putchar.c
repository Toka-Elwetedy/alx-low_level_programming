#include <unistd.h>
/**
* main - function to print
*
* function: print putchar followed by a new line.
*
* Return: 0
*/
int _putchar(char)
{
char _putchar[8] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
unsigned int c;
for (c = 0; c < sizeof(_putchar); c++)
{
_putchar(_putchar);
}
_putchar('\n');
return (0);
}
