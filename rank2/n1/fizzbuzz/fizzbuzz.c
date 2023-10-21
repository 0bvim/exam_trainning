#include <unistd.h>

static void	ft_putchar(char c);
static void	ft_putnbr(int nb);

int	main(void)
{
	int	number = 1;

	while (number <= 100)
	{
		if (number % 3 == 0 && number % 5 != 0)
		{
			write(1, "fizz", 4);
			number++;
		}
		else if (number % 5 == 0 && number % 3 != 0)
		{
			write(1, "buzz", 4);
			number++;
		}
		else if (number % 3 == 0 && number % 5 == 0)
		{
			write(1, "fizzbuzz", 8);
			number++;
		}
		else
			ft_putnbr(number++);
		ft_putchar('\n');
	}
	return (0);
}

static void	ft_putchar(char c)
{
	write (1, &c, 1);
}

static void	ft_putnbr(int nb)
{
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + 48);
}
