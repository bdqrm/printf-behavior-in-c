#ifndef LIBFT_H_
#define LIBFT_H_

typedef struct s_list
{
    int             data;
    struct s_list  *next;
}               t_list;

void    ft_printf(char *s, ...);
void    ft_putchar(char c);
void    ft_putnbr(int n);
void    ft_putstr(char *s);
t_list  *ft_create_node(int data);
void    ft_insert_node(t_list **head, int data);

#endif