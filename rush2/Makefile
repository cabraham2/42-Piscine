CC = gcc
CFLAGS = -Wall -Werror -Wextra -g
EXEC = rush-02

SRCS_FILES =	main.c \
				display.c \
				big_compil.c \
				open_file.c \
				convert.c \
				convert2.c

DIR_INCLUDES = includes
DIR_SRCS = srcs

SRCS = $(addprefix $(DIR_SRCS)/, $(SRCS_FILES))
OBJS = $(SRCS:%.c=%.o)

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CC) $(CFLAGS) -o $(EXEC) $(OBJS)

$(DIR_SRCS)/%.o: $(DIR_SRCS)/%.c
	$(CC) $(CFLAGS) -I $(DIR_INCLUDES) -o $@ -c $<

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(EXEC)

re: fclean all

.PHONY: all clean fclean re

#<cible> : <dependance>
#	<commande>
#$@ nom cible
#$< nom premiere dependance
#$^ liste dependance
#$? liste dependance plus recentes que la cible
#$* nom fichier, sans son extension
#source -> https://www.youtube.com/watch?v=-riHEHGP2DU

