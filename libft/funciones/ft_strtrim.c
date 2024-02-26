/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irosario <irosario@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 01:22:51 by irosario          #+#    #+#             */
/*   Updated: 2024/02/22 10:39:07 by irosario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
static char	*trim_helper(char *s1, char *set, char *ptr)
{
	int		i;
	int		j;
	int		is_same;

	i = 0;
	j = 0;
	is_same = 0;
	while (set[j] != '\0')
	{
		while(s1[i] != '\0' && is_same == 0)
		{
			is_same = 1;
			if (s1[i] == set[j])
			{
				ptr = ft_strchr(s1, s1[i + 1]);
				is_same = 0;
			}
			i++;
		}
		j++;
	}
	return (ptr);
}
*/
static char	*trim_before(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		j;
	int		is_same;

	str = (char *)s1;
	j = 0;
	is_same = 1;
	if (!*s1)
		return (0);
	while (str[j] != '\0' && is_same)
	{
		i = 0;
		is_same = 0;
		while (set[i] != '\0')
		{
			if (str[j] == set[i])
			{
				is_same = 1;
			}
			i++;
		}
		j++;
	}
	return (str + j -1);
}

static int	trim_after(char *s1, char const *set)
{
	int		i;
	int		j;

	if (ft_strlen(s1) == 0)
		return (0);
	i = ft_strlen(s1) - 1;
	j = 0;
	while (set[j])
	{
		if (s1[i] == set[j])
		{
			i--;
			j = 0;
		}
		else
			j++;
	}
	return (i);
}

static char	*onlynull(void)
{
	char	*str;

	str = (char *)malloc(1 * sizeof(char));
	if (!str)
		return (0);
	str[0] = 0;
	return (str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	char	*trimmed;
	int		len;

	if (!s1 || !set)
		return (0);
	trimmed = trim_before(s1, set);
	if (!trimmed)
		return (onlynull());
	if (ft_strchr(set, *trimmed) != 0)
		return (onlynull());
	else
		len = trim_after(trimmed, set) + 2;
	str = (char *)malloc((len) * sizeof(char));
	if (str)
	{
		ft_strlcpy(str, trimmed, len);
		return (str);
	}
	else
		return (0);
}
