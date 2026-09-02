NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
INCDIR = include
SRCDIR = src

# All source files - FIXED: added ft_putnbr.c
SRC = $(SRCDIR)/ft_putchar.c \
	  $(SRCDIR)/ft_print_adress.c \
	  $(SRCDIR)/ft_putstr.c \
	  $(SRCDIR)/ft_print_float.c \
	  $(SRCDIR)/ft_print_hex.c \
	  $(SRCDIR)/ft_printf.c \
	  $(SRCDIR)/ft_putnbr.c

OBJ = $(SRC:.c=.o)

# Default target - builds the library
all: $(NAME)

# Compile .c files to .o files
%.o: %.c
	$(CC) $(CFLAGS) -I $(INCDIR) -c $< -o $@

# Create static library from object files
$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

# Clean object files
clean:
	rm -f $(OBJ)

# Clean all generated files
fclean: clean
	rm -f $(NAME)

# Rebuild everything
re: fclean all

.PHONY: all clean fclean re