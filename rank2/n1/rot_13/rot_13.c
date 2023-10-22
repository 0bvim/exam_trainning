#include <unistd.h>

void	ft_putchar(char c);

void	rot_13(char *str)
{
	while (*str)
	{
		if ((*str >= 'a' && *str <= 'm') || (*str >= 'A' && *str <= 'M'))
			ft_putchar(*str + 13);
		else if ((*str >= 'n' && *str <= 'z') || (*str >= 'N' && *str <= 'Z'))
			ft_putchar(*str - 13);
		else
			ft_putchar(*str);
		str++;
	}

}

int	main(int argc, char **argv)
{
	if (2 == argc)
	{
		rot_13(argv[1]);
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
