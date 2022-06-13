#include "main.h"

/**
 * swap_int - swaps the value for int1 and int2
 * @int1: first input pointer
 * @int2: second input pointer
 * Return: void
 */

void swap_int(int *int1, int *int2)
{
	int a;

	a = *int1;
	*int1 = *int2;
	*int2 = a;
}
