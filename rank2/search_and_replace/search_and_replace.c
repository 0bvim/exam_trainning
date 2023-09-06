/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-frei vde-frei@student.42sp.org.br      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 18:34:46 by vde-frei          #+#    #+#             */
/*   Updated: 2023/09/05 18:34:46 by vde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static void change_letters(char *str, char *old, char *new);

int main(int argc, char *argv[])
{
	char	*string;
	char	*old;
	char	*new;
	char	*ref_str;

	if (argc - 1 == 3)
	{
		old = argv[2];
		new = argv[3];
		if (strlen(old) + strlen(new) > 2)
			return (printf("\n"));
		string = argv[1];
		ref_str = malloc(sizeof(char) * strlen(string));
		ref_str = strcpy(ref_str, string);
		change_letters(string, old, new);
		if (strcmp(ref_str,string) == 0)
			printf("%s\n", string);
		else
			printf("%s\n", string);
	}
	else
		printf("\n");
	return (0);
}
	
static void	change_letters(char *str, char *old, char *new)
{
	int counter = 0;


	while (str[counter] != '\0')
	{
		if (*old == str[counter])
			str[counter] = *new;
		counter++;
	}
}
