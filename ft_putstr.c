#include "printf.h" 
 
int    ft_putstr(char *s)
{
        int i;

        while (*s)
        {
                i++;
                write (1, s, 1);
                s++;
        }
        return (i);
}