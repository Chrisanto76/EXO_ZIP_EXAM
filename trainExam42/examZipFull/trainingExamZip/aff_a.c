/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apoure <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 09:08:07 by apoure            #+#    #+#             */
/*   Updated: 2023/01/17 09:15:06 by apoure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	aff_a(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == 'a')
		{
			write (1, "a", 1);
			break;
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		aff_a(av[1]);
	}
	else
	{
		write (1, "a", 1);
	}
	write (1, "\n", 1);
	return (0);
}
