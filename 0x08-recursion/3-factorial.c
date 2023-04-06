#include "main.h"

/**
 * factorial - function  returns  factorial of a given number.
 * @n: number
 * Return: factorial of number
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	else
		return (n * factorial(n - 1));
}
