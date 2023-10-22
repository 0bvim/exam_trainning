#include <unistd.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

void	rev_print(char *str)
{
	int	len;

	len = ft_strlen(str);
	while (--len >= 0)
		write(1, &str[len], 1);
}

int	main(int argc, char *argv[])
{
	if (2 == argc)
	{
		rev_print(argv[1]);
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
	return (0);
}
