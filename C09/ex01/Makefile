CC = gcc
CFLAGS = -Wall -Werror -Wextra
EXEC = libft.a

SRCS_FILES =	ft_putchar.c \
				ft_swap.c \
				ft_putstr.c \
				ft_strlen.c \
				ft_strcmp.c \
				main.c

DIR_INCLUDES = includes
DIR_SRCS = srcs

SRCS = $(addprefix $(DIR_SRCS)/, $(SRCS_FILES))
OBJS = $(SRCS:%.c=%.o)

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CC) $(CFLAGS) -o $(EXEC) $(OBJS)
	@echo "$(EXEC) created"

$(DIR_SRCS)/%.o: $(DIR_SRCS)/%.c
	$(CC) $(CFLAGS) -I $(DIR_INCLUDES) -o $@ -c $<

clean:
	rm -rf $(OBJS)
	@echo "All $(EXEC) are deleated"

fclean: clean
	rm -rf $(EXEC)
	@echo "$(EXEC) are deleated"

re: fclean all

.PHONY: all clean fclean re