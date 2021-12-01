#include "ft_printf.h"

int count_function (size_t number)
{
        int  i;
        
        i = 0;
        while (number != 0)
        {
                number =  number /16;
                i++;
        }
        return (i);
}