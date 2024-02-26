/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irosario <irosario@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 12:18:28 by irosario          #+#    #+#             */
/*   Updated: 2024/02/20 10:44:41 by irosario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

/*
#include <ctype.h>
#include <stdio.h>
int	main(void)
{
	printf("%d", isalnum(78));
	printf("%d", ft_isalnum(78));
	return (0);
}

gcc -c ft_isalpha.c -o ft_isalpha.o
gcc -c ft_isdigit.c -o ft_isdigit.o
gcc -c ft_isalnum.c -o ft_isalnum.o

gcc ft_isalpha.o ft_isdigit.o ft_isalnum.o -o my_program

./my_program
*/