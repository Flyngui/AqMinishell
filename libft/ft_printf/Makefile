CC = cc
CFLAGS = -Wall -Werror -Wextra
RM = rm -rf

NAME = libftprintf.a

SOURCES = ft_printf.c \
		  print_c.c \
		  print_s.c \
		  print_di.c \
		  print_p.c \
		  print_u.c \
		  print_x.c \
		  print_xbig.c

OBJS = $(SOURCES:.c=.o)

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean
	@$(MAKE) all


.PHONY: all clean fclean re
