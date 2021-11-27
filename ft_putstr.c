#include <unistd.h>
#include "ft_printf.h"

int    ft_putstr(char *n)
{
        int i;
        //-----やることリスト----
        //ifがnullだった時の処理を書く。
        //第一引数がnullだったら(null)っていう文字を出力させてあげる。(write何文字出力させるか）
        //ポインタの値は慣れといたほうがいい。
        //

        if (n == NULL)
        \
        while (*n)
        {
                i++;
                write (1, n, 1);
                n++;
        }
        return (i);
}