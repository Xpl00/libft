/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irosario <irosario@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 12:14:09 by irosario          #+#    #+#             */
/*   Updated: 2024/02/20 10:45:22 by irosario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	int	isascii;

	isascii = 0;
	if (c >= 0 && c <= 127)
		isascii = 1;
	return (isascii);
}

/*
#include <ctype.h>
#include <stdio.h>
int	main(void)
{
	printf("%d", isascii(138));
	printf("%d", ft_isascii(138));
	return (0);
}
*/