/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irosario <irosario@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 12:11:24 by irosario          #+#    #+#             */
/*   Updated: 2024/02/22 10:38:09 by irosario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	ch;
	unsigned char	*pt_s;
	size_t			i;

	ch = (unsigned char)c;
	pt_s = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (pt_s[i] == ch)
			return ((void *)(s + i));
		i++;
	}
	return (0);
}
