#include "ft_printf.h"

size_t count_decimal (int number)
{
        size_t  i;
        
        i = 0;
        while (number != 0)
        {
                number =  number /10;
                i++;
        }
        return (i);
}