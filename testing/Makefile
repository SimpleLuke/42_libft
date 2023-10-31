# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: llai <llai@student.42london.com>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/31 09:58:10 by llai              #+#    #+#              #
#    Updated: 2023/10/31 15:20:39 by llai             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = test
CC = gcc
CFLAGS = -Wall -Werror -Wextra
LIBFT_PATH = "../"

#$(NAME): make_libft
$(NAME): make_libft
	$(CC) $(CFLAGS) -DLIBBSD_OVERLAY -I/usr/include/bsd -o $(NAME) main.c -L$(LIBFT_PATH) -lft -lbsd

make_libft:
	make all -C $(LIBFT_PATH)

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: clean all

.PHONY: all clean fclean re
