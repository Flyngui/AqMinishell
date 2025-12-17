#include "libft/libft.h"

int main(void)
{
	char *NAME = getenv("USER");
	char *HOST = ft_calloc(sizeof(char), 256); // ensure that the buffer is large enough for any hostname
	if (getenv("$HOSTNAME") != NULL)
		ft_strlcpy(HOST, getenv("$HOSTNAME"), 256);
	else
	{
		// if HOSTNAME is not set get it directly
		if (gethostname(HOST, 256) != 0)
		{
			free(HOST);
			return ft_error("gethostname failed");
		}
	}
	// free unnecessary HOST memory
	char *temp = ft_strdup(HOST);
	free(HOST);
	HOST = temp;

	ft_printf("\033[H\033[2J"); // clear terinal and send cursor to top left
	while (1)
	{
		if (NAME && HOST)
			ft_printf("%s@%s > ", NAME, HOST);
		else
			return ft_error(NAME) && ft_error(HOST);
		char **args = ft_split(get_next_line(0), 32);
		if (args == NULL)
			return ft_error("split failed");
		if (ft_strncmp(args[0], (char *)"exit", 4) == 0)
		{
			free(HOST);
			return 0;
		}
		for (int i = 0; args[i] != NULL; i++)
		{
			if (args[i + 1] != NULL)
				ft_printf("%s ", args[i]);
			else
				ft_printf("%s", args[i]);
		}
	}
	return 0;
}
