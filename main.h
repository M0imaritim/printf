#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * struct output - structure for printer functions
 * @id: identifier
 * @ptr: pointer to printer function
 * Description: members are ppointers
 *
 */
typedef struct output
{
	char *id;
	int (*ptr)(va_list, char*, unsigned int);
} printer;

int _printf(const char *format, ...);
int _putchar(char c);
int print_percent(va_list args, char *buffer, unsigned int ibuf);
int print_string(va_list args, char *buffer, unsigned int ibuf);
int print_char(va_list args, char *buffer, unsigned int ibuf);
int print_integer(va_list args, char *buffer, unsigned int ibuf);
int (*get_printer_function(const char *id))(va_list, char *, unsigned int);

#endif
