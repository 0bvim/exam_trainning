#include <unistd.h>

void	ft_putchar(char c);

void	rotone(char *str)
{
	while (*str)
	{
		if (*str == 'z' || *str == 'Z')
			ft_putchar(*str - 25);
		else if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
			ft_putchar(*str + 1);
		else
			ft_putchar(*str);
		str++;
	}
}

int	main(int argc, char **argv)
{
	if (2 == argc)
	{
		rotone(argv[1]);
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
