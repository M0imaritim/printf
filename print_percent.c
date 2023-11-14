#include "main.h"
/**
 * print_percent - prints a percent sign
 * @args: unused
 * @buffer: the buffer to store the result
 * @ibuf: the current index in the buffer
 * Return: the number of characters printed (1)
 */
int print_percent(va_list args, char *buffer, unsigned int ibuf)
{
	(void)args;

	buffer[ibuf] = '%';

	return (1);
}
