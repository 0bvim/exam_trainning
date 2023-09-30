#include <unistd.h>
#include <stdio.h>

int	upperis(char c)
{
	return (c >= 65 && c <= 90);
}

int	lowerto(char c)
{
	if (c >= 65 && c <= 90);
		return (c += 32);
}

int	lenstr(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	printlo(char **str)
{
	while (!upperis(*(*str)) && **str != '\0')
		ft_putchar(*(*str)++);
}

int	main(int argc,  char **argv)
{
	int	start = 0;
	int	upper = 0;

	if (argc == 2)
	{
		if (upperis(*argv[1]))
			ft_putchar(lowerto(*argv[1]++));
		while (*argv[1] != '\0')
		{
			printlo(&argv[1]);
			if (*argv[1] != '\0')
			{
				ft_putchar('_');
				ft_putchar(lowerto(*argv[1]++));
			}
		}
		ft_putchar('\n');
	}
	else
		write(1, "\n", 1);
	return (0);
}
