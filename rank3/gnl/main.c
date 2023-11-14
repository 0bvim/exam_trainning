#include <stdio.h>
#include <fcntl.h>
#include "get_next_line.h"

int main(void)
{
	int	fd = open("test.txt", O_RDONLY);
	char	*buffer;

	while (buffer = get_next_line(5))
	{
		printf("%s", buffer);
		free(buffer);
	}
	return 0;
}
