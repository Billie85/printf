#include "ft_printf.h"

 size_t ft_evolution_putnbr(size_t n)
 {
        size_t   len;
        
        len = count_function(n);
        //再帰関数に入る前にlenを確保する。
        //エラー処理も楽になる。lenを変えるだけで大丈夫。

        if (n >= 16)
        {
                ft_evolution_putnbr(n / 16);
                n = n % 16;
        }
        if (0 <= n && n <= 9)
              ft_putchar (n + '0');

        if (10 <= n && n <= 15)
        {
                n = n - 10 + 'a';
                ft_putchar (n);
                //return (count_function(n));
        }
       return (len);
}