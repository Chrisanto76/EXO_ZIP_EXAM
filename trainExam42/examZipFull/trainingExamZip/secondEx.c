/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   secondEx.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apoure <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 09:48:25 by apoure            #+#    #+#             */
/*   Updated: 2023/01/11 09:48:27 by apoure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			i++;
		}
		else
			return (0);
	}
	return (1);
}

int	main(void)
{
	char	*str;

	str = "antonNy";
	printf("%d", ft_str_is_uppercase(str));
}