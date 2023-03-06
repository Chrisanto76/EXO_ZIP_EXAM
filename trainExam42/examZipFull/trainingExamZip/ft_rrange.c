/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apoure <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 08:55:07 by apoure            #+#    #+#             */
/*   Updated: 2023/01/18 10:03:39 by apoure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int     *ft_rrange(int start, int end)
{
	int	*tab;
	int len;
	int	i;

	// taille tab : toujours positif 
	if (start <= end) 
		len = end - start;
	else
		len = start - end;
	// malloc avec len positif
	tab = (int *)malloc(sizeof(*tab) * (len + 1));
	if (!tab)
		return (NULL);
	// remplir
	i = 0;
	while (i < len + 1)
	{
		if (start <= end)
			tab[i] = end - i;
		else
			tab[i] = end + i;
		i++;
	}
	return (tab);
}


int	main()
{
	int	*tab;
	int	start;
	int	end;
	int	i;

	start = 0;
	end = -3;
	i = 0;
	printf ("ft_rrange(%d, %d) returns an array containing ", start, end);
	tab = ft_rrange(start, end);
	while (i < 4)
	{
		printf(" %d, ", tab[i]);
		i++;
	}
	free (tab);
	return (0);
}


