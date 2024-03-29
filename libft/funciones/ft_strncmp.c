/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irosario <irosario@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 16:08:11 by irosario          #+#    #+#             */
/*   Updated: 2024/02/26 11:43:52 by irosario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	x;

	x = 0;
	while (x < n && (s1[x] != '\0' || s2[x] != '\0'))
	{
		if (s1[x] != s2[x])
			return ((unsigned char)s1[x] - (unsigned char)s2[x]);
		x++;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>
int main(void)
{
    const char *str1 = "t0";
    const char *str2 = "test\0";
    unsigned long n = 6;  // Number of characters to compare

    int result = ft_strncmp(str1, str2, n);
    printf("ft_strncmp result: %d\n", result);

    int standardResult = strncmp(str1, str2, n);
    printf("strncmp result: %d\n", standardResult);

    if (result == standardResult)
    {
        printf("Test passed! ft_strncmp matches strncmp.\n");
    }
    else
    {
        printf("Test failed! ft_strncmp does not match strncmp.\n");
    }

    return 0;
}
*/