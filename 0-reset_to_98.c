#include "main.h"
#include <sdtio.h>

/**
 * main - check code
 *
 * Return: A;ways 0
 */
void _reset_to_98(int* n);
int main(void){
	int n;
	n = 402;
	printf("n=%d\n", n);
	_reset_to_98(&n);
	printf("n=%d\n", n);
	return (0);
}
_reset_to_98(int* n){
	*n = 98;
}
