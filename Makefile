# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: llai <llai@student.42london.com>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/31 09:38:33 by llai              #+#    #+#              #
#    Updated: 2023/10/31 17:26:45 by llai             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra
AR = ar rcs
SRC = ft_isalpha \
      ft_isdigit \
      ft_isalnum \
      ft_isascii \
      ft_isprint \
      ft_strlen \
      ft_memset \
      ft_bzero \
      ft_memmove \
      ft_strlcpy \
      ft_strlcat
#BONUS_SRC = 
SRCS = $(addsuffix .c, $(SRC))
OBJS = $(addsuffix .o, $(SRC))
#BONUS_SRCS = $(addsuffix .c, $(BONUS_SRC))
#BONUS_OBJS = $(addsuffix .o, $(BONUS_SRC))

#.c.o: $(SRCS) $(BONUS_SRCS)
%.o: %.c $(SRCS)
	$(CC) $(CFLAGS) -c -o $@ $<

$(NAME): $(OBJS)
	$(AR) $@ $^

test: $(OBJS)
	$(AR) $(NAME) $^
#bonus:$(OBJS) $(BONUS_OBJS)
	#$(AR) $(NAME) $^

all: $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: clean all

.PHONY: all clean fclean re bonus
