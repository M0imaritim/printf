#include "main.h"
/**
 * print_binary - Prints the binary representation of an unsigned integer.
 * @args: A va_list containing the unsigned integer to be printed.
 * @buffer: A buffer to store the output.
 * @ibuf: The current index in the buffer.
 *
 * Return: The number of characters printed.
 */
int print_binary(va_list args, char *buffer, unsigned int ibuf)
{
	unsigned int num = va_arg(args, unsigned int);
	int num_digits = 0;

	unsigned int mask = 1 << (sizeof(num) * 8 - 1);

	while ((mask & num) == 0 && mask != 0)
	{
		mask >>= 1;
	}
	while (mask != 0)
	{
		buffer[ibuf + num_digits] = ((num & mask) == 0) ? '0' : '1';
		mask >>= 1;
		num_digits++;
	}
	return (ibuf + num_digits);
}
