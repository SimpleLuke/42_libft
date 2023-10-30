NAME = test
CC = gcc
CFLAGS = -Wall -Werror -Wextra
LIBFT_PATH = "../"

#$(NAME): make_libft
$(NAME): make_libft
	$(CC) $(CFLAGS) -o $(NAME) $(LIBFT_PATH)*.o main.c

make_libft:
	make bonus -C $(LIBFT_PATH)

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: clean all

.PHONY: all clean fclean re
