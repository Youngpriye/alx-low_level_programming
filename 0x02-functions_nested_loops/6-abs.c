#include "main.h"
/**
 * _abs - Tis will compute the absolute value of an integer
 * @t:An integer
 * Return: The absolute value
 */
int _abs(int t)
{
	if (t > 0)
	{
		return (t);
	}
	else if (t < 0)
	{
		return (t * -1);
	}
	else
	{
		return (0);
	}
}
