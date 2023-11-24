#include <unistd.h>

void	ft_union(char *str1, char *str2)
{
	char	ascii[255];
	int	i = 0;

	while (i < 256)	{
		ascii[i] = 0;
		i++;
	}
	i = 0;
	while (*str1 != '\0') {
		if (ascii[(int)str1[i]] == 0) {
			write(1, &str1[i], 1);
			ascii[(int)str1[i]] = 1;
		}
		str1++;
	}
	while (*str2 != '\0') {
		if (ascii[(int)str2[i]] == 0) {
			write(1, &str2[i], 1);
			ascii[(int)str2[i]] = 1;
		}
		str2++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3) {
		ft_union(argv[1], argv[2]);
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
	return (0);
}
