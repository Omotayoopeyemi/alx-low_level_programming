#include "main.h"
/**
 * swap_int - print swap the value of two  
 * @a: first argument to be swapped
 * @b: second argument to be swapped
 * Return: void
 */
void swap_int(int *a, int *b)
{
int p = *a;
*a = *b;
*b = p;
}
