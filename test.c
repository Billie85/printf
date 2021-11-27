#include "ft_printf.h"
#include <stdio.h>

int main (void)
{
    printf ("%c",'*');
    printf ("\n");
    ft_printf("%c",'*');
    printf ("\n");
    return (0);
}