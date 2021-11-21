# include <limits.h>
 # include <stdio.h>
 # include <stdlib.h>
 # include <stdint.h>
 # include <stdarg.h>
 # include <unistd.h>

int ft_putchar(unsigned char c);
 int ft_output(char **max);
 void ft_unsigned_putnbr(unsigned int n);
 void ft_putnbr(int n);
  int ft_putstr(char *s);
 void hexadecimal(unsigned int c);
 void big_hexadecimal(unsigned int c);
void  ft_evolution_putnbr(void *n);

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
                                len += ft_putchar((unsigned char)va_arg(ap, int));
                    }
                    else if (*max == 's')
                    {
                            len += ft_putstr((char *)va_arg(ap, char *));
                    }
                    else if (*max == 'p')
                    {
                            ft_putstr ("0x");
                            ft_evolution_putnbr (va_arg(ap, void *));
                    }
                    else if (*max == 'd')
                    {
                            ft_putnbr(va_arg(ap, int));
                    }
                    else if (*max == 'i')
                    {
                            ft_putnbr(va_arg(ap, int));
                    }
                    else if (*max == 'u')
                    {
                            ft_unsigned_putnbr(va_arg(ap, unsigned int));
                    }
                    else if (*max == 'x')
                    {
                            hexadecimal(va_arg(ap, unsigned int));
                    }
                    else if (*max == 'X')
                    {
                            big_hexadecimal(va_arg(ap, unsigned int));
                    }
                    else if (*max == '%')
                    {
                            ft_putchar ('%');
                    }
                max++;
                }
        }
        va_end(ap);
        return (len);
}