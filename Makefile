# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jgomez-d <jgomez-d@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/23 18:23:49 by jgomez-d          #+#    #+#              #
#    Updated: 2024/10/07 20:06:21 by jgomez-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# VARIABLES
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar
ARFLAGS = rcs
NAME = libft.a
SOURCES = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_tolower.c ft_toupper.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putendl_fd.c ft_putstr_fd.c ft_putnbr_fd.c
BSRC = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

OBJECTS = $(SOURCES:.c=.o)
BOBJS = $(BSRC:.c=.o)

# RULES
all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

bonus: $(OBJECTS) $(BOBJS)
	ar rcs $(NAME) $(OBJECTS) $(BOBJS)

clean:
	rm -f $(OBJECTS) $(BOBJS)

fclean: clean
	rm -f $(NAME) 

re: fclean all

.PHONY: all clean fclean re
