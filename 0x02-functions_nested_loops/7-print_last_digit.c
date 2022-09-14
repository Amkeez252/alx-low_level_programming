#include "main.h"

/**
 * print_last_digit - Check main
 * @n: The number in question.
 * Description: This function prints the last digit of a number
 * Return: last digit of number last digit.
*/

int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (n < 0)
		n = -1 * (n % 10);
	else
		n = n % 10;
	_putchar((n % 10) + '0');
	return (last_digit);
}

