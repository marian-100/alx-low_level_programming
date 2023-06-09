#include "main.h"

/**
 * factorial - Returns the factorial of a given number
 * @n: the number whose factorial will be returned
 * Return: Integer value
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
