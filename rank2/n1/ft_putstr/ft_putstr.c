#include <unistd.h>

static int	ft_strlen(char *str);

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

static int	ft_strlen(char *str)
{
	int	len = 0;

	while (str[len] != '\0')
		len++;
	return (len);
}
