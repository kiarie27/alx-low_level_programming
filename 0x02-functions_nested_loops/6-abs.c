#include "main.h"

/**
 * _abs - a function that computes the absolute value of
 * an integer.
 *
 * @i: input numbers as an integer.
 *
 * Return: absolute value
 */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}