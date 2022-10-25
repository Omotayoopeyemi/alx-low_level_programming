#include "main.h"
/**
 * _strlen - print a strlen
 * @s: string
 * Return: return the lenght of the string
 */
int _strlen(char *s)
{
int p = 0;
while (*(s + p) != 0)
{
p++;
}
return (p);
}

