#include <unistd.h>

void	repeat_alpha(char *str)
{
	int	count;
	int	pos;

	count = 0;
	pos = 1;
	while (str[count] != '\0')
	{
		pos = 1;
		if (str[count] >= 'A' && str[count] <= 'Z')
			pos = str[count] - 64;
		if (str[count] >= 'a' && str[count] <= 'z')
			pos = str[count] - 96;
		while (pos >= 1)
		{
			write(1, &str[count], sizeof(char));
			--pos;
		}
		count++;
	}
}

int	main(int argc, char **argv[])
{
	if (argc == 2)
	{
		repeat_alpha(argv[1]);
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
	return (0);
}
