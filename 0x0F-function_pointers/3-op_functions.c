#include "function_pointers.h"
#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Entry point
 *
 * @a: input
 * @b: input
 *
 * Return: result
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Entry point
 *
 * @a: input
 * @b: input
 *
 * Return: result
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Entry point
 *
 * @a: input
 * @b: input
 *
 * Return: result
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Entry point
 *
 * @a: input
 * @b: input
 *
 * Return: result
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Entry point
 *
 * @a: input
 * @b: input
 *
 * Return: result
 */

int op_mod(int a, int b)
{
	return (a % b);
}
