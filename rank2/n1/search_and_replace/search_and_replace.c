#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c);
int	ft_strlen(char *str);

void	search_and_replace(char *str, char old, char new)
{
	int	count;
	int	check;

	count = 0;
	check = 0;
	while (str[count] != '\0')
	{
		if (str[count] == old)
		{
			check += 1;
			str[count] = new;
		}
		count++;
	}
	if (check == 0)
		write (1, str, ft_strlen(str));
	else
		write (1, str, ft_strlen(str));
}

int	main(int argc, char **argv)
{
	if (4 == argc)
	{
		search_and_replace(argv[1], *argv[2], *argv[3]);
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
	exit (EXIT_SUCCESS);
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	len = 0;

	while (str[len] != '\0')
		len++;
	return (len);
}
