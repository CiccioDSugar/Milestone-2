# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fzuccaro <fzuccaro@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/24 15:41:19 by fzuccaro          #+#    #+#              #
#    Updated: 2025/02/17 11:59:45 by fzuccaro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c\
		ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memset.c ft_strchr.c\
		ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c\
		ft_strrchr.c ft_tolower.c ft_toupper.c ft_memmove.c ft_calloc.c ft_strdup.c\
		ft_split.c ft_strtrim.c ft_strjoin.c ft_substr.c ft_putchar_fd.c\
		ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_itoa.c ft_strmapi.c\
		ft_striteri.c \
		\
		ft_putnbr.c ft_putchar.c ft_putstr.c ft_printf.c ft_puthex.c \
		ft_putptr.c ft_u_putnbr.c


OBJECTS = ${SRC:.c=.o}

NAME = libft.a

all: $(NAME)

$(NAME):$(OBJECTS)
		ar rc $(NAME) $(OBJECTS)

%.o: %.c
		${CC} -c ${CFLAGS} -I. $< -o $@

clean:
		rm -rf $(OBJECTS)

fclean: clean
		rm -rf $(NAME)

re: fclean all
