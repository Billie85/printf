/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kayumi <kayumi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 14:37:13 by kayumi            #+#    #+#             */
/*   Updated: 2022/01/02 15:33:24 by kayumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int another_function(char *max, va_list *ap)
{
	size_t len;

	len = 0;
	if (*max == 'p') //%pアドレスを出力させる
	{
		len += ft_putstr("0x");	 //最初に0xを出力させてあげる必要がある
		len += putnbr_base(va_arg(*ap, unsigned long long), OX); // OXっていうのが0~fの小文字の数
	}
	if (*max == 'u')//符号なし整数を１０進で出力する。
		len += putnbr_base(va_arg(*ap, unsigned int), NUM); // NUMっていうのが0~9までの数字
	else if (*max == 'x')
		len += putnbr_base(va_arg(*ap, unsigned int), OX); // OXっていうのが0~fの小文字の数
	else if (*max == 'X')
		len += putnbr_base(va_arg(*ap, unsigned int), O_X); // O_Xっていうのは0~Fの大文字ver
	else if (*max == 'd' || *max == 'i')// 10進数で表示します。
		len += ft_putnbr(va_arg(*ap, int));
	else if (*max == 's')   //%s 文字列を出力する
		len += ft_putstr(va_arg(*ap, char *));
	else if (*max == '%')
		len += ft_putchar('%');
	return (len);
}

int ft_printf(const char *s, ...)
{
	char *max;
	size_t len; //長さ
	va_list ap;

	max = (char *)s; //この先sの中身はいじってないけど、あんまり意味ないけど(char*)にキャストしてる。
	va_start(ap, s); // va_startはapを初期化してva_argとva_end関数を利用できるようにする。
	len = 0;
	if (len >= INT_MAX)//長さをINT_MAXまで対応させてあげる必要がある。
		return (-1);
	while (*max != '\0')
	{
		if (*max != '%')		//%の前の文字を出力してるのがこの場所
			len += ft_output(&max); // maxのアドレスを渡してあげる。
		else if (*max == '%')		//%だった場合は、
		{
			max++;
			if (*max == 'c')      // 1文字を出力する。
				len += ft_putchar((unsigned char)va_arg(ap, int));
			else
				len += another_function(max, &ap);
			++max;
		}
	}
	va_end(ap);
    return len;
}

int main(void)
{
	int i;

	i = 0;
	printf("----%%test----\n");

	printf("本家\n");
	i = printf("%%\n");
	printf("%d\n", i);

	printf("自作\n");
	i = ft_printf("%%\n");
	printf("%d\n", i);

	i = 0;
	printf("----Xtest----\n");

	printf("本家\n");
	i = printf("%X\n", 1967);
	printf("%d\n", i);

	printf("自作\n");
	i = ft_printf("%X\n", 1967);
	printf("%d\n", i);

	i = 0;
	printf("----xtest----\n");

	printf("本家\n");
	i = printf("%x\n", 1967);
	printf("%d\n", i);

	printf("自作");
	i = ft_printf("%x\n", 1967);
	printf("%d\n", i);

	i = 0;
	printf("----ctest----\n");

	printf("本家\n");
	i = printf("%c\n", 'b');
	printf("%d\n", i);

	printf("自作\n");
	i = ft_printf("%c\n", 'b');
	printf("%d\n", i);

	i = 0;
	printf("----dtest----\n");

	printf("本家\n");
	i = printf("%d\n", 'c');
	printf("%d\n", i);

	printf("自作\n");
	i = ft_printf("%d\n", 'c');
	printf("%d\n", i);

	printf("本家\n");
	i = printf("%d\n", INT_MIN);
	printf("%d\n", i);

	printf("自作\n");
	i = ft_printf("%d\n", INT_MIN);
	printf("%d\n", i);

	i = 0;
	printf("----itest----\n");

	printf("本家\n");
	i = printf("%i\n", 'a');
	printf("%d\n", i);

	printf("自作\n");
	i = ft_printf("%i\n", 'a');
	printf("%d\n", i);

	printf("----ptest----\n");

	int n;

	i = 0;
	n = 85;
	printf("本家\n");
	i = printf("%p\n", &n);
	printf("%d\n", i);

	printf("自作\n");
	i = ft_printf("%p\n", &n);
	printf("%d\n", i);

	i = 0;
	printf("----stest----\n");

	printf("本家\n");
	i = printf("%s\n", "abcd1");
	printf("%d\n", i);

	printf("自作\n");
	i = ft_printf("%s\n", "abcd1");
	printf("%d\n", i);

	i = 0;
	printf("----utest----\n");

	printf("本家\n");
	i = printf("%u\n", 4294967295U);
	printf("%d\n", i);

	printf("自作\n");
	i = ft_printf("%u\n", 4294967295U);
	printf("%d\n", i);

	return (0);
}