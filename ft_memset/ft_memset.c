/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soaoki <soaoki@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 22:24:45 by soaoki            #+#    #+#             */
/*   Updated: 2024/08/05 00:05:29 by soaoki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memset(void *s, int c, size_t size)
{
	int				i;
	unsigned char	*string;

	i = 0;
	string = s;
	while (i < size)
	{
		string[i] = c;
		i++;
	}
	return (s);
}

int	main(void)
{
	int	s1[] = "abcdefg";
	int	s2[] = "abcdefg";

	printf("%s\n", memset(s1, 'x', 5));
	printf("%s\n", ft_memset(s1, 'x', 5));
}
