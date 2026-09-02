#include <unistd.h>

void    ft_putnbr(int n)
{
    char    c;
    unsigned int num;

    if (n < 0)
    {
        write(1, "-", 1);
        num = -n;
    }
    else
        num = n;

    if (num >= 10)
    {
        ft_putnbr(num / 10);
    }
    c = (num % 10) + '0';
    write(1, &c, 1);
}