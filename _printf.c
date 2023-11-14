#include "main.h"
/**
* _printf - custom printf function
* @format: the format string
* Return: the number of characters printed
*/
int _printf(const char *format, ...)
{
	va_list args;
	unsigned int i = 0, j = 0;
	int (*f)(va_list, char *, unsigned int);
	char buffer[1024] = {'\0'};

	va_start(args, format);

	for (i = 0; format && format[i]; i++)
	{
		if (format[i] == '%')
		{
			i++;
			f = get_printer_function(&format[i]);

			if (f != NULL)
			{
				j += f(args, buffer, j);
				continue;
			}
		}
		buffer[j++] = format[i];
	}

	va_end(args);

	write(1, buffer, j);

	return (j);
}
