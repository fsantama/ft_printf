# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fsantama <fsantama@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/13 17:16:44 by fsantama          #+#    #+#              #
#    Updated: 2023/05/30 17:22:01 by fsantama         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
CLEAN = rm -rf
SRC = ft_printf.c \
	  ft_putchar_counter.c \
	  ft_putstr.c \
	  ft_itoa.c \
	  ft_itoa_unsigned.c \
	  ft_itoa_hexa.c \

OBJS := $(SRC:.c=.o)


$(NAME) : $(OBJS)
#	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@ar -rcs $(NAME) $(OBJS)
	@printf "\e[32m$@ built🗣\e[0m\n"

%.o : %.c
	@$(CC) $(CFLAGS) $< -c

all: $(NAME)

clean:
	$(CLEAN) $(OBJS)
	@printf "\e[31m$(NAME) objects clean done\e[0m\n"

fclean: clean
	$(CLEAN) $(NAME)
	@printf "\e[31m$(NAME) clean done\e[0m\n"

re: fclean all

.PHONY: all clean fclean re
