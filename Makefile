# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fsantama <fsantama@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/13 17:16:44 by fsantama          #+#    #+#              #
#    Updated: 2023/05/30 14:40:24 by fsantama         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf
SRC = ft_printf.c \
	  ft_putchar_counter.c \
	  ft_putstr.c \
	  ft_itoa.c \
	  ft_itoa_unsigned.c \
	  ft_itoa_hexa.c \

OBJS := $(SRC:.c=.o)


$(NAME) : $(SRC)
	@$(CC) $(CFLAGS) $(SRC) -o $(NAME)
	@printf "\e[32m$@ built🗣\e[0m\n"

%.o : %.c
	@$(CC) $(CFLAGS) $< -c

all: $(NAME)

clean:
	$(CLEAN) $(OBJS)
	@printf "\e[31m$(NAME) objects clean done\e[0m\n"

fclean:
	$(CLEAN) $(NAME)
	@printf "\e[31m$(NAME) clean done\e[0m\n"

re: fclean all

.PHONY: all NAME clean fclean re
