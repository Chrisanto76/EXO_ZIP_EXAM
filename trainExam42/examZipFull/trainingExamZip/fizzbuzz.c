/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apoure <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 12:54:43 by apoure            #+#    #+#             */
/*   Updated: 2023/01/18 13:10:20 by apoure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int	nb)
{
	if (nb > 9)
		ft_putchar(nb / 10);
	write (1, &"0123456789"[nb % 10], 1);
}

int	main(void)
{
	int	nb;

	nb = 1;
	while(nb <= 100)
	{
		if (nb % 3 == 0 && nb % 5 == 0)
			write (1, "fizzbuzz", 8);
		else if (nb % 3 == 0)
			write (1, "fizz", 4);
		else if (nb % 5 == 0)
			write (1, "buzz", 4);
		else
			ft_putchar(nb);
		write (1, "\n", 1);
		nb++;
	}
	return (0);
}

