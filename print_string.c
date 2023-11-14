#include "main.h"
/**
 * print_string - prints a string
 * @args: the va_list that contains the string to print
 * @buffer: the buffer to store the result
 * @ibuf: the current index in the buffer
 * Return: the number of characters printed
 */
int print_string(va_list args, char *buffer, unsigned int ibuf)
{
	char *str = va_arg(args, char *);
	unsigned int i;

	if (str == NULL)
	{
		str = "(null)";
	}

	for (i = 0; str[i]; i++)
	{
		buffer[ibuf + i] = str[i];
	}

	return (i);
}
