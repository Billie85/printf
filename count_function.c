#include "printf.h"

int count_function (size_t number)//16で割る
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