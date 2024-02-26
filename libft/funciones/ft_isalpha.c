/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irosario <irosario@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 12:14:40 by irosario          #+#    #+#             */
/*   Updated: 2024/02/20 10:45:03 by irosario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	int	isalpha;

	isalpha = 0;
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		isalpha = 1;
	return (isalpha);
}

/*
#include <ctype.h>
#include <stdio.h>
int	main(void)
{
	printf("%d", isalpha(65));
	printf("%d", ft_isalpha(65));
	return (0);
}
*/