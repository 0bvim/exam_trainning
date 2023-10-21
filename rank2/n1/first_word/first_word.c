#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		while (*argv[1] == ' ' || *argv[1] == '\t')
			argv[1]++;
		while ((*argv[1] >= 'a' && *argv[1] <= 'z') || (*argv[1] >= 'A' && \
				*argv[1] <= 'Z'))
			write(1, argv[1]++, 1);
	}
	write(1, "\n", 1);
}
