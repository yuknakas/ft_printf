# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/17 14:57:32 by yuknakas          #+#    #+#              #
#    Updated: 2024/11/25 11:22:28 by yuknakas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			=	cc
CFLAGS		=	-Wall -Wextra -Werror
NAME		=	libft.a
SRCS_MAN	=	ft_atoi.c ft_isascii.c ft_memcpy.c ft_putnbr_fd.c ft_striteri.c \
				ft_strmapi.c ft_substr.c ft_bzero.c ft_isdigit.c ft_memmove.c \
				ft_putstr_fd.c ft_strjoin.c ft_strncmp.c ft_tolower.c ft_strtrim.c \
				ft_calloc.c ft_isprint.c ft_memset.c ft_split.c ft_strlcat.c \
				ft_strnstr.c ft_toupper.c ft_isalnum.c ft_itoa.c ft_memchr.c \
				ft_putchar_fd.c ft_strchr.c ft_strlcpy.c ft_strrchr.c \
				ft_isalpha.c ft_memcmp.c ft_putendl_fd.c ft_strdup.c ft_strlen.c
SRCS_BON	=	ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c ft_lstclear_bonus.c \
				ft_lstdelone_bonus.c ft_lstiter_bonus.c ft_lstlast_bonus.c \
				ft_lstmap_bonus.c ft_lstnew_bonus.c ft_lstsize_bonus.c
OBJS_MAN	=	$(SRCS_MAN:%.c=%.o)
OBJS_BON	=	$(SRCS_BON:%.c=%.o)
OBJS		=	$(OBJS_MAN) $(OBJS_BON)
BONUS_FLAG	=	.bonus_flag

all: $(NAME)

$(NAME): $(OBJS_MAN)
	ar rcs $(NAME) $(OBJS_MAN)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

bonus: $(BONUS_FLAG)

$(BONUS_FLAG): $(OBJS_MAN) $(OBJS_BON)
	ar rcs $(NAME) $(OBJS_BON)
	@touch $(BONUS_FLAG)

clean:
	rm -f $(OBJS) $(BONUS_FLAG)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re