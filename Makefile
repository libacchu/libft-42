# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/01 09:34:05 by libacchu          #+#    #+#              #
#    Updated: 2022/04/06 12:31:10 by libacchu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FUNCTIONS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
            ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
            ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
            ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
            ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
            ft_strtrim.c ft_itoa.c ft_strmapi.c ft_striteri.c \
            ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
            ft_split.c

OBJS = $(FUNCTIONS:.c=.o)

BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c \
		ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
		ft_lstclear.c ft_lstiter.c ft_lstmap.c

BONUS_OBJS = $(BONUS:.c=.o)

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
AR = ar
ARFLAGS = rcs

$(NAME):
	$(CC) -c $(CFLAGS) $(FUNCTIONS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)
	
all: $(NAME)
	
clean:
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean: clean 
	$(RM) $(NAME)

re: fclean $(NAME)

bonus: $(OBJS) $(BONUS_OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS) $(BONUS_OBJS)
