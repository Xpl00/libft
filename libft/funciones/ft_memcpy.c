/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irosario <irosario@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 12:08:41 by irosario          #+#    #+#             */
/*   Updated: 2024/02/20 10:57:20 by irosario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(const void *dst, const void *src, size_t n)
{
	unsigned char	*destination;
	unsigned char	*source;
	size_t			count;

	if (!dst && !src)
		return (0);
	destination = (unsigned char *)dst;
	source = (unsigned char *)src;
	count = 0;
	while (count < n)
	{
		destination[count] = source[count];
		count++;
	}
	return ((void *)dst);
}

/*
#include <stdio.h>

int	main(void)
{
	char	src[] = "Hello, World!";
	char	dst[20];

	ft_memcpy(dst, src, 11);
	printf("Source: %s\n", src);
	printf("Destination: %s\n", dst);
	return (0);
}
*/