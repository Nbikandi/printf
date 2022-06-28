# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nbikandi <nbikandi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/06 18:06:24 by nbikandi          #+#    #+#              #
#    Updated: 2022/06/21 18:12:35 by nbikandi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC =	ft_printf.c       \
		ft_printf_hexa.c  \
		ft_putchar.c      \
		ft_putnbr_unsig.c \
		ft_putnbr.c       \
		ft_putstr.c       \

INCLUDES = libftprintf.h

#OBJ_BONUS = $(SRC_BONUS:.c=.o)
OBJ = $(SRC:.c=.o)

CC = gcc
AR = ar rc
CFLAGS = -Wall -Werror -Wextra
RM = /bin/rm -f



$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $(SRC)

# compile:
# 	$(CC) $(CFLAGS) -c $(SRC)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

test:
	$(CC) -g $(SRC) main.c

.PHONY: all clean fclean re
