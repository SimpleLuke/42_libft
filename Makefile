NAME = libft.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra
AR = ar rcs
SRC = ft_isalpha
#BONUS_SRC = 
SRCS = $(addsuffix .c, $(SRC))
OBJS = $(addsuffix .o, $(SRC))
#BONUS_SRCS = $(addsuffix .c, $(BONUS_SRC))
#BONUS_OBJS = $(addsuffix .o, $(BONUS_SRC))

#.c.o: $(SRCS) $(BONUS_SRCS)
.c.o: $(SRCS)
	$(CC) $(CFLAGS) -c -o $@ $<

$(NAME): $(OBJS)
	$(AR) $@ $^

#bonus:$(OBJS) $(BONUS_OBJS)
bonus:$(OBJS)
	$(AR) $(NAME) $^

all: $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: clean all

.PHONY: all clean fclean re bonus
