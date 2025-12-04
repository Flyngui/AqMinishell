NAME = minishell
CC = cc
CFLAGS = -Wall -Wextra -Werror
INCLUDES = -I headers -I /opt/homebrew/opt/readline/include
SRCS =
OBJ_DIR = obj/
OBJS = $(addprefix $(OBJ_DIR), $(SRCS:.c=.o))
READLINE_FLAGS = -L /opt/homebrew/opt/readline/lib -lreadline -lncurses

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) -o $(NAME) $(OBJS) $(CFLAGS) $(READLINE_FLAGS) $(INCLUDES)

$(OBJ_DIR)%.o: %.c
	@mkdir -p $(OBJ_DIR)
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

r: re
	@ clear && ./minishell

v: re
	@valgrind --show-leak-kinds=all --leak-check=full --track-fds=all --suppressions=$(PWD)/readline.supp ./minishell
