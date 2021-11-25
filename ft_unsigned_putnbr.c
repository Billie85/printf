# include <limits.h>
 # include <stdio.h>
 # include <stdlib.h>
 # include <stdint.h>
 # include <stdarg.h>
 # include <unistd.h>
 
 //符号なし整数を10進で出力する
 //unsigned int, unsigned short

int count_decimal (size_t number)//数える関数
{
        int  i;
        i = 0;
        while (number != 0)
        {
                number =  number /10; 
                //10で割ってる。
                i++;
        }
        return (i);
}

int ft_putchar(unsigned char c)//出力する関数
{
        return (write (1, &c, 1));
}

size_t ft_unsigned_putnbr(unsigned int n)//符号なし
{ 
        size_t  len;

        len = count_decimal(n);
        if (n >= 10)
        {
                ft_unsigned_putnbr((void*)(n / 10);
                n = n % 10;
        }
        if (0 <= n && n < 9)
        {
                ft_putchar(n + '0');
        }
        return (len);
}