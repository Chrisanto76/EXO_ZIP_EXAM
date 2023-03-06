/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apoure <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 13:13:49 by apoure            #+#    #+#             */
/*   Updated: 2023/01/18 13:30:33 by apoure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int     max(int* tab, unsigned int len)
{
	unsigned int	i;
	int	max;

	i = 0;
	if (!len)
		return (0);
	max = tab[0]; 
	while (i < len)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}

/*int	main()
{
	int	tab[5] = {-80, -42, -69, -12, -6};
	int	*arr = {0};

	printf("%d\n", max(tab, 5));
	printf("%d\n", max(arr, 0));

	return (0);
}*/
