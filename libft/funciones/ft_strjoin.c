/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irosario <irosario@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 12:19:59 by irosario          #+#    #+#             */
/*   Updated: 2024/02/22 10:36:29 by irosario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	total_len;

	total_len = ft_strlen(s1) + ft_strlen(s2) + 1;
	ptr = (char *)malloc(total_len * sizeof(char));
	if (ptr)
	{
		ft_strlcpy(ptr, s1, ft_strlen(s1) + 1);
		ft_strlcat(ptr, s2, total_len);
		ptr[total_len - 1] = '\0';
		return (ptr);
	}
	else
		return (0);
}
