# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mnurlybe <mnurlybe@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/29 15:22:17 by mnurlybe          #+#    #+#              #
#    Updated: 2023/01/23 20:16:13 by mnurlybe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

MY_SOURCES = ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_strlen.c \
	ft_memset.c \
	ft_bzero.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_strlcat.c \
	ft_strlcpy.c \
	ft_tolower.c \
	ft_toupper.c \
	ft_strchr.c \
	ft_strrchr.c \
	ft_strncmp.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_strnstr.c \
	ft_atoi.c \
	ft_calloc.c \
	ft_strdup.c \
	ft_substr.c \
	ft_strjoin.c \
	ft_strtrim.c \
	ft_split.c \
	ft_itoa.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_strmapi.c \
	ft_striteri.c

MY_BONUS_SOURCES = ft_lstnew.c \
	ft_lstadd_front.c \
	ft_lstsize.c \
	ft_lstlast.c \
	ft_lstadd_back.c \
	ft_lstdelone.c \
	ft_lstclear.c \
	ft_lstiter.c \
	ft_lstmap.c
	
					
	     
MY_HEADER = libft.h

MY_OBJECTS = $(MY_SOURCES:.c=.o)

MY_BONUS_OBJECTS = $(MY_BONUS_SOURCES:.c=.o)

CFLAGS = -Wall -Wextra -Werror

.c.o:
	cc $(CFLAGS) -c -I libft.h $< -o ${<:.c=.o}

$(NAME): $(MY_OBJECTS)
	ar rcs $(NAME) $(MY_OBJECTS)
	
so:
	gcc -nostartfiles -fPIC $(CFLAGS) $(MY_SOURCES) $(MY_BONUS_SOURCES)
	gcc -nostartfiles -shared -o libft.so $(MY_OBJECTS) $(MY_BONUS_OBJECTS)

bonus:	$(MY_BONUS_OBJECTS)
	ar rcs $(NAME) $(MY_BONUS_OBJECTS)

all: $(NAME)

clean:
	rm -f $(MY_OBJECTS) $(MY_BONUS_OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re
