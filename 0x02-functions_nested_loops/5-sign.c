#include "main.h"

 /**
 * Description: print_sign - check sign integer number if is positive, 
 * zero or negative.
 *
 * @n: input number value.
 *
 * Return: 1 if positive, 0 if zero, -1 otherwise.
 *
 */

int print_sign(int n)

{
	if (n > 0)
	{
		_putchar('+');

		return (1);
	}

	else if (n == 0)
	{
		_putchar('0');

		return (0);
	}
	else
	{
		_putchar('-');

		return (-1);
	}

}
