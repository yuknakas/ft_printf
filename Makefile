# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/20 15:11:39 by yuknakas          #+#    #+#              #
#    Updated: 2024/11/25 13:41:13 by yuknakas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		=	cc
CFLAGS	=	-Wall -Wextra -Werror
RMFLAG	=	rm -rf
NAME	=	libftprintf.a
INCLUDE	=	-I../includes
SRCS	=	srcs/ft_printf.c srcs/ft_printhex.c srcs/ft_putadr.c srcs/ft_putchar.c \
			srcs/ft_putstr.c srcs/ft_putnbr.c
OBJS	=	$(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(MAKE) -C ./libft
	cp libft/libft.a $(NAME)
	ar rc $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

clean:
	$(MAKE) fclean -C ./libft
	$(RMFLAG) $(OBJS)

fclean: clean
	$(MAKE) fclean -C ./libft
	$(RMFLAG) $(NAME)

re: fclean all

.PHONY: all clean fclean re