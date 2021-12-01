#include "ft_printf.h"

int     ft_printf(const char *s, ...)
{
        char *max;
        int len;
        va_list ap;

        max = (char *)s;
        va_start(ap, s);

        len = 0;
    while (*max != '\0')
        {
                if (*max != '%')
                {
                        len += ft_output(&max);
                }
                else if (*max++ == '%')
                {
                    if (*max == 'c')
                    {
                        len += ft_putchar(va_arg(ap, int));
                    }
                    else if (*max == 's')
                    {
                        len += ft_putstr((char *)va_arg(ap, char *));
                    }
                    else if (*max == 'p')
                    {
                        len += ft_putstr ("0x");
                        len += ft_evolution_putnbr((size_t)va_arg(ap, void *)); 
                    }
                    else if (*max == 'd')
                    {
                        len += ft_putnbr (va_arg(ap, size_t));
                    }
                    else if (*max == 'i')
                    {
                        len += ft_putnbr(va_arg(ap, int));
                    }
                    else if (*max == 'u')
                    {
                            len += ft_unsigned_putnbr(va_arg(ap, unsigned int));
                    }
                    else if (*max == 'x')
                    {
                            len += hexadecimal(va_arg(ap, unsigned int));
                    }
                    else if (*max == 'X')
                    {
                            len += big_hexadecimal(va_arg(ap, unsigned int));
                    }
                    else if (*max == '%')
                    {
                            len += ft_putchar ('%');
                    }
                max++;
                }
        }
        va_end(ap);
        return (len);
}