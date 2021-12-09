#include "ft_printf.h"

int ft_printf(const char *s, ...)
{
    char *max;
    ssize_t len;
    va_list ap;

    max = (char *)s;
    va_start (ap, s);

    len = 0;
    while (*max != '\0')
    {
        if (*max != '%')
        {
            len += ft_output(&max);
        }
        else if (*max == '%')
        {
            max++;
            if (*max == 'c')
            {
                len += ft_putchar((unsigned char)va_arg(ap, int));
            }
            else if (*max == 's')
            {
                len += ft_putstr(va_arg(ap, char *));
            }
            else if (*max == 'p')
             {
                 len += ft_putstr("0x");
                 len += putnbr_base(va_arg(ap, unsigned long), "0123456789abcdef");
             }
             else if (*max == 'd' || *max == 'i')
             {
                 len += ft_putnbr(va_arg(ap, long));
             }
             else if (*max == 'u')
             {
                 len += putnbr_base(va_arg(ap, unsigned long), "0123456789");
             }
             else if (*max == 'x')
             {
                 len += putnbr_base(va_arg(ap, unsigned long), "0123456789abcdef");
             }
             else if (*max == 'X')
             {
                 len += putnbr_base(va_arg(ap, unsigned long), "0123456789ABCDEF");
             }
            else if (*max == '%')
            {
                len += ft_putchar('%');
            }
            ++max;
        }
            if (len >= INT_MAX)
            return (-1);
    }
    va_end(ap);
    return (len);
}