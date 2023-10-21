int	ft_atoi(const char *fmt)
{
	int	number;
  int sign;
    
  sign = 1;
	number = 0;
	while ((*fmt >= 9 && *fmt <= 13) || *fmt == 32)
	    fmt++;
	if ('-' == *fmt && fmt++)
	    sign = -1;
	while (*fmt >= '0' && *fmt <= '9')
		number = (number * 10) + (*(fmt)++ - '0');
	return (number * sign);
}
