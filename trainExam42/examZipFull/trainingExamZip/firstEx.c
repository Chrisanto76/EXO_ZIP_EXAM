/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   firstEx.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apoure <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 09:06:48 by apoure            #+#    #+#             */
/*   Updated: 2023/01/11 09:06:55 by apoure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	c = 'A';
	while (i < 4) // lignes
	{
		j = 0;
		while (j < 13) // colonnes
		{
			printf("%c", c);
			if (c < 'Z')
				c++;
			else
				c = 'A';
			j++;
		}
		printf("\n");
		i++;
	}
	return (0);
}