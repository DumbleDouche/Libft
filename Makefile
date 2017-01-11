# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rchoquer <rchoquer@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/05 04:09:13 by rchoquer          #+#    #+#              #
#    Updated: 2017/01/11 19:47:14 by rchoquer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	libft.a
PROJECT			=	LIBFT

CC				=	gcc
CFLAGS			=	-Wall -Wextra -Werror
CPPFLAGS		=	-Iinclude

SRC_NAME		=	ft_atoi.c		ft_putchar.c	ft_putstr.c		ft_putendl.c	ft_putnbr.c		\
					ft_strcpy.c		ft_strcmp.c		ft_strlen.c		ft_strdup.c		ft_isalnum.c	\
					ft_isascii.c	ft_isdigit.c	ft_isprint.c	ft_isalpha.c	ft_tolower.c	\
					ft_toupper.c	ft_bzero.c		ft_memset.c		ft_memcpy.c		ft_memccpy.c	\
					ft_memcmp.c		ft_memmove.c	ft_memchr.c		ft_strncmp.c	ft_strncpy.c	\
					ft_strchr.c		ft_strrchr.c	ft_strstr.c		ft_strnstr.c	ft_strcat.c		\
					ft_strncat.c	ft_strlcat.c	ft_itoa.c		ft_memalloc.c	ft_strnew.c		\
					ft_memdel.c		ft_strdel.c		ft_putchar_fd.c	ft_putstr_fd.c	ft_putendl_fd.c	\
					ft_putnbr_fd.c	ft_strclr.c		ft_striter.c	ft_striteri.c	ft_strequ.c		\
					ft_strnequ.c	ft_strsub.c		ft_strjoin.c	ft_strmap.c		ft_strmapi.c	\
					ft_strtrim.c	ft_strsplit.c	ft_lstnew.c		ft_lstdelone.c	ft_lstdel.c		\
					ft_lstadd.c		ft_lstiter.c	ft_lstmap.c		ft_lstlen.c 	ft_putnstr.c	\
					
OBJ_NAME		=	$(SRC_NAME:.c=.o)
INC_NAME		=	libft.h

SRC_PATH		=	src
OBJ_PATH		=	obj
INC_PATH		=	include

SRC				=	$(addprefix $(SRC_PATH)/,$(SRC_NAME))
OBJ				=	$(addprefix $(OBJ_PATH)/,$(OBJ_NAME))
INC				=	$(addprefix $(INC_PATH)/,$(INC_NAME))

.PHONY: clean all re fclean

all: $(OBJ_PATH) $(NAME)

$(NAME): $(OBJ)
	@ar rc $@ $^
	@ranlib $@
	@echo $(PROJECT) "\033[32mBuilt library\033[0m"

$(OBJ_PATH)/%.o: $(SRC_PATH)/%.c
	@$(CC) $(CPPFLAGS) -o $@ -c $^ $(CFLAGS)

$(OBJ_PATH):
	@mkdir -p $(OBJ_PATH) 2> /dev/null

clean:
	@rm -f $(OBJ)
	@rmdir $(OBJ_PATH) 2> /dev/null || true
	@echo $(PROJECT) "\033[93mCleaned up object files\033[0m"

fclean: clean
	@rm -f $(NAME)
	@echo $(PROJECT) "\033[91mCleaned up compiled files\033[0m"

re: fclean all

norme:
	@norminette $(SRC) | grep "Error"
	@norminette $(INC) | grep "Error"
