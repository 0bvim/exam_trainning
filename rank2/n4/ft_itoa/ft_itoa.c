#include <stdlib.h>
#include <stdio.h>

int	countdig(int nb)
{
	int dig = 0;

	while (nb > 0)
	{
		dig++;
		nb /= 10;
	}
	return (dig);
}

char	*ft_itoa(int nbr)
{
	int	dig = countdig(nbr);
	char	*str = malloc((sizeof(char *)) * (dig + 1));
	
	str[dig] = '\0';
	while (dig--)
	{
		str[dig] = (nbr % 10 + '0');
		nbr /= 10;
	}
	return (str);
}
