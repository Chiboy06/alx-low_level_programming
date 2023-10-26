#include "main.h"

/**
 * is_prime_number - determine if a number is a prime number
 * @n: int number
 * Return: 1 if prime, 0 otherwise
 */

int divisible(int n, int divisor)
{
	if (divisor <= 1)
	{
		return 0;
	}
	if (n % divisor == 0)
	{
		return 1;
	}
	return divisible(n, divisor - 1);
}

int is_prime_number(int n, int divisor)
{
	if (n <= 1)
	{
		return 0;
	}
	if (n <= 3)
	{
		return 1;
	}
	if (n % 2 == 0 || n % 3 == 0)
	{
		return 0;
	}
	if (divisible(n, divisor))
	{
		return 0;
	}
	return is_prime_number(n, divisor - 1);
}
