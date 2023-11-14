#include <stdio.h>

int	ft_printf(const char *fmt, ...);

int main(void)
{
	int retrn = ft_printf("%s\nNb: %d\nlHexa: %x\n", "string", 12345, 9123954);
	int retrn1 = printf("%s\nNb: %d\nlHexa: %x\n", "string", 12345, 9123954);

	ft_printf("\nprinted: %d\n", retrn);
	printf("\nprinted: %d\n", retrn1);
	
	return 0;
}
