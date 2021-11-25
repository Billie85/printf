#include "printf.h"

//整数を10進で出力する

int count_decimal (size_t number);
int ft_putchar(unsigned char c);

int     ft_putnbr(int n) //元々void *だった。
{
        size_t  len;

        if (n < 0)
        {
                ft_putchar('-');
                n = n * -1;
        }
        len = count_decimal(n);//ここでlenに代入してる
        if (n >= 10)
        {
                ft_putnbr(n / 10);
                n = n % 10;
        }
        if (0 <= n && n <= 9)
        {
                ft_putchar(n + '0');
        }
        return (len);
}

/*int main ()
{
	char str[] = "42";
        int i = ft_putnbr (str);
        printf ("\n");
        printf("%d\n",i);
        return (0);

return (0);
}*/