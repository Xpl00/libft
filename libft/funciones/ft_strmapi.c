/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irosario <irosario@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 11:04:43 by irosario          #+#    #+#             */
/*   Updated: 2024/02/22 10:38:47 by irosario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	int		count;
	char	*new_str;

	if (!s || !f)
		return (0);
	count = 0;
	len = ft_strlen(s);
	new_str = malloc((len + 1) * sizeof(char));
	if (!new_str)
		return (0);
	while (count < (int)len)
	{
		new_str[count] = f(count, s[count]);
		count++;
	}
	new_str[len] = '\0';
	return (new_str);
}
