#include "main.h"
/**
 * _puts -print a string
 * @str: input string
 * Return: no return
 */
void _puts(char *str)
{
int count = 0;
while (count >= 0)
{
if (str[count] == '\0')
{
putchar('\0');
break;
}
putchar(str[count]);
count++;
}
}
