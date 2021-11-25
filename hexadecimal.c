#include "printf.h"

int ft_putchar(unsigned char c);
size_t count_function (size_t number);

size_t hexadecimal(unsigned long long c)
{
        size_t len;

        len = count_function(c);
        if (c >= 16 && c != '\0')
        {
                hexadecimal(c / 16);//元々strだった。
                hexadecimal(c % 16);
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
                
        return (len);
}
