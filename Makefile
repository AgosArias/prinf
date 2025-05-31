NAME = libftprintf.a

CC = cc
FLAGS = -Wall -Werror -Wextra

SRC = ft_printf.c \
	  ft_putchar.c \
	  ft_putstr.c \
	  ft_putnbr.c \
	  ft_putnbr_unsigned.c \
	  ft_puthex.c \
	  ft_putptr.c
	  
OBJ = $(SRC:.c=.o)

INCLUDE = libftprintf.h

AR = ar rcs
RM = rm -f

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $@ $^


%.o: %.c $(INCLUDE)
	$(CC) $(FLAGS) -c -o $@ $<

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
