#include "main.h"
/**
 * _sqrt_recursion - gets natural square root of a number, if any
 *
 * @x: number to get square root of
 *
 * Return: natural square root of number, -1 otherwise
 */
int _sqrt_recursion(int x)
{
	if (n < 0)
	{
		return -1;
	}
	else if (n == 0 || n == 1)
	{
		return n;
	}
	else
	{
		int x = _sqrt_recursion(n - 1);
		return (x * x <= n) ? x : -1;
	}
}
