# Colors must be included in the form of codes. NC = No color
GREEN = \033[0;32m
BLUE = \033[0;34m
PURPLE = \033[0;35m
CYAN = \033[0;36m
YELLOW = \033[0;33m
NC = \033[0m

CC = cc
CFLAGS = -Wall -Werror -Wextra
RM = rm -rf

NAME = libft.a
SOURCES = ft_atoi.c \
          ft_bzero.c \
          ft_calloc.c \
		  ft_error.c \
          ft_isalnum.c \
          ft_isalpha.c \
          ft_isascii.c \
          ft_isdigit.c \
          ft_isprint.c \
          ft_itoa.c \
          ft_memchr.c \
          ft_memcmp.c \
          ft_memcpy.c \
          ft_memmove.c \
          ft_memset.c \
          ft_putchar_fd.c \
          ft_putendl_fd.c \
          ft_putnbr_fd.c \
          ft_putstr_fd.c \
          ft_split.c \
          ft_strchr.c \
          ft_strdup.c \
          ft_striteri.c \
          ft_strjoin.c \
          ft_strlcat.c \
          ft_strlcpy.c \
          ft_strlen.c \
          ft_strmapi.c \
          ft_strncmp.c \
          ft_strnstr.c \
          ft_strrchr.c \
          ft_strtrim.c \
          ft_substr.c \
          ft_tolower.c \
          ft_toupper.c \
          get_next_line/get_next_line.c \
          get_next_line/get_next_line_utils.c \
          ft_printf/ft_printf.c \
          ft_printf/print_c.c \
          ft_printf/print_s.c \
          ft_printf/print_di.c \
          ft_printf/print_p.c \
          ft_printf/print_u.c \
          ft_printf/print_x.c \
          ft_printf/print_xbig.c

OBJS = $(SOURCES:.c=.o)

INCLUDES = -I. -Iget_next_line -Ift_printf

all: print_message $(NAME)

print_message:
	@echo "$(BLUE)Compiling libft.$(NC)"

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean
	$(MAKE) all

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)

%.o: %.c
	@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@


.PHONY: all clean fclean re print_message
