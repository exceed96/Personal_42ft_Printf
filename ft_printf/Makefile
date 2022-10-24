# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sangyeki <sangyeki@student.42seoul.kr      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/16 15:53:21 by sangyeki          #+#    #+#              #
#    Updated: 2022/03/24 14:30:34 by sangyeki         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAG = -Wall -Wextra -Werror -c

SOURCES = ft_printf.c \
		  ft_putchar.c \
		  ft_putnbr.c \
		  ft_putType.c \
		  ft_putstr.c \
		  ft_putnbr_u.c \
		  ft_putnbr_cx.c \
		  ft_putnbr_xc.c \
		  ft_putmem.c \

OBJECTS = $(SOURCES:.c=.o)

NAME = libftprintf.a

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAG) -c $< -o $@

$(NAME): $(OBJECTS)
	ar cr $@ $^

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
