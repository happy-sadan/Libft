# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: trcottam <trcottam@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/09 13:54:47 by trcottam          #+#    #+#              #
#    Updated: 2021/06/21 23:14:31 by trcottam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC_DIR = src
OBJ_DIR = obj

CC = gcc
AR = ar rc
MKDIR = mkdir -p
RM = rm -fr

CFLAGS = -Wall -Werror -Wextra -I.

OBJ = $(SRC:%=$(OBJ_DIR)/%.o)

SRC =	ft_memset.c\
		ft_memcpy.c\
		ft_memccpy.c\
		ft_memmove.c\
		ft_memchr.c\
		ft_memcmp.c\
		ft_strlen.c\
		ft_isalpha.c\
		ft_isdigit.c\
		ft_isalnum.c\
		ft_isascii.c\
		ft_isprint.c\
		ft_toupper.c\
		ft_tolower.c\
		ft_strchr.c\
		ft_strrchr.c\
		ft_strncmp.c\
		ft_strlcpy.c\
		ft_strlcat.c\
		ft_strnstr.c\
		ft_atoi.c\
		ft_calloc.c\
		ft_strdup.c\
		ft_substr.c\
		ft_strjoin.c\
		ft_strtrim.c\
		ft_split.c\
		ft_itoa.c\
		ft_strmapi.c\
		ft_putchar_fd.c\
		ft_putstr_fd.c\
		ft_putendl_fd.c\
		ft_putnbr_fd.c\
		ft_lstnew.c\
		ft_lstadd_front.c\
		ft_lstsize.c\
		ft_lstlast.c\
		ft_lstadd_back.c\
		ft_lstdelone.c\
		ft_lstclear.c\
		ft_lstiter.c\
		ft_lstmap.c\
		ft_abs.c\
		ft_islower.c\
		ft_isupper.c\
		ft_strstr.c\
		ft_strcpy.c\
		ft_strcat.c\
		ft_strcomb.c\
		ft_strprepend.c\
		ft_strappend.c\
		ft_strpad.c\
		ft_chartostr.c\
		ft_uimaxtobase.c\
		ft_imaxtobase.c\
		ft_strpbrk.c\
		ft_strtok.c\
		ft_strcmp.c\
		ft_max_int.c\
		ft_min_int.c\

.PHONY:	all clean fclean re

.SECONDEXPANSION:

all:	$(NAME)

$(NAME):	$(OBJ)
	$(AR) $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ_DIR)

fclean:		clean
	$(RM) $(NAME)

re:	fclean all

%/:
	$(MKDIR) $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/% | $$(dir $(OBJ_DIR)/%)
	$(CC) $(CFLAGS) -c -o $@ $<
