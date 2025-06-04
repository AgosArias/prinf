NAME = libftprintf.a

CC = cc
FLAGS = -Wall -Werror -Wextra

SRC = ft_printf.c \
	  ft_putchar_fd.c \
	  ft_putstr_fd.c \
	  ft_putnbr_fd.c \
	  ft_putnbr_unsigned.c \
	  ft_puthex.c \
	  ft_toupper.c \
	  ft_strlen.c \
	  ft_numlen.c \
	  ft_strlen.c \
	  ft_toupper.c



	  
OBJ = $(SRC:.c=.o)

INCLUDE = ft_printf.h

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
