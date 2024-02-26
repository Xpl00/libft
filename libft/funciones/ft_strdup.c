/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irosario <irosario@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 12:44:36 by irosario          #+#    #+#             */
/*   Updated: 2024/02/26 11:42:26 by irosario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	size_t	len;

	len = ft_strlen(s1) + 1;
	ptr = (char *)ft_calloc(len, sizeof(char));
	if (ptr == 0)
		return (0);
	ft_strlcpy(ptr, s1, len);
	return (ptr);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void) {
	const char *original_str = "";

	char *custom_strdup_result = ft_strdup(original_str);
	printf("Custom ft_strdup result: %s\n", custom_strdup_result);

	char *original_strdup_result = strdup(original_str);
	printf("Original strdup result: %s\n", original_strdup_result);

	if (strcmp(custom_strdup_result, original_strdup_result) == 0) {
		printf("¡La implementación de ft_strdup es correcta!\n");
	} else {
		printf("Error: La implementación de ft_strdup es incorrecta.\n");
	}

	free(custom_strdup_result);
	free(original_strdup_result);

	return (0);
}
*/

/*
gcc -c ft_memset.c -o ft_memset.o
gcc -c ft_strlcpy.c -o ft_strlcpy.o
gcc -c ft_calloc.c -o ft_calloc.o
gcc -c ft_strlen.c -o ft_strlen.o
gcc -c ft_strdup.c -o ft_strdup.o

gcc ft_memset.o ft_strlcpy.o ft_calloc.o ft_strlen.o ft_strdup.o -o my_program

./my_program
*/