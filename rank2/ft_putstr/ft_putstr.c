#include <unistd.h>

static int	len(char *str);

static int	len(char *str)
{
	int	len = 0;

	while (str[len] != '\0')
		len++;
	return (len);
}

void	ft_putstr(char *str)
{
	write (1, str, len(str));
}
