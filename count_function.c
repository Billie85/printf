#include "ft_printf.h"

size_t count_function (int number)
{
        size_t i;
        
        i = 0;
        while (number != 0)
        {
                number =  number /16;
                i++;
        }
        return (i);
}