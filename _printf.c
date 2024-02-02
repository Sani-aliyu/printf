#include "main.h"

/**
 * _printf - custom printf function
 * @format: format string
 * Return: the number of characters printed (excluding the null byte)
 */
int _printf(const char *format, ...)
{
    va_list args;
    int count = 0;

    va_start(args, format);

    while (*format)
    {
        if (*format == '%' && (*(format + 1) == 'c' || *(format + 1) == 's' || *(format + 1) == '%'))
        {
            switch (*(format + 1))
            {
            case 'c':
                count += _putchar(va_arg(args, int));
                break;
            case 's':
            {
                char *str = va_arg(args, char *);
                if (str == NULL)
                    str = "(null)";
                while (*str)
                {
                    count += _putchar(*str);
                    str++;
                }
                break;
            }
            case '%':
                count += _putchar('%');
                break;
            default:
                break;
            }
            format += 2; /* Move to the next character after the format specifier */
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

