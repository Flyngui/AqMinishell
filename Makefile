# Colors must be included in the form of codes. NC = No color
GREEN = \033[0;32m
BLUE = \033[0;34m
PURPLE = \033[0;35m
CYAN = \033[0;36m
YELLOW = \033[0;33m
NC = \033[0m

NAME = minishell
CC = cc
CFLAGS = -Wall -Wextra -Werror
MAKEFLAGS += --no-print-directory
INCLUDES = -I headers -I /opt/homebrew/opt/readline/include
SRCS =
OBJ_DIR = obj/
OBJS = $(addprefix $(OBJ_DIR), $(SRCS:.c=.o))

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) -o $(NAME) $(OBJS) $(CFLAGS) $(READLINE_FLAGS) $(INCLUDES)

$(OBJ_DIR)%.o: %.c
	@mkdir -p $(OBJ_DIR)
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

libft/libft.a:
	@$(MAKE) -C libft

clean:
	@echo "$(PURPLE)Removing .o files.$(NC)"
	@rm -f $(OBJECTS)
	@$(MAKE) -C libft clean

fclean: clean
	@echo "$(PURPLE)Removing executables.$(NC)"
	@rm -f server client libft/libft.a


re: fclean all

r: re
	@ clear && ./minishell

v: re
	@valgrind --show-leak-kinds=all --leak-check=full --track-fds=all --suppressions=$(PWD)/readline.supp ./minishell
