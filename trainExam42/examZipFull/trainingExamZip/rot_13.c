/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apoure <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 14:01:06 by apoure            #+#    #+#             */
/*   Updated: 2023/01/11 14:01:08 by apoure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	rot_13(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'm')
			|| (str[i] >= 'A' && str[i] <= 'M'))
			str[i] += 13;
		else if ((str[i] >= 'n' && str[i] <= 'z')
			|| (str[i] >= 'N' && str[i] <= 'Z'))
				str[i] -= 13;
		write (1, &str[i], 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		rot_13(av[1]);
	write (1, "\n", 1);
}