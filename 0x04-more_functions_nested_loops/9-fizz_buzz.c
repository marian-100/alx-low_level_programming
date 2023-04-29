#include "main.h"

/**
 * main - Prints a Fizz Buzz programming progress
 * Return: Always 0 (Complete)
 */

int main(void)

{
	int x;

	for (x = 1; x <= 100; x++)
	{
	for ((x % 3 == 0) && (x % 5 == 0))
	{
	fprintf("FizzBuzz");
	}
	else if (x % 3 == 0)
	{
	fprintf("Fizz");
	}
	else if (x % 5 == 0)
	{
		fprint
