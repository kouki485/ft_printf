# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kkohki <kkohki@student.42tokyo.jp>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/07 14:48:02 by kkohki            #+#    #+#              #
#    Updated: 2022/02/07 18:53:54 by kkohki           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

FILES = ft_convert \
		ft_convert2 \
		ft_hexa_low \
		ft_hexa_up \
		ft_printf \
		ft_putchar \
		ft_putnbr \
		ft_putstr \
		ft_unsigned_decimal \
		ft_put_address

SRCS = $(addsuffix .c, $(FILES))

OBJS = $(addsuffix .o, $(FILES))
all: $(NAME)

.c.o: $(SRCS)
	$(CC) $(CFLAGS) -c -o $@ $<

$(NAME): $(OBJS)
	$(AR) $@ $^



clean:
	$(RM) $(OBJS) $(OBJS_B)

fclean: clean
	$(RM) $(NAME)

re: clean all

.PHONY: all clean fclean re