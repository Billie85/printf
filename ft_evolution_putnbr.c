# include <limits.h>
 # include <stdio.h>
 # include <stdlib.h>
 # include <stdint.h>
 # include <stdarg.h>
 # include <unistd.h>

size_t count_function (size_t number)
{
        size_t  i;
        i = 0;
        while (number != 0)
        {
                number =  number /16;
                i++;
        }
        return (i);
}

int ft_putchar(unsigned char c)
{
        return (write(1, &c, 1));
}

 size_t ft_evolution_putnbr(size_t n)
 {
        size_t   len;
        
        len = count_function(n);
        //再帰関数に入る前にlenを確保する。
        //エラー処理も楽になる。lenを変えるだけで大丈夫。

        if (n >= 16)
        {
                ft_evolution_putnbr((void *)(n / 16));
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

/*int main ()
{
        char str[] = "4242";
        int i = ft_evolution_putnbr (str);
        printf ("\n");
        printf("%d\n",i);
        return (0);
}*/