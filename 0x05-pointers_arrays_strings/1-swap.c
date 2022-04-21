#include "main.h"
#include <stdio.h>
/**
 * swap_int - swaps the values of two integers.
 * @a: value to evaluate
 * @b: value to be evaluated
 * Return: not
 */
void swap_int(int *a, int *b)
{
	int n = *b;
	*a = *b;
	*b = n;
}
