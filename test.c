#include "ft_printf.h"

int main(void)
{
	int  i;

	i = 0;
	i = printf("%d\n", 0);
	printf("%d\n", i);
	i = ft_printf("%d\n", 0);
	printf("%d\n", i);
	return (0);
}