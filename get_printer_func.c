#include "main.h"
/**
 * get_printer_function - gets the correct print function for a specifier
 * @id: the specifier identifier
 * Return: the corresponding print function, or NULL if not found
 */
int (*get_printer_function(const char *id))(va_list, char *, unsigned int)
{
	printer functions[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_integer},
		{"i", print_integer},
		{"b", print_binary},
		{NULL, NULL}
	};

	int i;

	for (i = 0; functions[i].id != NULL; i++)
	{
		if (*(functions[i].id) == *id)
		{
			return (functions[i].ptr);
		}
	}

	return (NULL);
}
