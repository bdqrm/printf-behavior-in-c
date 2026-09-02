#include <stdio.h>
#include <stdarg.h>
#include "libft.h"

void    ft_printf(char *s, ...)
{
    int i;
    va_list args;

    va_start(args, s);
    i = 0;
    while (s[i])
    {
        if (s[i] == '%')
        {
            i++;
            if (s[i] == 'd' || s[i] == 'i')
            {
                ft_putnbr(va_arg(args,int));
            }
            else if (s[i] == 's')
            {
                ft_putstr(va_arg(args, char *));
            }
            else if (s[i] == 'c')
            {
                ft_putchar(va_arg(args,int));
            }
            else
            {
                ft_putchar(s[i]);
            }
        }
        else
        {
            ft_putchar(s[i]);
        }
        i++;
    }
}