#include "ft_printf.h"

size_t big_hexadecimal(unsigned long long c)
{
        int len;

        len = count_function(c);
        if (c >= 16 && c != '\0')
        {
                big_hexadecimal(c / 16);
                big_hexadecimal(c % 16);
        }
        else if
                (c >= 0 && c <= 9)
                {
                        ft_putchar (c + '0');
                }

        else if (c == 10)
                ft_putchar ('A');

        else if (c == 11)
                ft_putchar ('B');

        else if (c == 12)
                ft_putchar ('C');

        else if (c == 13)
                ft_putchar ('D');

        else if (c == 14)
                ft_putchar ('E');

        else if (c == 15)
                ft_putchar ('F'); 
        return (len);
}