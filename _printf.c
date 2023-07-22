#include "main.h"
/**
 * _printf - prints any thing
 * @format: character format
 */
int _printf(const char *format, ...)
{
	char *a;
	char b;
	int c;
	va_list arglist;

	va_start(arglist, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			switch (*format) {
				case 's':
					{
						a = va_arg(arglist, char *);
						write(STDOUT_FILENO, a, strlen(a));
						break;
					}
				case 'c':
					{
						c = va_arg(arglist, int);
						b = (char)c;
						write(STDOUT_FILENO, &b, 1);
						break;
					}
				case 'd':
					{
						c = va_arg(arglist, int);
						int_to_str(c);
						break;
					}
				case 'i':
					{
						c = va_arg(arglist, int);
						int_to_str(c);
						break;
					}
				case '%':
					{
						a = "%";
						write(STDOUT_FILENO, a, 1);
						break;
					}
				default: {
						 write(STDOUT_FILENO, format, 1);
						 break;
					 }
			}
		} else {
			write(STDOUT_FILENO, format, 1);
		}
		format++;
	}

	return (strlen(format));
}
