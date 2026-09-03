#include <unistd.h>

void    ft_print_hex(unsigned long n,char *base)
{
    if (n > 0)
    {
        ft_print_hex(n / 16, base);
        write(1, &base[n % 16], 1);
    }
}

void    ft_print_address(void *address)
{
    write(1, "0x", 2);
    ft_print_hex((unsigned long)address, "0123456789abcdef");
}