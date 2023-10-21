/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-frei vde-frei@student.42sp.org.br      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 19:46:37 by vde-frei          #+#    #+#             */
/*   Updated: 2023/09/05 19:46:37 by vde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char *argv[])
{
	char	*str = argv[1];
	char	*copy;
	int	index = 0;
	int auxin = 0;

	if (argc - 1 != 1)
		printf("\n");
	else
	{
		copy = malloc(sizeof(char) * strlen(str));
		while(str[index] != '\0')
		{
			str[index] = tolower(str[index]);
			index++;
		}
		index = 0;
		while (str[index] != '\0')
		{
			if (str[index] == '_')
			{
				index++;
				str[index] = toupper(str[index]);
			}
			copy[auxin] = str[index];
			auxin++;
			index++;
		}
		printf("%s\n", copy);
	}
	return (0);
}
