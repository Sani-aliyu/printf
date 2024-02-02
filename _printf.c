#include "main.h"

/**
 * _printf - Produces output according to a format
 * @format: The format string containing directives
 *
 * Return: The number of characters printed (excluding the null byte)
 */
int _printf(const char *format, ...)
{
    va_list args;
    int count = 0;

    va_start(args, format);

    while (*format)
    {
        if (*format == '%')
        {
            format++; /* Move past '%' */

            /* Check for valid conversion specifier */
            if (*format == 'c')
                count += _putchar(va_arg(args, int));
            else if (*format == 's')
                count += _puts(va_arg(args, char *));
            else if (*format == '%')
                count += _putchar('%');
            else
                return -1; /* Invalid conversion specifier */

            format++; /* Move past the conversion specifier */
        }
        else
        {
            count += _putchar(*format);
            format++;
        }
    }

    va_end(args);

    return count;
}
