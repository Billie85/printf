#include "ft_printf.h"

size_t ft_unsigned_putnbr(unsigned int n)
{ 
        size_t  len;

        len = count_decimal(n);
        if (n >= 10)
        {
                ft_unsigned_putnbr(n / 10);
                n = n % 10;
        }
        if (0 <= n && n < 9)
        {
                ft_putchar(n + '0');
        }
        return (len);
}