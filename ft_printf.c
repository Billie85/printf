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
 int  ft_putstr(char *n);
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
                                len += ft_putchar(va_arg(ap, unsigned char));
                    }
                    else if (*max == 's')
                    {
                            len += ft_putstr((char *)va_arg(ap, char *));
                    }
                    else if (*max == 'p')
                    {
                        len += ft_putstr ("0x");   //ここだけlenをしちゃうと２しか出力されないから、ダメ
                        len += ft_evolution_putnbr((size_t)va_arg(ap, void *)); 
                    }
                    else if (*max == 'd')
                    {
                        len += ft_putnbr ((size_t)va_arg(ap, void *));
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
                            len += (unsigned long long int)hexadecimal(va_arg(ap, unsigned int));
                    }
                    else if (*max == 'X')
                    {
                            len += (unsigned long long int)big_hexadecimal(va_arg(ap, unsigned int));
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