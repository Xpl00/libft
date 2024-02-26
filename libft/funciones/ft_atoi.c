/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irosario <irosario@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 12:17:29 by irosario          #+#    #+#             */
/*   Updated: 2024/02/22 10:40:00 by irosario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_spaces(char c)
{
	return ((c == ' ' || c == '\n' || c == '\t' || c == '\v'
			|| c == '\f' || c == '\r'));
}

static int	ft_is_number(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_atoi(const char *str)
{
	long	nbr;
	int		sign;
	int		i;

	nbr = 0;
	i = 0;
	sign = 1;
	while (str[i] != '\0' && ft_is_spaces(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (ft_is_number(str[i]))
	{
		nbr = nbr * 10 + str[i] - '0';
		i++;
	}
	return ((int)nbr * sign);
}
