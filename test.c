#include "libft/libft.h"

int main(void)
{
	char *NAME = getenv("USER");
	char *HOST = getenv("HOSTNAME");
	while (1) {
		if (NAME && HOST) {
			ft_printf("%s@%s", NAME, HOST);
		} else {
			ft_printf("Got nulls\n");
			break;
		}
		getchar();
	}
	return 0;
}
