#include "ft_printf.h"

//フォーマット指定 %s をしたなら char* 型の値が、 %d をしたなら int 型の値が必要です。
int     ft_printf(const char *s, ...)
{
        char *max;
        int len;
        va_list ap;

        max = (char *)s;
        va_start(ap, s);

        len = 0;
    while (*max != '\0')
        {
                if (*max != '%')//%じゃないなら、そのままの文字を出力してくれる。
                {
                        len += ft_output(&max);
                }
                else if (*max++ == '%')
                {
                    if (*max == 'c')
                    {
                        len += ft_putchar(va_arg(ap, int));
                    }
                    else if (*max == 's')
                    {
                        len += ft_putstr((char *)va_arg(ap, char *));
                    }
                    else if (*max == 'p')//引数をvoid*とみなして、そのポインタの値を（アドレス）を16進数表記で出力する。
                    {
                        len += ft_putstr ("0x");   //ここだけlenをしちゃうと２しか出力されないから、ダメ
                        len += ft_evolution_putnbr((size_t)va_arg(ap, void *)); 
                    }
                    else if (*max == 'd')//整数を10進で出力する。
                    {
                        len += ft_putnbr (va_arg(ap, size_t));
                    }
                    else if (*max == 'i')//10進数の整数を表示する。
                    {
                        len += ft_putnbr(va_arg(ap, int));
                    }
                    else if (*max == 'u')//符号なし整数を１０進数で出力してくれる
                    {
                            len += ft_unsigned_putnbr(va_arg(ap, unsigned int));
                    }
                    else if (*max == 'x')//整数を１６進数で出力してくれる
                    {
                            len += hexadecimal(va_arg(ap, unsigned int));
                    }   //unsigned long long 0 ～ 18,446,744,073,709,551,
                        //unsigned long 0 ～ 4,294,967,295

                    else if (*max == 'X')//整数を１６進数で出力してくれる
                    {
                            len += big_hexadecimal(va_arg(ap, unsigned int));
                    }
                    else if (*max == '%')
                    {
                            len += ft_putchar ('%'); //そのまま％を出力してくれる。
                    }
                max++;
                }
        }
        va_end(ap);
        return (len);
}