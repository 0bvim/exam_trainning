#include <unistd.h>

void	inter(char *s1, char *s2)
{
	int	ascii[128] = {0};
	int	ascii2[128] = {0};
	int i = 0;

	while (*s2 && s2[i])
	{
		if (ascii2[(int)s2[i]] == 0)
			ascii2[(int)s2[i]] = 1;
		i++;
	}
	i = 0;
	while (*s1 && s1[i])
	{
		if ((ascii[(int)s1[i]] == 0) && (ascii2[(int)s1[i]] == 1))
		{
			write(1, &s1[i], 1);
			ascii[(int)s1[i]] = 1;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (3 == argc)
	{
		inter(argv[1], argv[2]);
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
	return (0);
}
