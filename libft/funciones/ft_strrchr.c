/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irosario <irosario@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:52:47 by nacho             #+#    #+#             */
/*   Updated: 2024/02/22 10:35:55 by irosario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;
	char	ch;

	ch = (char)c;
	len = ft_strlen(s);
	if (ch == '\0')
		return ((char *)(s + len));
	while (len > 0)
	{
		if (*(s + len -1) == ch)
			return ((char *)(s + len - 1));
		len--;
	}
	return (0);
}
