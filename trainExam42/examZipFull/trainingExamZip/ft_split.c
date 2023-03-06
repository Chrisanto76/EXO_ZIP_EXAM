/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apoure <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 10:13:10 by apoure            #+#    #+#             */
/*   Updated: 2023/02/02 12:00:22 by apoure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	isp(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

char **ft_split(char *str)
{
	//index
	int i = 0;
	//ligne
	int	line = 0;
	//mot
	int	w;
	//tableau de mot
	char **tab;

	//protection
	if (str == NULL)
		return (NULL);
	//taille du tableau
	tab = malloc(sizeof(char *) * 1000);
	//verification si tableau
	if (!tab)
		return (NULL);
	//verif si mot
	while (isp(str[i]))
		i++;
	while (str[i])
	{
		if (str[i] > 32)
		{
			w = 0;
			//remplissage du tableau de ligne
			tab[line] = malloc(sizeof(char *) * 1000);
			if (!tab[line])
				return (NULL);
			while (str[i] > 32)
				tab[line][w++] = str[i++];
			tab[line][w] = '\0';
			line++;
		}
		else
			i++;
	}
	//mise a zero du tab de mot
	tab[line] = NULL;
	return (tab);
}

int	main(void)
{
	char **warr;
	char *str;
	int	i;

	i = 0;
	str = "         salut les amis \t ca va \n \t la patate...?\n\n\n";
	warr = ft_split(str);
	while (warr && warr[i])
	{
		printf("%s\n", warr[i]);
		i++;
	}
	i = 0;
	while (warr[i])
	{
		free (warr[i]);
		i++;
	}
	free (warr);
	return (0);
}
