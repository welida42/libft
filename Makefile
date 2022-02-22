# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: welida <welida@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/07 15:24:15 by welida            #+#    #+#              #
#    Updated: 2020/11/14 17:12:30 by welida           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCES = 	ft_memset.c	\
		ft_bzero.c		\
		ft_memcpy.c		\
		ft_memccpy.c	\
		ft_memmove.c 	\
		ft_memchr.c		\
		ft_memcmp.c		\
		ft_strlen.c		\
		ft_isalpha.c 	\
		ft_isdigit.c	\
		ft_isalnum.c	\
		ft_isascii.c	\
		ft_isprint.c	\
		ft_toupper.c	\
		ft_tolower.c	\
		ft_strchr.c		\
		ft_strrchr.c	\
		ft_strncmp.c	\
		ft_strlcpy.c	\
		ft_strlcat.c	\
		ft_strnstr.c	\
		ft_atoi.c		\
		ft_calloc.c		\
		ft_strdup.c		\
		ft_substr.c		\
		ft_strjoin.c 	\
		ft_strtrim.c	\
		ft_putchar_fd.c	\
		ft_putstr_fd.c	\
		ft_putendl_fd.c	\
		ft_putnbr_fd.c	\
		ft_itoa.c		\
		ft_strmapi.c	\
		ft_split.c		
		
SOURCES_BONUS =	ft_lstnew.c	\
		ft_lstadd_front.c	\
		ft_lstsize.c		\
		ft_lstlast.c		\
		ft_lstadd_back.c	\
		ft_lstdelone.c		\
		ft_lstclear.c		\
		ft_lstiter.c		\
		ft_lstmap.c			\
		$(SOURCES)
		

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

OBJECTS = $(SOURCES:.c=.o)
OBJECTS_BONUS = $(SOURCES_BONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)

	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

bonus: $(OBJECTS_BONUS)

	ar rc $(NAME) $(OBJECTS_BONUS)
	ranlib $(NAME)

clean:
	rm -rf $(OBJECTS) $(OBJECTS_BONUS) a.out

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
