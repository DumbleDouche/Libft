# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rchoquer <rchoquer@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/04 21:08:08 by rchoquer          #+#    #+#              #
#    Updated: 2016/11/09 22:20:15 by rchoquer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC_C = ft_atoi.c \
		ft_putchar.c \
		ft_putstr.c \
		ft_putendl.c \
		ft_putnbr.c \
		ft_strcpy.c \
		ft_strcmp.c \
		ft_strlen.c \
		ft_strdup.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_isalpha.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_bzero.c \
		ft_memset.c \
		ft_memcpy.c \
		ft_memccpy.c \
		ft_memcmp.c \
		ft_memmove.c \
		ft_memchr.c \
		ft_strncmp.c \
		ft_strncpy.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strstr.c \
		ft_strnstr.c \
		ft_strcat.c \
		ft_strncat.c \
		ft_strlcat.c \
		ft_itoa.c \
		ft_memalloc.c \
		ft_strnew.c \
		ft_memdel.c \
		ft_strdel.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_strclr.c \
		ft_striter.c \
		ft_striteri.c \
		ft_strequ.c \
		ft_strnequ.c \
		ft_strsub.c \
		ft_strjoin.c \
		ft_strmap.c \
		ft_strmapi.c \
		ft_strtrim.c \
		ft_strsplit.c \
		ft_lstnew.c \
		ft_lstdelone.c \
		ft_lstdel.c \
		ft_lstadd.c \
		ft_lstiter.c \
		ft_lstmap.c \
		ft_lstlen.c

SRC_O = $(SRC_C:.c=.o)

SRC_H = libft.h

all: $(NAME)

$(NAME):
	@gcc -Werror -Wextra -Wall -c $(SRC_C)
	@ar rc $(NAME) $(SRC_O) $(SRC_H)
	@ranlib $(NAME)


clean:
	@rm -f $(SRC_O)

fclean: clean
	@rm -f $(NAME)

re: fclean all
