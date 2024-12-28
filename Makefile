# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bferdjan <bferdjan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/23 18:02:41 by bferdjan          #+#    #+#              #
#    Updated: 2024/12/22 16:38:31 by bferdjan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Nom de la bibliothèque à créer
NAME = libft.a

# Liste des fichiers sources (tous les fichiers .c du répertoire courant)
SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
	ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c \
	ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c \
	ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c \
	ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c \
	ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
	ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c \
	ft_putchar_fd.c ft_putstr_fd.c \
	ft_putendl_fd.c ft_putnbr_fd.c ft_striteri.c \

# Liste des fichiers objets correspondants (fichiers .o)
OBJS = $(SRCS:.c=.o)

# Commandes
AR = ar
CC = cc
CFLAGS = -Wall -Wextra -Werror -I.

# Règles Makefile

# Règle par défaut (quand on tape simplement "make")
all: $(NAME)

# Règle pour créer la bibliothèque statique libft.a
$(NAME): $(OBJS)
	$(AR) -rcs $@ $(OBJS)

# Règle pour générer les fichiers objets (.o) à partir des fichiers sources (.c)
%.o: %.c
	$(CC) -c $< $(CFLAGS)

# Nettoyage des fichiers objets (.o) et de la bibliothèque (.a)
clean:
	rm -f $(OBJS)

# Nettoyage complet (fichiers objets et bibliothèque)
fclean: clean
	rm -f $(NAME)

# Rebuild complet (nettoie et reconstruit)
re: fclean all

.PHONY:			all clean fclean re
