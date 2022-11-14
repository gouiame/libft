# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cgouiame <cgouiame@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/23 11:34:42 by cgouiame           #+#    #+#              #
#    Updated: 2022/11/09 17:58:32 by cgouiame         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
FLAGS = -Wall -Werror -Wextra
AR = ar cr
RM = rm -f
FILES = ft_isalpha.c ft_isdigit.c  ft_isascii.c ft_strlen.c \
	   ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c \
		ft_strlcpy.c ft_atoi.c ft_strdup.c ft_memset.c ft_memmove.c\
	   ft_substr.c ft_strjoin.c ft_isalnum.c ft_isprint.c ft_itoa.c\
	   ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c\
	   ft_putnbr_fd.c ft_strtrim.c ft_memcpy.c ft_memchr.c ft_memcmp.c\
		ft_bzero.c ft_calloc.c ft_split.c ft_striteri.c\
		ft_strlcat.c ft_strmapi.c ft_strnstr.c 
OBJ = $(FILES:.c=.o)
NAME = libft.a


all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o: %.c libft.h
	$(CC) $(FLAGS) -c $<

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
