#include "printf.h"

void hexadecimal(unsigned int c)
{
        size_t str;
        str = (size_t)c;

        if (c >= 16 && c != '\0')
        {
                hexadecimal(str / 16);
                hexadecimal(str % 16);
        }
        else if
        
                (c >= 0 && c <= 9)
                {
                        ft_putchar (c + '0');
                }

        else if (c == 10)
                ft_putchar ('a');

        else if (c == 11)
                ft_putchar ('b');

        else if (c == 12)
                ft_putchar ('c');

        else if (c == 13)
                ft_putchar ('d');

        else if (c == 14)
                ft_putchar ('e');

        else if (c == 15)
                ft_putchar ('f'); 
}
