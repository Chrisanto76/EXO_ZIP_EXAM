/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apoure <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 13:33:56 by apoure            #+#    #+#             */
/*   Updated: 2023/01/18 14:17:10 by apoure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int start, int end)
{
	int	*tab;
	int len;
	int	i;

	i = 0;
	if (start <= end)
		len = end - start;
	else
		len = start - end;
	tab = (int *)malloc(sizeof(*tab) *(len + 1));
	if (!tab)                                                                                                                               
        return (NULL);
	while (i <= len)
	{
		if (start <= end)
			tab[i] = start + i;
		else
			tab[i] = start - i;
		i++;
	}
	return (tab);
}

/*
int	main()
{
	int	*tab;
	int	start;
	int	end;
	int	i;
	
	start = -1;
	end = 2;
	i = 0;
	tab = ft_range(start,end);
	printf("\nft_range (%d, %d) return array containing :", start, end);
	while (i < 4)
	{
		printf("%d, ", tab[i]);
		i++;
	}
	return (0);
}*/
