#include "main.h"
/**
* print_integer - prints an integer
* @args: the va_list that contains the integer to print
* @buffer: the buffer to store the result
* @ibuf: the current index in the buffer
* Return: the number of integers printed
*/
int print_integer(va_list args, char *buffer, unsigned int ibuf)
{
	int num = va_arg(args, int);
	int num_digits = 0;
	int temp;
	int i;

	if (num < 0)
	{
		buffer[ibuf] = '-';
		ibuf++;
		num = -num;
	}
	temp = num;

	do {
		temp /= 10;
		num_digits++;
	} while (temp != 0);

	for (i = 0; i < num_digits; i++)
	{
		buffer[ibuf + num_digits - i - 1] = num % 10 + '0';
		num /= 10;
	}
	return (i + num_digits);
}
