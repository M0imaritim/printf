#include "main.h"
/**
 * print_char - prints a character
 * @args: the va_list that contains the character to print
 * @buffer: the buffer to store the result
 * @ibuf: the current index in the buffer
 * Return: the number of characters printed
 */
int print_char(va_list args, char *buffer, unsigned int ibuf)
{
	char c = va_arg(args, int);

	buffer[ibuf] = c;

	return (1);
}
