#include "ft_printf.h"

typedef unsigned long long	t_ull;

ssize_t	ft_putnbr_base(t_ull n, char *base)
{
	ssize_t		len;
	t_ull		e;
	const t_ull	b = ft_strlen(base); //

	if (b < 2)
		return (0);
	len = 0;
	e = 1;
	while (e <= n / b)
		e *= b;
	while (e > 0)
	{
		len += write(1, &base[n / e % b], 1);
		e /= b;
	}
	return (len);
}