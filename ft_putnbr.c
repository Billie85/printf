#include "ft_printf.h"

ssize_t  ft_putnbr(int n)
{
        size_t len;

        if (n < 0)
        {
                ft_putchar('-');
                n = n * -1;
        }
        len = count_decimal(n);
        
        if (n >= 10)
        {
                ft_putnbr(n / 10);
                n = n % 10;
        }
        if (0 <= n && n <= 9)
        {
                ft_putchar(n + '0');
        }
        return (len);
}