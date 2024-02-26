/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irosario <irosario@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 12:16:09 by irosario          #+#    #+#             */
/*   Updated: 2024/02/20 10:43:50 by irosario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			count;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	count = 0;
	while (count < n)
	{
		*ptr = 0;
		count++;
		ptr++;
	}
}

/*
#include <string.h>
#include <stdio.h>
int main() {
    char original_str[] = "Original String";
    char custom_str[] = "Custom String";

    printf("Original String: %s\n", original_str);
    printf("Custom String  : %s\n", custom_str);

    bzero(original_str, sizeof(original_str));
    printf("\nAfter bzero:\n");
    printf("Original String: %s\n", original_str);

    ft_bzero(custom_str, sizeof(custom_str));
    printf("\nAfter ft_bzero:\n");
    printf("Custom String  : %s\n", custom_str);

    return 0;
}
*/