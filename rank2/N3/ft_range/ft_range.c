/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-frei vde-frei@student.42sp.org.br      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 20:24:03 by vde-frei          #+#    #+#             */
/*   Updated: 2023/10/05 20:41:47 by vde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int	*ft_range(int start, int end);

int main(int argc, char *argv[])
{
	int *number = ft_range(-1, -17);

	for(int i = 0; i < 17; i++)
		printf("%d\n", number[i]);
	return (0);
}

int	*ft_range(int start, int end)
{
	int	*range;
	int	count;

	if (end < 0 && start == 0)
		range = malloc(sizeof(int) * (end * -1));
	else if (end < 0 && start < 0)
		range = malloc(sizeof(int) * (((end) - (start)) * -1) + 1);
	else
		range = malloc(sizeof(int) * ((end - start) + 1));
	count = 0;
	if (start > end)
	{
		while(start != (end - 1))
		{
			range[count] = start;
			count++;
			start--;
		}
		return(range);
	}
	if (start < end)
	{
		while(start <= end)
		{
			range[count] = start;
			count++;
			start++;
		}
		return (range);
	}
	return (range);
}
