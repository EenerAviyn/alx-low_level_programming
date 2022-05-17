#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

void print_char(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
void print_int(va_list arg);
void print_all(const char * const format, ...);

/**
 * print_char - prints a char
 * @arg: list of arguments pointing to char
 */

void print_char(va_list arg)
{
	char letter;

	letter = va_arg(arg, int);
	printf("%c", letter);
}

/**
 * print_float - prints a float
 * @arg: list of arguments pointing to float
 */

void print_float(va_list arg)
{
	float num;

	num = va_arg(arg, double);
	printf("%f", num);
}

/**
 * print_string - prints a string
 * @arg: list of arguments pointing to string
 */

void print_string(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_int - prints int
 * @arg: list of arguments pointing to integer
 */

void print_int(va_list arg)
{
	int num;

	num = va_arg(arg, int);
	printf("%d", num);
}

/**
 * print_all - function that prints anything
 * @format: list of types of arguments passed to function
 * @...: variable numbers to be printed
 * Description: argument not of type char, int, float or char * is ignored
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *separator = "";
	printer_t funcs[] = {
		{"c", print_char},
		{"f", print_float},
		{"s", print_string},
		{"i", print_int}
	};
	
	va_start(args, format);
	
	while (format && (*(format + i)))
	{
		j = 0;

		while (j < 4 && (*(format + i) != *(funcs[j].symbol)))
			j++;
		
		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].print(args);
			separator = ", ";
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
