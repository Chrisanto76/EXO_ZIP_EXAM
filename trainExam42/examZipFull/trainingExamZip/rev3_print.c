/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev3_print.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apoure <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 15:26:21 by apoure            #+#    #+#             */
/*   Updated: 2023/01/17 15:38:50 by apoure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*rev_print(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	i--;
	while (i >= 0)
	{
		write (1, &str[i], 1);
		i--;
	}
	return (str);
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		rev_print(av[1]);
		write (1, "\n", 1);
	}
	return (0);
}
