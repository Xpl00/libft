/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irosario <irosario@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 12:43:25 by irosario          #+#    #+#             */
/*   Updated: 2024/02/26 11:42:45 by irosario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dst_len;
	size_t	src_len;

	i = 0;
	j = ft_strlen(dst);
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dstsize < dst_len)
		return (dstsize + ft_strlen(src));
	while (j + 1 < dstsize && src[i] != '\0')
	{
		dst[j] = src[i];
		j++;
		i++;
	}
	dst[j] = '\0';
	return (dst_len + src_len);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void) {
	unsigned long bufsize = 8;

	char dest1[20] = "Hola, ";
	char dest2[20] = "Hola, ";
	const char *src = "mundo!";

	unsigned long result1 = ft_strlcat(dest1, src, bufsize);

	unsigned long result2 = strlcat(dest2, src, bufsize);

	printf("Resultado de ft_strlcat: %s (%lu)\n", dest1, result1);
	printf("Resultado de strlcat original: %s (%lu)\n", dest2, result2);

	if (strcmp(dest1, dest2) == 0 && result1 == result2) {
		printf("¡Las funciones coinciden!\n");
	} else {
		printf("¡Las funciones NO coinciden!\n");
	}

	return (0);
}
*/

/*
	gcc -c ft_strlen.c -o ft_strlen.o
	gcc -c ft_strlcat.c -o ft_strlcat.o

	gcc ft_strlen.o ft_strlcat.o -o myprogram
	./myprogram

	gcc ft_strlen.o ft_strlcat.o -o myprogram && ./myprogram
*/