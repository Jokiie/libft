# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ccodere <marvin@42quebec.com>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/22 12:04:14 by ccodere           #+#    #+#              #
#    Updated: 2023/12/09 12:39:30 by ccodere          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Variables
CC = gcc
CFLAGS = -Wall -Werror -Wextra
NAME = libft.a
HEADER = libft.h
RM = rm -rf

# Files
SRCS = ft_isdigit.c ft_isalpha.c ft_isascii.c ft_isprint.c ft_strlen.c ft_bzero.c \
       ft_memset.c ft_toupper.c ft_tolower.c ft_strncmp.c ft_memmove.c ft_memcpy.c \
       ft_atoi.c ft_strlcpy.c ft_memcmp.c ft_memchr.c ft_strchr.c ft_strrchr.c \
       ft_strnstr.c ft_strlcat.c ft_strdup.c ft_calloc.c ft_substr.c ft_isalnum.c \
       ft_strjoin.c ft_strtrim.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
       ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_split.c

BONUS_SRCS = ft_lstnew.c ft_lstadd_front.c ft_lstlast.c ft_lstsize.c ft_lstadd_back.c \
	     ft_lstdelone.c ft_lstclear.c ft_lstiter.c

OBJECTS = $(SRCS:.c=.o)

BONUS_OBJS = $(BONUS_SRCS:.c=.o)

# Rules

all: $(NAME)

$(NAME): $(OBJECTS) $(HEADER) 
	ar -rcs $(NAME) $(OBJECTS)

bonus: $(BONUS_OBJS)
	ar -rcs  $(NAME) $(BONUS_OBJS)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJECTS) $(BONUS_OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all, clean, fclean, re, bonus
