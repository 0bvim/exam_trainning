#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	fatoi(char *str)
{
	int	num = 0;

	while (*str >= '0' && *str <= '9')
	{
		num *= 10;
		num += *str - 48;
		str++;
	}
	return (num);
}

void	putnbr(long nb)
{
	if (nb > 9)
	{
		putnbr(nb / 10);
		ft_putchar(nb % 10 + 48);
	}
	else
		ft_putchar(nb + 48);
}

int	isprime(int number)
{
	for (int counter = 2; counter < number; counter++)
	{
		if (number % counter == 0)
			return (0);
		else
			return (1);
	}

}

int	main(int argc, char **argv)
{
	if (argc == 2 && *argv[1] != 45)
	{
		int	number = fatoi(argv[1]);
		int	sum = 0;
		int	counter = 2;
		for (counter; counter <= number; counter++)
		{
			if (isprime(counter))
				sum += counter;
		}
		putnbr(sum);
		ft_putchar('\n');
	}
	else
		write(1, "0\n", 2);
	return (0);
}
