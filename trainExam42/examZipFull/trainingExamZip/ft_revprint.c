/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_revprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apoure <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 08:27:18 by apoure            #+#    #+#             */
/*   Updated: 2023/01/16 08:27:21 by apoure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	ft_revprint(char *str)
{
	int	i;

	i = ft_strlen(str);
	i--;
	while (str[i])
	{
		write (1, &str[i], 1);
		i--;
	}
	return (*str);
}

int	main(void)
{
	char	*c;

	c = "helloWorld";
	ft_revprint(c);
}
