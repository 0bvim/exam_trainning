/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-frei vde-frei@student.42sp.org.br      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 21:41:14 by vde-frei          #+#    #+#             */
/*   Updated: 2023/09/05 21:41:14 by vde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <stdlib.h>

char	*fprime(int *number);
int	is_prime(int number);

int main(int argc, char *argv[])
{
	int *number;

	if (argc - 1 == 1)
	{
		number = malloc(sizeof(int) * 1);
		*number = atoi(argv[1]);
		if (!is_prime(*number))
		{
			printf("%d\n", *number);
			return (0);
		}
		else if (*number == 1)
		{
			printf("%d\n", 1);
			return (0);
		}
		printf("%s\n", fprime(number));
	}
	else
		printf("\n");

	return (0);
}

int	is_prime(int number)
{
	int prime[] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73 };
	int pos = 0;
	int isprime = 0;

	while(number != 1)
	{
		if (number % prime[pos] == 0)
		{
			if (pos >= 2 && isprime == 1)
				return (isprime);
			isprime = 1;
			number /= prime[pos];
			continue;
		}
		else
		{
			if (pos > 4 && isprime == 0)
				return (isprime);
			isprime = 0;
			pos++;
			continue;
		}
	}
	return (isprime);
}
char	*fprime(int *number)
{
	char	*operations;
	int	count;
	int	len; 
	int pos;
	int prime[] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73 };
	count = 0;
	len = 0;
	pos = 0;
	operations = malloc(50);
	if (number > 0)
	{
		while(*number != 1)
		{
			if (*number % prime[pos] == 0)
			{
				if (prime[pos] < 10)
					operations[len] = prime[pos] + '0';
				else
				{
					operations[len] = prime[pos] / 10 + '0';
					len++;
					operations[len] = prime[pos] % 10 + '0';
				}
				len++;
				if (*number % prime[pos] != 1 && *number / prime[pos] != 1)
				{
					operations[len] = '*';
					len++;
				}
				*number /= prime[pos];
				continue;
			}
			else
			{
				pos++;
				continue;
			}
		}
	}
	else
		return ("");
	return (operations);
}
