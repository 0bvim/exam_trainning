#include <unistd.h>
#include <stdarg.h>

void	ft_putstr(char *str, int *len)
{
	if (!str)
		str = "(null)";
	while (*str)
		*len += write(1, str++, 1);
}

void	ft_put_digit(long long int nb, int base, int *len)
{
	char	*hexa = "0123456789abcdef";

	if (nb < 0)
	{
		*len += write(1, "-", 1);
		nb *= -1;
	}
	if (nb >= base)
		ft_put_digit((nb / base), base, len);
	*len += write (1, &hexa[nb % base], 1);
}

int	ft_printf(const char *fmt, ...)
{
	va_list ap;
	int	len;

	va_start(ap, fmt);

	while (*fmt)
	{
		if ((*fmt == '%') && ((*(fmt + 1) == 's') \
		|| (*(fmt + 1) == 'd') || (*(fmt + 1) == 'x')))
		{
			fmt++;
			if (*fmt == 's')
				ft_putstr(va_arg(ap, char *), &len);
			else if (*fmt == 'd')
				ft_put_digit(va_arg(ap, long long int), 10, &len);
			else if (*fmt == 'x')
				ft_put_digit(va_arg(ap, long long int), 16, &len);
		}
		else
			len += write(1, fmt, 1);
		fmt++;
	}
	return (va_end(ap), len);
}
