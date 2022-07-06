#include "3-calc.h"

/**
 * op_add - adds two numbers
 * @a: input onr
 * @b: input two
 * Return: add
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract 2 numbers
 * @a: input one
 * @b: input two
 * Return: diffrence
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply 2 numbers
 * @a: input one
 * @b: input two
 * Return: multiply
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide 2 numbers
 * @a: input one
 * @b: input two
 * Return: division
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - calculate the module of 2 numbers
 * @a: input one
 * @b: input two
 * Return: return mod
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
