# include <limits.h>
 # include <stdio.h>
 # include <stdlib.h>
 # include <stdint.h>
 # include <stdarg.h>
 # include <unistd.h>

int count_function (size_t number)
{
        int  i;

        while (number != 0)
        {
                number =  number /16;
                i++;
        }
        return (i);
}